/*
* Generated on Thursday, January 14, 2021 at 2:21:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
*/

#import <libobjc.A.dylib/CUTCoreAnalyticsMetric.h>

@class NSString, NSDictionary;

@interface IDSWiFiSetupAttemptMetric : NSObject <CUTCoreAnalyticsMetric> {

	unsigned long long _attemptType;
	unsigned long long _msDuration;
	unsigned long long _result;
	NSString* _client;

}

@property (nonatomic,readonly) unsigned long long attemptType;              //@synthesize attemptType=_attemptType - In the implementation block
@property (nonatomic,readonly) unsigned long long msDuration;               //@synthesize msDuration=_msDuration - In the implementation block
@property (nonatomic,readonly) unsigned long long result;                   //@synthesize result=_result - In the implementation block
@property (nonatomic,readonly) NSString * client;                           //@synthesize client=_client - In the implementation block
@property (readonly) NSDictionary * dictionaryRepresentation; 
@property (readonly) NSString * name; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSDictionary *)dictionaryRepresentation;
-(NSString *)client;
-(unsigned long long)attemptType;
-(unsigned long long)msDuration;
-(id)initWithAttemptType:(unsigned long long)arg1 msDuration:(unsigned long long)arg2 result:(unsigned long long)arg3 client:(id)arg4 ;
-(NSString *)name;
-(unsigned long long)result;
@end

