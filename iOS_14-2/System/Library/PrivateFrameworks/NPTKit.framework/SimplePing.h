/*
* Generated on Thursday, January 14, 2021 at 2:26:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NPTKit.framework/NPTKit
*/

#import <NPTKit/NPTKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol OS_dispatch_source, SimplePingDelegate;
@class NSObject, NSString, NSData;

@interface SimplePing : NSObject <NSCopying> {

	NSObject*<OS_dispatch_source> timeoutTimer;
	BOOL _nextSequenceNumberHasWrapped;
	unsigned short _identifier;
	unsigned short _nextSequenceNumber;
	NSString* _hostName;
	id<SimplePingDelegate> _delegate;
	long long _addressStyle;
	NSData* _hostAddress;
	CFHostRef _host;
	CFSocketRef _socket;

}

@property (nonatomic,copy) NSData * hostAddress;                                  //@synthesize hostAddress=_hostAddress - In the implementation block
@property (assign,nonatomic) unsigned short nextSequenceNumber;                   //@synthesize nextSequenceNumber=_nextSequenceNumber - In the implementation block
@property (assign,nonatomic) BOOL nextSequenceNumberHasWrapped;                   //@synthesize nextSequenceNumberHasWrapped=_nextSequenceNumberHasWrapped - In the implementation block
@property (nonatomic,retain) CFHostRef host;                                      //@synthesize host=_host - In the implementation block
@property (nonatomic,retain) CFSocketRef socket;                                  //@synthesize socket=_socket - In the implementation block
@property (nonatomic,copy,readonly) NSString * hostName;                          //@synthesize hostName=_hostName - In the implementation block
@property (assign,nonatomic,__weak) id<SimplePingDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long addressStyle;                              //@synthesize addressStyle=_addressStyle - In the implementation block
@property (nonatomic,readonly) unsigned char hostAddressFamily; 
@property (nonatomic,readonly) unsigned short identifier;                         //@synthesize identifier=_identifier - In the implementation block
+(unsigned long long)icmpHeaderOffsetInIPv4Packet:(id)arg1 ;
-(void)setHost:(CFHostRef)arg1 ;
-(CFHostRef)host;
-(id<SimplePingDelegate>)delegate;
-(void)start;
-(CFSocketRef)socket;
-(unsigned short)nextSequenceNumber;
-(void)stop;
-(NSString *)hostName;
-(void)setDelegate:(id<SimplePingDelegate>)arg1 ;
-(void)readData;
-(unsigned short)identifier;
-(void)didFailWithError:(id)arg1 ;
-(void)setSocket:(CFSocketRef)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(void)sendPingWithData:(id)arg1 ;
-(id)initWithHostName:(id)arg1 ;
-(void)setAddressStyle:(long long)arg1 ;
-(NSData *)hostAddress;
-(void)timeOutHandler:(id)arg1 sequenceNumber:(unsigned short)arg2 ;
-(unsigned char)hostAddressFamily;
-(id)pingPacketWithType:(unsigned char)arg1 payload:(id)arg2 requiresChecksum:(BOOL)arg3 ;
-(void)setupTimer:(id)arg1 currentSequenceNumber:(unsigned short)arg2 ;
-(void)setNextSequenceNumber:(unsigned short)arg1 ;
-(void)setNextSequenceNumberHasWrapped:(BOOL)arg1 ;
-(BOOL)nextSequenceNumberHasWrapped;
-(BOOL)validateSequenceNumber:(unsigned short)arg1 ;
-(BOOL)validatePing4ResponsePacket:(id)arg1 sequenceNumber:(unsigned short*)arg2 ;
-(BOOL)validatePing6ResponsePacket:(id)arg1 sequenceNumber:(unsigned short*)arg2 ;
-(BOOL)validatePingResponsePacket:(id)arg1 sequenceNumber:(unsigned short*)arg2 ;
-(long long)addressStyle;
-(void)setHostAddress:(NSData *)arg1 ;
-(void)stopHostResolution;
-(void)startWithHostAddress;
-(void)didFailWithHostStreamError:(SCD_Struct_Si3)arg1 ;
-(void)stopSocket;
-(void)hostResolutionDone;
@end

