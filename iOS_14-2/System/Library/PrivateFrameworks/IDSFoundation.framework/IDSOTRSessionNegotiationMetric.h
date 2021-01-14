/*
* Generated on Thursday, January 14, 2021 at 2:21:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
*/

#import <libobjc.A.dylib/CUTCoreAnalyticsMetric.h>

@class NSString, NSDictionary;

@interface IDSOTRSessionNegotiationMetric : NSObject <CUTCoreAnalyticsMetric> {

	unsigned _result;
	NSString* _service;
	unsigned long long _priority;
	unsigned long long _duration;

}

@property (nonatomic,readonly) NSString * service;                         //@synthesize service=_service - In the implementation block
@property (nonatomic,readonly) unsigned long long priority;                //@synthesize priority=_priority - In the implementation block
@property (nonatomic,readonly) unsigned long long duration;                //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) unsigned result;                            //@synthesize result=_result - In the implementation block
@property (readonly) NSDictionary * dictionaryRepresentation; 
@property (readonly) NSString * name; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSDictionary *)dictionaryRepresentation;
-(id)initWithService:(id)arg1 priority:(unsigned long long)arg2 duration:(unsigned long long)arg3 result:(unsigned)arg4 ;
-(NSString *)name;
-(unsigned)result;
-(unsigned long long)duration;
-(unsigned long long)priority;
-(NSString *)service;
@end

