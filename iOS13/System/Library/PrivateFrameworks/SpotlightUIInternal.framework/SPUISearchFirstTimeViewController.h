/*
* Generated on Monday, March 1, 2021 at 2:35:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpotlightUIInternal.framework/SpotlightUIInternal
*/

#import <SearchUI/SearchUIFirstTimeExperienceViewController.h>

@interface SPUISearchFirstTimeViewController : SearchUIFirstTimeExperienceViewController {

	BOOL _hasBeenDisplayed;

}

@property (assign) BOOL hasBeenDisplayed;              //@synthesize hasBeenDisplayed=_hasBeenDisplayed - In the implementation block
+(BOOL)needsDisplay;
+(long long)viewCount;
+(void)dismissForever;
+(void)updateViewCountToCount:(long long)arg1 ;
-(BOOL)hasBeenDisplayed;
-(void)setHasBeenDisplayed:(BOOL)arg1 ;
-(id)initWithSupportedDomains:(unsigned long long)arg1 explanationText:(id)arg2 learnMoreText:(id)arg3 continueButtonTitle:(id)arg4 ;
-(void)updateViewCount;
@end

