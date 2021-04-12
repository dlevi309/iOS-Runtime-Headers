/*
* Generated on Monday, March 1, 2021 at 2:34:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <libobjc.A.dylib/HDNanoSyncDescription.h>

@class IDSDevice, NSData, NSString, NSDate, NSDictionary, HDIDSMessageCenter;

@interface HDIDSIncomingResponse : NSObject <HDNanoSyncDescription> {

	unsigned short _messageID;
	IDSDevice* _fromDevice;
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
@property (nonatomic,retain) IDSDevice * fromDevice;                                 //@synthesize fromDevice=_fromDevice - In the implementation block
@property (assign,nonatomic) unsigned short messageID;                               //@synthesize messageID=_messageID - In the implementation block
@property (nonatomic,retain) NSData * data;                                          //@synthesize data=_data - In the implementation block
@property (nonatomic,retain) id pbResponse;                                          //@synthesize pbResponse=_pbResponse - In the implementation block
@property (nonatomic,copy) NSString * idsIdentifier;                                 //@synthesize idsIdentifier=_idsIdentifier - In the implementation block
@property (nonatomic,copy) NSString * requestIDSIdentifier;                          //@synthesize requestIDSIdentifier=_requestIDSIdentifier - In the implementation block
@property (nonatomic,retain) NSDate * requestSent;                                   //@synthesize requestSent=_requestSent - In the implementation block
@property (nonatomic,retain) NSDictionary * requestPersistentUserInfo;               //@synthesize requestPersistentUserInfo=_requestPersistentUserInfo - In the implementation block
-(NSString *)description;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(unsigned short)messageID;
-(void)setMessageID:(unsigned short)arg1 ;
-(NSString *)idsIdentifier;
-(void)setIdsIdentifier:(NSString *)arg1 ;
-(HDIDSMessageCenter *)messageCenter;
-(void)setPbResponse:(id)arg1 ;
-(id)pbResponse;
-(void)setMessageCenter:(HDIDSMessageCenter *)arg1 ;
-(NSString *)requestIDSIdentifier;
-(void)setRequestIDSIdentifier:(NSString *)arg1 ;
-(void)setRequestSent:(NSDate *)arg1 ;
-(void)setRequestPersistentUserInfo:(NSDictionary *)arg1 ;
-(NSDate *)requestSent;
-(NSDictionary *)requestPersistentUserInfo;
-(IDSDevice *)fromDevice;
-(id)nanoSyncDescription;
-(void)setFromDevice:(IDSDevice *)arg1 ;
@end

