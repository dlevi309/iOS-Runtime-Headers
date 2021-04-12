/*
* Generated on Monday, March 1, 2021 at 2:34:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@class NSArray, NSNumber;

@interface HDSharingPredicate : NSObject {

	NSArray* _sharedSampleTypes;
	NSNumber* _maxSampleAge;

}

@property (nonatomic,copy) NSArray * sharedSampleTypes;              //@synthesize sharedSampleTypes=_sharedSampleTypes - In the implementation block
@property (nonatomic,copy) NSNumber * maxSampleAge;                  //@synthesize maxSampleAge=_maxSampleAge - In the implementation block
-(NSNumber *)maxSampleAge;
-(NSArray *)sharedSampleTypes;
-(void)setMaxSampleAge:(NSNumber *)arg1 ;
-(void)setSharedSampleTypes:(NSArray *)arg1 ;
@end

