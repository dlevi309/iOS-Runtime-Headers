/*
* Generated on Thursday, January 14, 2021 at 2:25:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBDataPlanAccountAlertItem.h>

@class NSNumber;

@interface SBDataPlanUsageAlertItem : SBDataPlanAccountAlertItem {

	NSNumber* _remainingPortion;

}

@property (nonatomic,retain) NSNumber * remainingPortion;              //@synthesize remainingPortion=_remainingPortion - In the implementation block
-(void)configure:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2 ;
-(id)initWithAccountURL:(id)arg1 usage:(id)arg2 ;
-(void)setRemainingPortion:(NSNumber *)arg1 ;
-(NSNumber *)remainingPortion;
@end

