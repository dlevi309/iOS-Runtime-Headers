/*
* Generated on Thursday, January 14, 2021 at 2:21:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDate;

@interface PDScheduledActivityCriteria : NSObject <NSSecureCoding, NSCopying> {

	NSString* _priorityKey;
	long long _gracePeriod;
	BOOL _requireMainsPower;
	BOOL _requireScreenSleep;
	BOOL _requireNetworkConnectivity;
	BOOL _repeating;
	NSDate* _startDate;
	NSDate* _endDate;
	double _repeatInterval;
	NSString* _reason;

}

@property (nonatomic,retain) NSDate * startDate;                             //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,retain) NSDate * endDate;                               //@synthesize endDate=_endDate - In the implementation block
@property (assign,nonatomic) BOOL requireMainsPower;                         //@synthesize requireMainsPower=_requireMainsPower - In the implementation block
@property (assign,nonatomic) BOOL requireScreenSleep;                        //@synthesize requireScreenSleep=_requireScreenSleep - In the implementation block
@property (assign,nonatomic) BOOL requireNetworkConnectivity;                //@synthesize requireNetworkConnectivity=_requireNetworkConnectivity - In the implementation block
@property (assign,getter=isRepeating,nonatomic) BOOL repeating;              //@synthesize repeating=_repeating - In the implementation block
@property (assign,nonatomic) double repeatInterval;                          //@synthesize repeatInterval=_repeatInterval - In the implementation block
@property (nonatomic,copy) NSString * reason;                                //@synthesize reason=_reason - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)maintenanceActivityCriteriaWithStartDate:(id)arg1 ;
+(id)priorityActivityCriteriaWithStartDate:(id)arg1 ;
-(NSDate *)endDate;
-(BOOL)isRepeating;
-(void)setStartDate:(NSDate *)arg1 ;
-(id)init;
-(NSDate *)startDate;
-(void)setRepeating:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setEndDate:(NSDate *)arg1 ;
-(id)debugDescription;
-(BOOL)requireNetworkConnectivity;
-(void)setRepeatInterval:(double)arg1 ;
-(void)setRequireMainsPower:(BOOL)arg1 ;
-(void)setRequireScreenSleep:(BOOL)arg1 ;
-(NSString *)reason;
-(id)initWithPriorityKey:(id)arg1 gracePeriod:(long long)arg2 startDate:(id)arg3 ;
-(unsigned long long)hash;
-(id)xpcActivityCriteria;
-(BOOL)isEqualToScheduledAcivityCriteria:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)requireScreenSleep;
-(BOOL)requireMainsPower;
-(void)setReason:(NSString *)arg1 ;
-(void)setRequireNetworkConnectivity:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)repeatInterval;
-(BOOL)isEqual:(id)arg1 ;
@end

