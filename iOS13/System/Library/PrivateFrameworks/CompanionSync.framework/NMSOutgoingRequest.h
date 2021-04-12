/*
* Generated on Monday, March 1, 2021 at 2:32:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
*/

#import <libobjc.A.dylib/NMSDeviceTargetable.h>
#import <libobjc.A.dylib/NMSObfuscatableDescriptionProviding.h>

@class NSSet, NSData, NSString, NSDictionary, NMSMessageCenter;

@interface NMSOutgoingRequest : NSObject <NMSDeviceTargetable, NMSObfuscatableDescriptionProviding> {

	BOOL _shouldEncrypt;
	unsigned short _messageID;
	NSSet* targetDeviceIDs;
	NSData* _data;
	NSString* _idsIdentifier;
	unsigned long long _priority;
	double _sendTimeout;
	double _responseTimeout;
	NSDictionary* _persistentUserInfo;
	NSDictionary* _extraIDSOptions;
	NMSMessageCenter* _messageCenter;
	id _pbRequest;

}

@property (assign,nonatomic,__weak) NMSMessageCenter * messageCenter;              //@synthesize messageCenter=_messageCenter - In the implementation block
@property (nonatomic,copy) NSString * idsIdentifier;                               //@synthesize idsIdentifier=_idsIdentifier - In the implementation block
@property (nonatomic,retain) id pbRequest;                                         //@synthesize pbRequest=_pbRequest - In the implementation block
@property (nonatomic,retain) NSData * data;                                        //@synthesize data=_data - In the implementation block
@property (assign,nonatomic) unsigned short messageID;                             //@synthesize messageID=_messageID - In the implementation block
@property (assign,nonatomic) unsigned long long priority;                          //@synthesize priority=_priority - In the implementation block
@property (assign,nonatomic) double sendTimeout;                                   //@synthesize sendTimeout=_sendTimeout - In the implementation block
@property (assign,nonatomic) double responseTimeout;                               //@synthesize responseTimeout=_responseTimeout - In the implementation block
@property (assign,nonatomic) BOOL shouldEncrypt;                                   //@synthesize shouldEncrypt=_shouldEncrypt - In the implementation block
@property (nonatomic,retain) NSDictionary * persistentUserInfo;                    //@synthesize persistentUserInfo=_persistentUserInfo - In the implementation block
@property (nonatomic,retain) NSDictionary * extraIDSOptions;                       //@synthesize extraIDSOptions=_extraIDSOptions - In the implementation block
@property (nonatomic,copy) NSSet * targetDeviceIDs; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)requestWithMessageID:(unsigned short)arg1 ;
-(id)init;
-(NSString *)description;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(unsigned long long)priority;
-(void)setPriority:(unsigned long long)arg1 ;
-(id)CPObfuscatedDescriptionObject;
-(unsigned short)messageID;
-(void)setMessageID:(unsigned short)arg1 ;
-(BOOL)shouldEncrypt;
-(NSString *)idsIdentifier;
-(void)setIdsIdentifier:(NSString *)arg1 ;
-(void)setShouldEncrypt:(BOOL)arg1 ;
-(NMSMessageCenter *)messageCenter;
-(id)pbRequest;
-(NSDictionary *)persistentUserInfo;
-(void)setPersistentUserInfo:(NSDictionary *)arg1 ;
-(void)setSendTimeout:(double)arg1 ;
-(void)setPbRequest:(id)arg1 ;
-(void)setResponseTimeout:(double)arg1 ;
-(void)setExtraIDSOptions:(NSDictionary *)arg1 ;
-(void)setMessageCenter:(NMSMessageCenter *)arg1 ;
-(double)sendTimeout;
-(void)setTargetDeviceIDs:(NSSet *)arg1 ;
-(NSDictionary *)extraIDSOptions;
-(NSSet *)targetDeviceIDs;
-(double)responseTimeout;
@end

