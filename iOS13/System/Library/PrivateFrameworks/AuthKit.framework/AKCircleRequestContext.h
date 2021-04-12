/*
* Generated on Monday, March 1, 2021 at 2:31:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class AKCircleRequestPayload, NSString;

@interface AKCircleRequestContext : NSObject <NSSecureCoding> {

	BOOL _waitForReply;
	BOOL __notifyOfTimeout;
	AKCircleRequestPayload* _payload;
	double _waitForReplyTimeout;
	NSString* _identityTokenValue;
	NSString* _heartbeatTokenValue;
	NSString* _pushToken;

}

@property (nonatomic,retain) NSString * identityTokenValue;                 //@synthesize identityTokenValue=_identityTokenValue - In the implementation block
@property (nonatomic,retain) NSString * heartbeatTokenValue;                //@synthesize heartbeatTokenValue=_heartbeatTokenValue - In the implementation block
@property (nonatomic,retain) NSString * pushToken;                          //@synthesize pushToken=_pushToken - In the implementation block
@property (assign,nonatomic) BOOL _notifyOfTimeout;                         //@synthesize _notifyOfTimeout=__notifyOfTimeout - In the implementation block
@property (nonatomic,retain) AKCircleRequestPayload * payload;              //@synthesize payload=_payload - In the implementation block
@property (assign,nonatomic) BOOL waitForReply;                             //@synthesize waitForReply=_waitForReply - In the implementation block
@property (assign,nonatomic) double waitForReplyTimeout;                    //@synthesize waitForReplyTimeout=_waitForReplyTimeout - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setPayload:(AKCircleRequestPayload *)arg1 ;
-(AKCircleRequestPayload *)payload;
-(NSString *)pushToken;
-(void)setPushToken:(NSString *)arg1 ;
-(BOOL)waitForReply;
-(void)setWaitForReply:(BOOL)arg1 ;
-(double)waitForReplyTimeout;
-(void)setWaitForReplyTimeout:(double)arg1 ;
-(NSString *)identityTokenValue;
-(void)setIdentityTokenValue:(NSString *)arg1 ;
-(NSString *)heartbeatTokenValue;
-(void)setHeartbeatTokenValue:(NSString *)arg1 ;
-(BOOL)_notifyOfTimeout;
-(void)set_notifyOfTimeout:(BOOL)arg1 ;
@end

