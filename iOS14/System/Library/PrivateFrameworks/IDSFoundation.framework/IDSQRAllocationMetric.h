/*
* Generated on Thursday, January 14, 2021 at 2:22:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
*/

#import <libobjc.A.dylib/CUTCoreAnalyticsMetric.h>

@class NSString, NSDictionary;

@interface IDSQRAllocationMetric : NSObject <CUTCoreAnalyticsMetric> {

	unsigned _result;
	unsigned _hasRecipientAccepted;
	unsigned _payloadSize;
	unsigned long long _duration;
	NSString* _topic;
	NSString* _service;

}

@property (nonatomic,readonly) unsigned long long duration;                //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) unsigned result;                            //@synthesize result=_result - In the implementation block
@property (nonatomic,readonly) unsigned hasRecipientAccepted;              //@synthesize hasRecipientAccepted=_hasRecipientAccepted - In the implementation block
@property (nonatomic,readonly) unsigned payloadSize;                       //@synthesize payloadSize=_payloadSize - In the implementation block
@property (nonatomic,readonly) NSString * topic;                           //@synthesize topic=_topic - In the implementation block
@property (nonatomic,readonly) NSString * service;                         //@synthesize service=_service - In the implementation block
@property (readonly) NSDictionary * dictionaryRepresentation; 
@property (readonly) NSString * name; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSDictionary *)dictionaryRepresentation;
-(NSString *)topic;
-(NSString *)name;
-(unsigned)payloadSize;
-(unsigned)hasRecipientAccepted;
-(id)initWithDuration:(unsigned long long)arg1 result:(unsigned)arg2 hasRecipientAccepted:(unsigned)arg3 payloadSize:(unsigned)arg4 topic:(id)arg5 service:(id)arg6 ;
-(unsigned)result;
-(unsigned long long)duration;
-(NSString *)service;
@end

