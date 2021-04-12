/*
* Generated on Thursday, January 14, 2021 at 2:21:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
*/

#import <libobjc.A.dylib/CUTCoreAnalyticsMetric.h>

@class NSDictionary, NSString;

@interface IDSMagnetDataCorruptionRecoveryTimeInMsMetric : NSObject <CUTCoreAnalyticsMetric> {

	long long _recoveryTime;

}

@property (nonatomic,readonly) long long recoveryTime;                     //@synthesize recoveryTime=_recoveryTime - In the implementation block
@property (readonly) NSDictionary * dictionaryRepresentation; 
@property (readonly) NSString * name; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSDictionary *)dictionaryRepresentation;
-(long long)recoveryTime;
-(id)initWithRecoveryTime:(long long)arg1 ;
-(NSString *)name;
@end

