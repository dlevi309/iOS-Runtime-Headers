/*
* Generated on Thursday, January 14, 2021 at 2:26:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MessageProtection.framework/MessageProtection
*/


@class NSDate;

@interface NGMTimeBasedEvaluations : NSObject {

	NSDate* _date;

}

@property (retain) NSDate * date;              //@synthesize date=_date - In the implementation block
+(id)sharedManager;
+(BOOL)validateFetchedPrekeyTimestamp:(double)arg1 forEvaluationType:(unsigned long long)arg2 ;
+(BOOL)prekeyShouldBeRolled:(id)arg1 ;
+(id)nowDate;
+(double)timeIntervalAllowedForAction:(unsigned long long)arg1 ;
+(void)setNowDate:(id)arg1 ;
+(id)oldestDateAllowedToSendTo;
+(BOOL)prekeyCanBeDeleted:(id)arg1 ;
+(id)debugDescriptionForAction:(unsigned long long)arg1 ;
-(void)setDate:(NSDate *)arg1 ;
-(NSDate *)date;
@end

