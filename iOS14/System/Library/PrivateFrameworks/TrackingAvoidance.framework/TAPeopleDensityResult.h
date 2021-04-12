/*
* Generated on Thursday, January 14, 2021 at 2:28:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TrackingAvoidance.framework/TrackingAvoidance
*/

#import <TrackingAvoidance/TrackingAvoidance-Structs.h>
#import <libobjc.A.dylib/OSLogCoding.h>
#import <libobjc.A.dylib/TAEventProtocol.h>

@class NSDateInterval, NSDictionary, NSDate, NSString;

@interface TAPeopleDensityResult : NSObject <OSLogCoding, TAEventProtocol> {

	long long _peopleDensityState;
	double _confidence;
	NSDateInterval* _observationInterval;
	NSDictionary* _additionalInfo;
	NSDate* _date;

}

@property (nonatomic,readonly) long long peopleDensityState;                           //@synthesize peopleDensityState=_peopleDensityState - In the implementation block
@property (nonatomic,readonly) double confidence;                                      //@synthesize confidence=_confidence - In the implementation block
@property (nonatomic,copy,readonly) NSDateInterval * observationInterval;              //@synthesize observationInterval=_observationInterval - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * additionalInfo;                     //@synthesize additionalInfo=_additionalInfo - In the implementation block
@property (nonatomic,copy,readonly) NSDate * date;                                     //@synthesize date=_date - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(double)confidence;
-(id)descriptionDictionary;
-(void)encodeWithOSLogCoder:(id)arg1 options:(unsigned long long)arg2 maxLength:(unsigned long long)arg3 ;
-(NSDateInterval *)observationInterval;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(id)getDate;
-(NSDictionary *)additionalInfo;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)date;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(long long)peopleDensityState;
-(id)initWithState:(long long)arg1 confidence:(double)arg2 observationInterval:(id)arg3 additionalInfo:(id)arg4 date:(id)arg5 ;
@end

