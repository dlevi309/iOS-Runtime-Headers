/*
* Generated on Thursday, January 14, 2021 at 2:20:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIAlertControllerShadowedScrollView.h>

@class NSArray, UIView;

@interface _UIInterfaceActionGroupHeaderScrollView : _UIAlertControllerShadowedScrollView {

	NSArray* _constraints;
	UIView* _contentView;

}

@property (nonatomic,readonly) UIView * contentView;              //@synthesize contentView=_contentView - In the implementation block
-(id)initWithContentView:(id)arg1 ;
-(void)accessoryInsetsDidChange:(UIEdgeInsets)arg1 ;
-(void)updateConstraints;
-(UIView *)contentView;
-(double)_contentFitCanScrollThreshold;
@end

