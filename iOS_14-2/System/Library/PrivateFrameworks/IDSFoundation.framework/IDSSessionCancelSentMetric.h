/*
* Generated on Thursday, January 14, 2021 at 2:22:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
*/

#import <libobjc.A.dylib/CUTCoreAnalyticsMetric.h>

@class NSString, NSNumber, NSDictionary;

@interface IDSSessionCancelSentMetric : NSObject <CUTCoreAnalyticsMetric> {

	unsigned _remoteSessionEndReason;
	NSString* _guid;
	NSNumber* _numberOfRecipients;

}

@property (nonatomic,readonly) NSString * guid;                              //@synthesize guid=_guid - In the implementation block
@property (nonatomic,readonly) NSNumber * numberOfRecipients;                //@synthesize numberOfRecipients=_numberOfRecipients - In the implementation block
@property (nonatomic,readonly) unsigned remoteSessionEndReason;              //@synthesize remoteSessionEndReason=_remoteSessionEndReason - In the implementation block
@property (readonly) NSDictionary * dictionaryRepresentation; 
@property (readonly) NSString * name; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSDictionary *)dictionaryRepresentation;
-(NSString *)guid;
-(NSNumber *)numberOfRecipients;
-(NSString *)name;
-(unsigned)remoteSessionEndReason;
-(id)initWithGuid:(id)arg1 numberOfRecipients:(id)arg2 remoteSessionEndReason:(unsigned)arg3 ;
@end

