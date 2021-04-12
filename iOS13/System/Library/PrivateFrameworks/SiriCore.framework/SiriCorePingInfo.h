/*
* Generated on Monday, March 1, 2021 at 2:34:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

