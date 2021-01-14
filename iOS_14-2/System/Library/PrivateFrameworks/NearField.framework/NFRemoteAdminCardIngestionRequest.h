/*
* Generated on Thursday, January 14, 2021 at 2:24:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NearField.framework/NearField
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary;

@interface NFRemoteAdminCardIngestionRequest : NSObject <NSSecureCoding> {

	NSString* _serverIdentifier;
	NSString* _uri;
	NSString* _sessionToken;
	NSDictionary* _cardServiceInfo;
	unsigned long long _maxDetectionTimeout;

}

@property (nonatomic,retain) NSString * serverIdentifier;                         //@synthesize serverIdentifier=_serverIdentifier - In the implementation block
@property (nonatomic,retain) NSString * uri;                                      //@synthesize uri=_uri - In the implementation block
@property (nonatomic,retain) NSString * sessionToken;                             //@synthesize sessionToken=_sessionToken - In the implementation block
@property (nonatomic,retain) NSDictionary * cardServiceInfo;                      //@synthesize cardServiceInfo=_cardServiceInfo - In the implementation block
@property (assign,nonatomic) unsigned long long maxDetectionTimeout;              //@synthesize maxDetectionTimeout=_maxDetectionTimeout - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)cardIngestionRequestWithServerIdentifier:(id)arg1 sessionToken:(id)arg2 readerModeMetadata:(id)arg3 maxDetectionTimeout:(unsigned long long)arg4 ;
-(NSString *)uri;
-(void)setServerIdentifier:(NSString *)arg1 ;
-(NSString *)serverIdentifier;
-(void)setUri:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setSessionToken:(NSString *)arg1 ;
-(NSString *)sessionToken;
-(id)initWithCoder:(id)arg1 ;
-(void)setMaxDetectionTimeout:(unsigned long long)arg1 ;
-(void)setCardServiceInfo:(NSDictionary *)arg1 ;
-(NSDictionary *)cardServiceInfo;
-(unsigned long long)maxDetectionTimeout;
@end

