/*
* Generated on Thursday, January 14, 2021 at 2:21:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPModelRequest.h>

@class NSString;

@interface MPStoreModelRequest : MPModelRequest {

	BOOL _didSetTimeoutInterval;
	double _timeoutInterval;
	NSString* _clientIdentifier;
	NSString* _clientVersion;
	NSString* _clientPlatformIdentifier;
	unsigned long long _authenticationOptions;

}

@property (assign,nonatomic) double timeoutInterval;                                //@synthesize timeoutInterval=_timeoutInterval - In the implementation block
@property (nonatomic,copy) NSString * clientIdentifier;                             //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (nonatomic,copy) NSString * clientVersion;                                //@synthesize clientVersion=_clientVersion - In the implementation block
@property (nonatomic,copy) NSString * clientPlatformIdentifier;                     //@synthesize clientPlatformIdentifier=_clientPlatformIdentifier - In the implementation block
@property (assign,nonatomic) unsigned long long authenticationOptions;              //@synthesize authenticationOptions=_authenticationOptions - In the implementation block
+(BOOL)supportsSecureCoding;
+(BOOL)requiresNetwork;
-(void)setClientIdentifier:(NSString *)arg1 ;
-(id)init;
-(NSString *)clientVersion;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setClientPlatformIdentifier:(NSString *)arg1 ;
-(double)timeoutInterval;
-(void)setTimeoutInterval:(double)arg1 ;
-(unsigned long long)authenticationOptions;
-(void)setAuthenticationOptions:(unsigned long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)clientPlatformIdentifier;
-(NSString *)clientIdentifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setClientVersion:(NSString *)arg1 ;
@end

