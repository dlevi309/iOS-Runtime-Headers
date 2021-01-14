/*
* Generated on Thursday, January 14, 2021 at 2:20:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setPrompt:(NSString *)arg1 ;
-(NSString *)prompt;
-(CGSize)_updateLabelTextColorAndFontReturningShadowOffset;
-(void)layoutSubviews;
-(CGRect)_labelFrame;
-(CGRect)promptBounds;
-(id)initWithNavBar:(id)arg1 ;
@end

