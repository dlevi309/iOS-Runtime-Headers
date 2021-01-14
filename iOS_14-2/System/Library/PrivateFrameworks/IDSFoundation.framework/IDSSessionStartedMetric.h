/*
* Generated on Thursday, January 14, 2021 at 2:22:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
*/

#import <libobjc.A.dylib/CUTCoreAnalyticsMetric.h>

@class NSString, NSNumber, NSDictionary;

@interface IDSSessionStartedMetric : NSObject <CUTCoreAnalyticsMetric> {

	unsigned _clientType;
	NSString* _guid;
	NSNumber* _protocolVersionNumber;
	NSString* _serviceName;

}

@property (nonatomic,readonly) NSString * guid;                               //@synthesize guid=_guid - In the implementation block
@property (nonatomic,readonly) NSNumber * protocolVersionNumber;              //@synthesize protocolVersionNumber=_protocolVersionNumber - In the implementation block
@property (nonatomic,readonly) NSString * serviceName;                        //@synthesize serviceName=_serviceName - In the implementation block
@property (nonatomic,readonly) unsigned clientType;                           //@synthesize clientType=_clientType - In the implementation block
@property (readonly) NSDictionary * dictionaryRepresentation; 
@property (readonly) NSString * name; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSDictionary *)dictionaryRepresentation;
-(NSNumber *)protocolVersionNumber;
-(id)initWithGuid:(id)arg1 protocolVersionNumber:(id)arg2 serviceName:(id)arg3 clientType:(unsigned)arg4 ;
-(NSString *)guid;
-(NSString *)name;
-(NSString *)serviceName;
-(unsigned)clientType;
@end

