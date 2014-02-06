//
//  ViewController.h
//  GenerateUniqueId
//
//  Created by pramesh on 2/6/14.
//  Copyright (c) 2014 pramesh. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController
@property (weak, nonatomic) IBOutlet UILabel *lblResult;
@property (weak, nonatomic) IBOutlet UIButton *btnGenerate;
- (IBAction)btnGenerate:(id)sender;

@end
