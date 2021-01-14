/*
* Generated on Thursday, January 14, 2021 at 2:20:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIKeyboardMenuView.h>

@interface UIKeyboardDictationMenu : UIKeyboardMenuView
+(id)activeInstance;
+(id)sharedInstance;
-(void)fade;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)preferredSize;
-(void)willShow;
-(void)fadeWithDelay:(double)arg1 ;
-(BOOL)usesTable;
-(void)hide;
-(BOOL)usesDimmingView;
-(void)cleanupForFadeOrHide;
-(BOOL)centerPopUpOverKey;
-(void)performShowAnimation;
@end

