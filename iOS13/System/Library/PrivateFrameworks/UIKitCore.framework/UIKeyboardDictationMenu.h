/*
* Generated on Monday, March 1, 2021 at 2:30:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIKeyboardMenuView.h>

@interface UIKeyboardDictationMenu : UIKeyboardMenuView
+(id)sharedInstance;
+(id)activeInstance;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)preferredSize;
-(void)hide;
-(void)fade;
-(void)fadeWithDelay:(double)arg1 ;
-(BOOL)usesTable;
-(void)cleanupForFadeOrHide;
-(BOOL)centerPopUpOverKey;
-(void)performShowAnimation;
-(void)willShow;
-(BOOL)usesDimmingView;
@end

