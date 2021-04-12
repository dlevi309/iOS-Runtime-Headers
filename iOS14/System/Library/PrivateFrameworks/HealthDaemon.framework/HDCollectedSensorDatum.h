/*
* Generated on Thursday, January 14, 2021 at 2:25:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

@class NSUUID, NSDateInterval, NSData;


@protocol HDCollectedSensorDatum <NSObject,NSCopying,NSSecureCoding>
@property (nonatomic,copy,readonly) NSUUID * datumIdentifier; 
@property (nonatomic,copy,readonly) NSDateInterval * dateInterval; 
@property (nonatomic,copy,readonly) NSData * resumeContext; 
@required
-(NSDateInterval *)dateInterval;
-(NSUUID *)datumIdentifier;
-(NSData *)resumeContext;

@end

