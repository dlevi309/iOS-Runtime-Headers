/*
* Generated on Monday, March 1, 2021 at 2:32:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
*/

#import <AppleAccountUI/AppleAccountUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UILayoutGuide;

@interface AAUIBuddyView : UIView {

	UILayoutGuide* _contentLayoutGuide;

}

@property (nonatomic,readonly) UILayoutGuide * contentLayoutGuide;              //@synthesize contentLayoutGuide=_contentLayoutGuide - In the implementation block
+(BOOL)requiresConstraintBasedLayout;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UILayoutGuide *)contentLayoutGuide;
@end

