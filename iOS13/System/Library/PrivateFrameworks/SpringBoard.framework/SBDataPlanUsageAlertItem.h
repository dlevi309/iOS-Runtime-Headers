/*
* Generated on Monday, March 1, 2021 at 2:35:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

