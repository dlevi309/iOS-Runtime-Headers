/*
* Generated on Thursday, January 14, 2021 at 2:28:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
*/

#import <SiriCore/SiriCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMapTable;

@interface SiriCorePingInfo : NSObject <NSCopying> {

	NSMapTable* _outstandingPings;
	long long _pingAcknowledgedCount;
	double _avgPingTime;

}

@property (nonatomic,readonly) long long pingAcknowledgedCount;              //@synthesize pingAcknowledgedCount=_pingAcknowledgedCount - In the implementation block
@property (nonatomic,readonly) double avgPingTime;                           //@synthesize avgPingTime=_avgPingTime - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)markPingSentWithIndex:(long long)arg1 ;
-(void)markPongReceivedWithIndex:(long long)arg1 ;
-(unsigned long long)numberOfUnacknowledgedPings;
-(long long)pingAcknowledgedCount;
-(double)avgPingTime;
@end

