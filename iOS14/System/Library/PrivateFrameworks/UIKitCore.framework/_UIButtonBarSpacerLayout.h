/*
* Generated on Thursday, January 14, 2021 at 2:20:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UIButtonBarLayout.h>

@class UIBarButtonItem, UIView, NSLayoutConstraint;

@interface _UIButtonBarSpacerLayout : _UIButtonBarLayout {

	UIBarButtonItem* _item;
	UIView* _spacer;
	NSLayoutConstraint* _requestedSize;
	NSLayoutConstraint* _minimumSize;
	NSLayoutConstraint* _equalSize;
	BOOL _flexible;
	long long _spacerType;

}

@property (nonatomic,readonly) long long spacerType;              //@synthesize spacerType=_spacerType - In the implementation block
+(long long)typeOfSpacerBetweenLayout:(id)arg1 andLayout:(id)arg2 ;
+(id)spacerForLayoutMetrics:(id)arg1 betweenLayout:(id)arg2 andLayout:(id)arg3 ;
-(double)minimumLayoutWidthGivenMinimumSpaceWidth:(double)arg1 ;
-(BOOL)isSpaceLayout;
-(void)_addLayoutViews:(id)arg1 ;
-(id)initWithLayoutMetrics:(id)arg1 ;
-(void)_addConstraintsToActivate:(id)arg1 toDeactivate:(id)arg2 ;
-(id)barButtonItem;
-(void)_configure;
-(BOOL)suppressSpacing;
-(id)description;
-(long long)spacerType;
-(id)initWithLayoutMetrics:(id)arg1 barButtonItem:(id)arg2 ;
@end

