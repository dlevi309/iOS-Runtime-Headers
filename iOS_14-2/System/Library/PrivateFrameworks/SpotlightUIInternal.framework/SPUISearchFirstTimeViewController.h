/*
* Generated on Thursday, January 14, 2021 at 2:24:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpotlightUIInternal.framework/SpotlightUIInternal
*/

#import <SearchUI/SearchUIFirstTimeExperienceViewController.h>

@class UIView;

@interface SPUISearchFirstTimeViewController : SearchUIFirstTimeExperienceViewController {

	BOOL _hasBeenDisplayed;
	UIView* _contentView;

}

@property (assign) BOOL hasBeenDisplayed;              //@synthesize hasBeenDisplayed=_hasBeenDisplayed - In the implementation block
@property (retain) UIView * contentView;               //@synthesize contentView=_contentView - In the implementation block
+(void)dismissForever;
+(BOOL)needsDisplay;
+(long long)viewCount;
+(void)updateViewCountToCount:(long long)arg1 ;
-(BOOL)hasBeenDisplayed;
-(void)setHasBeenDisplayed:(BOOL)arg1 ;
-(void)setContentView:(UIView *)arg1 ;
-(UIView *)contentView;
-(id)initWithSupportedDomains:(unsigned long long)arg1 explanationText:(id)arg2 learnMoreText:(id)arg3 continueButtonTitle:(id)arg4 ;
-(void)updateViewCount;
-(double)idealContentHeight;
@end

