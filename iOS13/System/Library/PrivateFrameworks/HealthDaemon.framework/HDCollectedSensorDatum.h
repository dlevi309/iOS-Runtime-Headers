/*
* Generated on Monday, March 1, 2021 at 2:34:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

@class NSUUID, NSDateInterval, NSData;


@protocol HDCollectedSensorDatum <NSObject,NSCopying,NSSecureCoding>
@property (nonatomic,copy,readonly) NSUUID * datumIdentifier; 
@property (nonatomic,copy,readonly) NSDateInterval * dateInterval; 
@property (nonatomic,copy,readonly) NSData * resumeContext; 
@required
-(NSDateInterval *)dateInterval;
-(NSData *)resumeContext;
-(NSUUID *)datumIdentifier;

@end

