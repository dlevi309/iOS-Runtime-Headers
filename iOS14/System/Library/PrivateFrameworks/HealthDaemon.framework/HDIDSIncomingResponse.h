/*
* Generated on Thursday, January 14, 2021 at 2:25:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <libobjc.A.dylib/HDNanoSyncDescription.h>

@class HDIDSParticipant, NSData, NSString, NSDate, NSDictionary, HDIDSMessageCenter;

@interface HDIDSIncomingResponse : NSObject <HDNanoSyncDescription> {

	unsigned short _messageID;
	HDIDSParticipant* _fromParticipant;
	NSData* _data;
	NSString* _idsIdentifier;
	NSString* _requestIDSIdentifier;
	NSDate* _requestSent;
	NSDictionary* _requestPersistentUserInfo;
	HDIDSMessageCenter* _messageCenter;
	id _pbResponse;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) HDIDSMessageCenter * messageCenter;              //@synthesize messageCenter=_messageCenter - In the implementation block
@property (nonatomic,retain) HDIDSParticipant * fromParticipant;                     //@synthesize fromParticipant=_fromParticipant - In the implementation block
@property (assign,nonatomic) unsigned short messageID;                               //@synthesize messageID=_messageID - In the implementation block
@property (nonatomic,retain) NSData * data;                                          //@synthesize data=_data - In the implementation block
@property (nonatomic,copy) NSString * idsIdentifier;                                 //@synthesize idsIdentifier=_idsIdentifier - In the implementation block
@property (nonatomic,copy) NSString * requestIDSIdentifier;                          //@synthesize requestIDSIdentifier=_requestIDSIdentifier - In the implementation block
@property (nonatomic,retain) NSDate * requestSent;                                   //@synthesize requestSent=_requestSent - In the implementation block
@property (nonatomic,retain) NSDictionary * requestPersistentUserInfo;               //@synthesize requestPersistentUserInfo=_requestPersistentUserInfo - In the implementation block
@property (nonatomic,readonly) id pbResponse;                                        //@synthesize pbResponse=_pbResponse - In the implementation block
-(void)setMessageID:(unsigned short)arg1 ;
-(NSString *)idsIdentifier;
-(void)setData:(NSData *)arg1 ;
-(NSString *)description;
-(void)setIdsIdentifier:(NSString *)arg1 ;
-(NSData *)data;
-(unsigned short)messageID;
-(void)setMessageCenter:(HDIDSMessageCenter *)arg1 ;
-(HDIDSMessageCenter *)messageCenter;
-(void)setPbResponse:(id)arg1 ;
-(id)pbResponse;
-(NSString *)requestIDSIdentifier;
-(void)setRequestIDSIdentifier:(NSString *)arg1 ;
-(void)setRequestSent:(NSDate *)arg1 ;
-(void)setRequestPersistentUserInfo:(NSDictionary *)arg1 ;
-(NSDate *)requestSent;
-(NSDictionary *)requestPersistentUserInfo;
-(HDIDSParticipant *)fromParticipant;
-(id)nanoSyncDescription;
-(void)setFromParticipant:(HDIDSParticipant *)arg1 ;
@end

