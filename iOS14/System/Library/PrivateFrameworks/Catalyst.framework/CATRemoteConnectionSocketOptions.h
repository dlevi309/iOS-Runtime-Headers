/*
* Generated on Thursday, January 14, 2021 at 2:27:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
*/


#import <Catalyst/Catalyst-Structs.h>
@class NSNumber;

@interface CATRemoteConnectionSocketOptions : NSObject {

	NSNumber* _adaptiveWriteTimeout;
	NSNumber* _keepAliveEnabled;
	NSNumber* _keepAliveDelay;
	NSNumber* _keepAliveInterval;
	NSNumber* _keepAliveCount;
	NSNumber* _netServiceType;

}

@property (nonatomic,copy) NSNumber * adaptiveWriteTimeout;              //@synthesize adaptiveWriteTimeout=_adaptiveWriteTimeout - In the implementation block
@property (nonatomic,copy) NSNumber * keepAliveEnabled;                  //@synthesize keepAliveEnabled=_keepAliveEnabled - In the implementation block
@property (nonatomic,copy) NSNumber * keepAliveDelay;                    //@synthesize keepAliveDelay=_keepAliveDelay - In the implementation block
@property (nonatomic,copy) NSNumber * keepAliveInterval;                 //@synthesize keepAliveInterval=_keepAliveInterval - In the implementation block
@property (nonatomic,copy) NSNumber * keepAliveCount;                    //@synthesize keepAliveCount=_keepAliveCount - In the implementation block
@property (nonatomic,copy) NSNumber * netServiceType;                    //@synthesize netServiceType=_netServiceType - In the implementation block
-(void)setKeepAliveInterval:(NSNumber *)arg1 ;
-(NSNumber *)keepAliveInterval;
-(void)setKeepAliveCount:(NSNumber *)arg1 ;
-(NSNumber *)keepAliveCount;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSNumber *)adaptiveWriteTimeout;
-(NSNumber *)keepAliveEnabled;
-(NSNumber *)keepAliveDelay;
-(NSNumber *)netServiceType;
-(void)setAdaptiveWriteTimeout:(NSNumber *)arg1 ;
-(void)setKeepAliveEnabled:(NSNumber *)arg1 ;
-(void)setKeepAliveDelay:(NSNumber *)arg1 ;
-(void)setNetServiceType:(NSNumber *)arg1 ;
@end

