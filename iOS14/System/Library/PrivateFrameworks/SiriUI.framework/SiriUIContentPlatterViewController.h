/*
* Generated on Thursday, January 14, 2021 at 2:24:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
*/

#import <UIKitCore/UIViewController.h>

@class NSArray, SiriUIContentPlatterView;

@interface SiriUIContentPlatterViewController : UIViewController {

	NSArray* _contentViewControllers;

}

@property (nonatomic,retain) NSArray * contentViewControllers;                             //@synthesize contentViewControllers=_contentViewControllers - In the implementation block
@property (nonatomic,readonly) SiriUIContentPlatterView * contentPlatterView; 
-(SiriUIContentPlatterView *)contentPlatterView;
-(BOOL)_canShowWhileLocked;
-(void)loadView;
-(void)setContentViewControllers:(NSArray *)arg1 ;
-(NSArray *)contentViewControllers;
@end

