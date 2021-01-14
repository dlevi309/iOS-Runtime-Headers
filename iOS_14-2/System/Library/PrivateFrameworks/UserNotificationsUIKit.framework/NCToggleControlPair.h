/*
* Generated on Thursday, January 14, 2021 at 2:25:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
*/

#import <UserNotificationsUIKit/UserNotificationsUIKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PLContentSizeCategoryAdjusting.h>
#import <libobjc.A.dylib/MTMaterialGrouping.h>

@class NSString, NSArray;

@interface NCToggleControlPair : UIView <PLContentSizeCategoryAdjusting, MTMaterialGrouping> {

	NSString* _materialGroupNameBase;
	NSArray* _toggleControls;

}

@property (nonatomic,readonly) NSArray * toggleControls;                          //@synthesize toggleControls=_toggleControls - In the implementation block
@property (nonatomic,copy) NSString * preferredContentSizeCategory; 
@property (assign,nonatomic) BOOL adjustsFontForContentSizeCategory; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * materialGroupNameBase;                      //@synthesize materialGroupNameBase=_materialGroupNameBase - In the implementation block
-(void)setAdjustsFontForContentSizeCategory:(BOOL)arg1 ;
-(BOOL)adjustsFontForContentSizeCategory;
-(BOOL)adjustForContentSizeCategoryChange;
-(NSString *)materialGroupNameBase;
-(void)layoutSubviews;
-(void)setMaterialGroupNameBase:(NSString *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setLeadingControlExpanded:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)initWithLeadingToggleControl:(id)arg1 trailingToggleControl:(id)arg2 ;
-(NSArray *)toggleControls;
-(void)_handleTouchUpInside:(id)arg1 withEvent:(id)arg2 ;
-(double)_effectiveValueForMinValue:(double)arg1 withFont:(id)arg2 ;
-(id)_leadingToggleControl;
-(id)_trailingToggleControl;
-(double)_effectiveInterControlPadding;
@end

