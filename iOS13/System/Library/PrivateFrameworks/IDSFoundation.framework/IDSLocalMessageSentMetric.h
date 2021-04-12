/*
* Generated on Monday, March 1, 2021 at 2:30:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)name;
-(NSDictionary *)dictionaryRepresentation;
-(long long)priority;
-(NSString *)service;
-(long long)messageSize;
-(unsigned long long)linkType;
-(unsigned)awdIdentifier;
-(PBCodable*<NSCopying>)awdRepresentation;
-(BOOL)isToDefaultPairedDevice;
-(id)initWithService:(id)arg1 isToDefaultPairedDevice:(BOOL)arg2 messageSize:(long long)arg3 linkType:(unsigned long long)arg4 priority:(long long)arg5 ;
@end

