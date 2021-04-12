/*
* Generated on Thursday, January 14, 2021 at 2:25:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithFrame:(CGRect)arg1 ;
-(UILayoutGuide *)contentLayoutGuide;
-(id)initWithCoder:(id)arg1 ;
@end

