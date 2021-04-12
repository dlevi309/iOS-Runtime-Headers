/*
* Generated on Thursday, January 14, 2021 at 2:28:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
*/

#import <SiriCore/SiriCore-Structs.h>
#import <SiriCore/SiriCoreThunking.h>
#import <SiriCore/SiriCoreSessionObject.h>

@class NSString, NSArray;

@interface SiriCoreSpeechPacket : NSObject <SiriCoreThunking, SiriCoreSessionObject> {

	NSString* _aceId;
	NSString* _refId;
	NSArray* _packets;
	long long _packetNumber;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSArray * packets;                     //@synthesize packets=_packets - In the implementation block
@property (assign,nonatomic) long long packetNumber;                //@synthesize packetNumber=_packetNumber - In the implementation block
@property (nonatomic,copy) NSString * aceId;                        //@synthesize aceId=_aceId - In the implementation block
@property (nonatomic,copy) NSString * refId;                        //@synthesize refId=_refId - In the implementation block
-(id)groupIdentifier;
-(NSString *)aceId;
-(NSString *)refId;
-(id)encodedClassName;
-(long long)packetNumber;
-(void)setPacketNumber:(long long)arg1 ;
-(void)setPackets:(NSArray *)arg1 ;
-(NSArray *)packets;
-(void)setRefId:(NSString *)arg1 ;
-(NSString *)description;
-(void)setAceId:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)siriCore_serializedAceDataError:(id*)arg1 ;
-(void)siriCore_invokeThunk;
-(BOOL)siriCore_bufferingAllowedDuringActiveSession;
-(BOOL)siriCore_isRetryable;
-(BOOL)siriCore_isRestartable;
-(BOOL)siriCore_isProvisional;
-(void)siriCore_logDiagnostics;
-(id)siriCore_requestId;
-(void)siriCore_setSessionRequestId:(id)arg1 ;
-(BOOL)siriCore_supportedByLocalSession;
@end

