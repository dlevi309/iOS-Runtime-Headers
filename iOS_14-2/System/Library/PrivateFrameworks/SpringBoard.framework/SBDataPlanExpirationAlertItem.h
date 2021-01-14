/*
* Generated on Thursday, January 14, 2021 at 2:25:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBDataPlanAccountAlertItem.h>

@class NSDate;

@interface SBDataPlanExpirationAlertItem : SBDataPlanAccountAlertItem {

	NSDate* _expirationDate;

}

@property (nonatomic,retain) NSDate * expirationDate;              //@synthesize expirationDate=_expirationDate - In the implementation block
-(void)setExpirationDate:(NSDate *)arg1 ;
-(void)configure:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2 ;
-(NSDate *)expirationDate;
-(id)initWithAccountURL:(id)arg1 expirationDate:(id)arg2 ;
@end

