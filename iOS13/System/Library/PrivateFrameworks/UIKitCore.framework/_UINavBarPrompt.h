/*
* Generated on Monday, March 1, 2021 at 2:30:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel, UINavigationBar, NSString;

@interface _UINavBarPrompt : UIView {

	UILabel* _label;
	UINavigationBar* _navBar;

}

@property (nonatomic,copy) NSString * prompt; 
-(void)layoutSubviews;
-(NSString *)prompt;
-(void)setPrompt:(NSString *)arg1 ;
-(CGRect)promptBounds;
-(CGRect)_labelFrame;
-(CGSize)_updateLabelTextColorAndFontReturningShadowOffset;
-(id)initWithNavBar:(id)arg1 ;
@end

