/*
* Generated on Monday, March 1, 2021 at 2:33:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class HMDDataStreamTransportTcpListeningPort;

@interface HMDDataStreamTransportParameters : NSObject <NSCopying> {

	HMDDataStreamTransportTcpListeningPort* _tcpListeningPort;

}

@property (nonatomic,retain) HMDDataStreamTransportTcpListeningPort * tcpListeningPort;              //@synthesize tcpListeningPort=_tcpListeningPort - In the implementation block
+(id)parsedFromData:(id)arg1 error:(id*)arg2 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(HMDDataStreamTransportTcpListeningPort *)tcpListeningPort;
-(void)setTcpListeningPort:(HMDDataStreamTransportTcpListeningPort *)arg1 ;
-(BOOL)parseFromData:(id)arg1 error:(id*)arg2 ;
-(id)serializeWithError:(id*)arg1 ;
-(id)initWithTcpListeningPort:(id)arg1 ;
@end

