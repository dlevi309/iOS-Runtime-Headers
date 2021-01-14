/*
* Generated on Thursday, January 14, 2021 at 2:24:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
*/

#import <libobjc.A.dylib/NMSDeviceTargetable.h>
#import <libobjc.A.dylib/NMSObfuscatableDescriptionProviding.h>

@protocol OS_os_transaction;
@class NSSet, NMSIncomingRequest, NSData, NSDictionary, NSObject, NSString, IDSMessageContext;

@interface NMSOutgoingResponse : NSObject <NMSDeviceTargetable, NMSObfuscatableDescriptionProviding> {

	BOOL _sent;
	NSSet* targetDeviceIDs;
	NMSIncomingRequest* _request;
	NSData* _data;
	unsigned long long _priority;
	double _sendTimeout;
	NSDictionary* _persistentUserInfo;
	NSDictionary* _extraIDSOptions;
	NSObject*<OS_os_transaction> _transaction;
	NSString* _idsIdentifier;
	id _pbResponse;
	IDSMessageContext* _idsContext;

}

@property (nonatomic,retain) NSObject*<OS_os_transaction> transaction;              //@synthesize transaction=_transaction - In the implementation block
@property (assign,nonatomic,__weak) NMSIncomingRequest * request;                   //@synthesize request=_request - In the implementation block
@property (getter=isSent) BOOL sent;                                                //@synthesize sent=_sent - In the implementation block
@property (nonatomic,copy) NSString * idsIdentifier;                                //@synthesize idsIdentifier=_idsIdentifier - In the implementation block
@property (nonatomic,retain) id pbResponse;                                         //@synthesize pbResponse=_pbResponse - In the implementation block
@property (nonatomic,retain) IDSMessageContext * idsContext;                        //@synthesize idsContext=_idsContext - In the implementation block
@property (nonatomic,retain) NSData * data;                                         //@synthesize data=_data - In the implementation block
@property (assign,nonatomic) unsigned long long priority;                           //@synthesize priority=_priority - In the implementation block
@property (assign,nonatomic) double sendTimeout;                                    //@synthesize sendTimeout=_sendTimeout - In the implementation block
@property (nonatomic,retain) NSDictionary * persistentUserInfo;                     //@synthesize persistentUserInfo=_persistentUserInfo - In the implementation block
@property (nonatomic,retain) NSDictionary * extraIDSOptions;                        //@synthesize extraIDSOptions=_extraIDSOptions - In the implementation block
@property (nonatomic,copy) NSSet * targetDeviceIDs; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setTransaction:(NSObject*<OS_os_transaction>)arg1 ;
-(id)init;
-(NSString *)idsIdentifier;
-(void)setRequest:(NMSIncomingRequest *)arg1 ;
-(NSObject*<OS_os_transaction>)transaction;
-(NMSIncomingRequest *)request;
-(void)setData:(NSData *)arg1 ;
-(BOOL)isSent;
-(NSString *)description;
-(void)setIdsIdentifier:(NSString *)arg1 ;
-(NSData *)data;
-(void)setSent:(BOOL)arg1 ;
-(void)send;
-(unsigned long long)priority;
-(void)setPriority:(unsigned long long)arg1 ;
-(void)dealloc;
-(id)CPObfuscatedDescriptionObject;
-(void)setPbResponse:(id)arg1 ;
-(id)pbResponse;
-(NSDictionary *)persistentUserInfo;
-(void)setPersistentUserInfo:(NSDictionary *)arg1 ;
-(void)setSendTimeout:(double)arg1 ;
-(void)setExtraIDSOptions:(NSDictionary *)arg1 ;
-(double)sendTimeout;
-(void)setTargetDeviceIDs:(NSSet *)arg1 ;
-(NSDictionary *)extraIDSOptions;
-(void)setIdsContext:(IDSMessageContext *)arg1 ;
-(NSSet *)targetDeviceIDs;
-(IDSMessageContext *)idsContext;
-(id)_makePBResponse;
@end

