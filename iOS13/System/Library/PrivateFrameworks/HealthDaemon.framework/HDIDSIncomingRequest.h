/*
* Generated on Monday, March 1, 2021 at 2:34:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <libobjc.A.dylib/HDNanoSyncDescription.h>

@class IDSDevice, NSString, NSData, HDIDSOutgoingResponse, HDIDSMessageCenter;

@interface HDIDSIncomingRequest : NSObject <HDNanoSyncDescription> {

	BOOL _expectsResponse;
	unsigned short _messageID;
	IDSDevice* _fromDevice;
	NSString* _idsIdentifier;
	NSData* _data;
	unsigned long long _priority;
	HDIDSOutgoingResponse* _response;
	HDIDSMessageCenter* _messageCenter;
	id _pbRequest;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) HDIDSMessageCenter * messageCenter;              //@synthesize messageCenter=_messageCenter - In the implementation block
@property (nonatomic,retain) IDSDevice * fromDevice;                                 //@synthesize fromDevice=_fromDevice - In the implementation block
@property (assign,nonatomic) unsigned short messageID;                               //@synthesize messageID=_messageID - In the implementation block
@property (nonatomic,copy) NSString * idsIdentifier;                                 //@synthesize idsIdentifier=_idsIdentifier - In the implementation block
@property (nonatomic,retain) NSData * data;                                          //@synthesize data=_data - In the implementation block
@property (assign,nonatomic) unsigned long long priority;                            //@synthesize priority=_priority - In the implementation block
@property (assign,nonatomic) BOOL expectsResponse;                                   //@synthesize expectsResponse=_expectsResponse - In the implementation block
@property (nonatomic,retain) id pbRequest;                                           //@synthesize pbRequest=_pbRequest - In the implementation block
@property (nonatomic,retain) HDIDSOutgoingResponse * response;                       //@synthesize response=_response - In the implementation block
-(void)dealloc;
-(NSString *)description;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(unsigned long long)priority;
-(void)setPriority:(unsigned long long)arg1 ;
-(HDIDSOutgoingResponse *)response;
-(void)setResponse:(HDIDSOutgoingResponse *)arg1 ;
-(unsigned short)messageID;
-(void)setMessageID:(unsigned short)arg1 ;
-(NSString *)idsIdentifier;
-(void)setIdsIdentifier:(NSString *)arg1 ;
-(BOOL)expectsResponse;
-(void)setExpectsResponse:(BOOL)arg1 ;
-(HDIDSMessageCenter *)messageCenter;
-(id)pbRequest;
-(void)setPbRequest:(id)arg1 ;
-(void)setMessageCenter:(HDIDSMessageCenter *)arg1 ;
-(void)configureResponse;
-(IDSDevice *)fromDevice;
-(id)nanoSyncDescription;
-(void)setFromDevice:(IDSDevice *)arg1 ;
@end

