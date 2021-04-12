/*
* Generated on Monday, March 1, 2021 at 2:34:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)groupIdentifier;
-(NSString *)aceId;
-(void)setRefId:(NSString *)arg1 ;
-(id)encodedClassName;
-(void)setAceId:(NSString *)arg1 ;
-(NSString *)refId;
-(void)setPackets:(NSArray *)arg1 ;
-(NSArray *)packets;
-(long long)packetNumber;
-(void)setPacketNumber:(long long)arg1 ;
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

