/*
* Generated on Monday, March 1, 2021 at 2:34:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WiFiVelocity.framework/WiFiVelocity
*/

#import <WiFiVelocity/WiFiVelocity-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class W5Peer, NSString;

@interface W5PerfConfiguration : NSObject <NSCopying, NSSecureCoding> {

	BOOL _overAWDL;
	BOOL _usingUDP;
	BOOL _upload;
	W5Peer* _client;
	W5Peer* _server;
	long long _bandwidth;
	long long _numberOfClientStreams;
	long long _duration;
	NSString* _additionalClientParameters;
	NSString* _additionalServerParameters;

}

@property (nonatomic,copy) W5Peer * client;                                    //@synthesize client=_client - In the implementation block
@property (nonatomic,copy) W5Peer * server;                                    //@synthesize server=_server - In the implementation block
@property (assign,nonatomic) BOOL overAWDL;                                    //@synthesize overAWDL=_overAWDL - In the implementation block
@property (assign,nonatomic) BOOL usingUDP;                                    //@synthesize usingUDP=_usingUDP - In the implementation block
@property (assign,nonatomic) BOOL upload;                                      //@synthesize upload=_upload - In the implementation block
@property (assign,nonatomic) long long bandwidth;                              //@synthesize bandwidth=_bandwidth - In the implementation block
@property (assign,nonatomic) long long numberOfClientStreams;                  //@synthesize numberOfClientStreams=_numberOfClientStreams - In the implementation block
@property (assign,nonatomic) long long duration;                               //@synthesize duration=_duration - In the implementation block
@property (nonatomic,copy) NSString * additionalClientParameters;              //@synthesize additionalClientParameters=_additionalClientParameters - In the implementation block
@property (nonatomic,copy) NSString * additionalServerParameters;              //@synthesize additionalServerParameters=_additionalServerParameters - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)dealloc;
-(BOOL)conformsToProtocol:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)duration;
-(W5Peer *)client;
-(void)setClient:(W5Peer *)arg1 ;
-(void)setServer:(W5Peer *)arg1 ;
-(W5Peer *)server;
-(void)setDuration:(long long)arg1 ;
-(void)setBandwidth:(long long)arg1 ;
-(long long)bandwidth;
-(long long)numberOfClientStreams;
-(void)setAdditionalClientParameters:(NSString *)arg1 ;
-(void)setAdditionalServerParameters:(NSString *)arg1 ;
-(void)setOverAWDL:(BOOL)arg1 ;
-(void)setUsingUDP:(BOOL)arg1 ;
-(void)setNumberOfClientStreams:(long long)arg1 ;
-(void)setUpload:(BOOL)arg1 ;
-(BOOL)overAWDL;
-(BOOL)usingUDP;
-(BOOL)upload;
-(NSString *)additionalClientParameters;
-(NSString *)additionalServerParameters;
@end

