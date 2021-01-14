/*
* Generated on Thursday, January 14, 2021 at 2:26:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
*/

#import <CoverSheet/CSCoverSheetViewBase.h>

@class _UILegibilitySettings, CSAccessoryConfiguration;

@interface CSAccessoryView : CSCoverSheetViewBase {

	_UILegibilitySettings* _legibilitySettings;

}

@property (nonatomic,readonly) CSAccessoryConfiguration * configuration; 
@property (nonatomic,retain) _UILegibilitySettings * legibilitySettings;              //@synthesize legibilitySettings=_legibilitySettings - In the implementation block
@property (nonatomic,readonly) double animationDurationBeforeDismissal; 
-(void)setLegibilitySettings:(_UILegibilitySettings *)arg1 ;
-(BOOL)isReduceTransparencyEnabled;
-(void)layoutSubviews;
-(CSAccessoryConfiguration *)configuration;
-(_UILegibilitySettings *)legibilitySettings;
-(BOOL)isReduceMotionEnabled;
-(void)performAnimation:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(double)animationDurationBeforeDismissal;
@end

