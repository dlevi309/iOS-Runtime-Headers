/*
* Generated on Monday, March 1, 2021 at 2:32:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
*/

#import <libobjc.A.dylib/NMSDeviceSourced.h>
#import <libobjc.A.dylib/NMSObfuscatableDescriptionProviding.h>

@protocol OS_os_transaction;
@class NSString, NMSMessageCenter, NSData, NMSOutgoingResponse, NSObject, IDSMessageContext;

@interface NMSIncomingRequest : NSObject <NMSDeviceSourced, NMSObfuscatableDescriptionProviding> {

	BOOL _expectsResponse;
	unsigned short _messageID;
	NSString* sourceDeviceID;
	NMSMessageCenter* _messageCenter;
	NSString* _idsIdentifier;
	NSData* _data;
	unsigned long long _priority;
	NMSOutgoingResponse* _response;
	NSObject*<OS_os_transaction> _transaction;
	id _pbRequest;
	IDSMessageContext* _idsContext;

}

@property (nonatomic,retain) NSObject*<OS_os_transaction> transaction;              //@synthesize transaction=_transaction - In the implementation block
@property (assign,nonatomic,__weak) NMSMessageCenter * messageCenter;               //@synthesize messageCenter=_messageCenter - In the implementation block
@property (assign,nonatomic) unsigned short messageID;                              //@synthesize messageID=_messageID - In the implementation block
@property (nonatomic,copy) NSString * idsIdentifier;                                //@synthesize idsIdentifier=_idsIdentifier - In the implementation block
@property (nonatomic,retain) NSData * data;                                         //@synthesize data=_data - In the implementation block
@property (assign,nonatomic) unsigned long long priority;                           //@synthesize priority=_priority - In the implementation block
@property (assign,nonatomic) BOOL expectsResponse;                                  //@synthesize expectsResponse=_expectsResponse - In the implementation block
@property (nonatomic,retain) id pbRequest;                                          //@synthesize pbRequest=_pbRequest - In the implementation block
@property (nonatomic,retain) NMSOutgoingResponse * response;                        //@synthesize response=_response - In the implementation block
@property (nonatomic,retain) NSString * sourceDeviceID; 
@property (nonatomic,retain) IDSMessageContext * idsContext;                        //@synthesize idsContext=_idsContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)allowsUnrepliedRequestsForUnitTesting;
+(void)setAllowsUnrepliedRequestsForUnitTesting:(BOOL)arg1 ;
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(unsigned long long)priority;
-(void)setPriority:(unsigned long long)arg1 ;
-(NSString *)sourceDeviceID;
-(NMSOutgoingResponse *)response;
-(void)setSourceDeviceID:(NSString *)arg1 ;
-(NSObject*<OS_os_transaction>)transaction;
-(void)setTransaction:(NSObject*<OS_os_transaction>)arg1 ;
-(void)setResponse:(NMSOutgoingResponse *)arg1 ;
-(id)CPObfuscatedDescriptionObject;
-(unsigned short)messageID;
-(void)setMessageID:(unsigned short)arg1 ;
-(NSString *)idsIdentifier;
-(void)setIdsIdentifier:(NSString *)arg1 ;
-(BOOL)expectsResponse;
-(void)setExpectsResponse:(BOOL)arg1 ;
-(NMSMessageCenter *)messageCenter;
-(id)pbRequest;
-(void)setPbRequest:(id)arg1 ;
-(void)setMessageCenter:(NMSMessageCenter *)arg1 ;
-(void)configureResponse;
-(void)setIdsContext:(IDSMessageContext *)arg1 ;
-(IDSMessageContext *)idsContext;
@end

