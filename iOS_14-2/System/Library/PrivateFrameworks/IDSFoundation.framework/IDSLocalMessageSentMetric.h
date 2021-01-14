/*
* Generated on Thursday, January 14, 2021 at 2:21:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
*/

#import <libobjc.A.dylib/CUTCoreAnalyticsMetric.h>
#import <libobjc.A.dylib/CUTAWDMetric.h>

@class NSString, NSDictionary;

@interface IDSLocalMessageSentMetric : NSObject <CUTCoreAnalyticsMetric, CUTAWDMetric> {

	NSString* _service;
	BOOL _isToDefaultPairedDevice;
	long long _messageSize;
	unsigned long long _linkType;
	long long _priority;

}

@property (nonatomic,readonly) NSString * name; 
@property (readonly) unsigned awdIdentifier; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) PBCodable*<NSCopying> awdRepresentation; 
@property (nonatomic,readonly) NSString * service;                                   //@synthesize service=_service - In the implementation block
@property (nonatomic,readonly) BOOL isToDefaultPairedDevice;                         //@synthesize isToDefaultPairedDevice=_isToDefaultPairedDevice - In the implementation block
@property (nonatomic,readonly) long long messageSize;                                //@synthesize messageSize=_messageSize - In the implementation block
@property (nonatomic,readonly) unsigned long long linkType;                          //@synthesize linkType=_linkType - In the implementation block
@property (nonatomic,readonly) long long priority;                                   //@synthesize priority=_priority - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSDictionary *)dictionaryRepresentation;
-(unsigned long long)linkType;
-(NSString *)name;
-(id)initWithService:(id)arg1 isToDefaultPairedDevice:(BOOL)arg2 messageSize:(long long)arg3 linkType:(unsigned long long)arg4 priority:(long long)arg5 ;
-(long long)priority;
-(BOOL)isToDefaultPairedDevice;
-(long long)messageSize;
-(NSString *)service;
-(unsigned)awdIdentifier;
-(PBCodable*<NSCopying>)awdRepresentation;
@end

