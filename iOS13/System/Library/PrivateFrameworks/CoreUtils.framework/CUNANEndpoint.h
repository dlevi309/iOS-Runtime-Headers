/*
* Generated on Monday, March 1, 2021 at 2:30:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
*/


@class NSString, NSDictionary, WiFiAwareDiscoveryResult;

@interface CUNANEndpoint : NSObject {

	int _port;
	NSString* _identifier;
	NSString* _name;
	NSString* _serviceType;
	NSDictionary* _textInfo;
	WiFiAwareDiscoveryResult* _discoveryResult;

}

@property (nonatomic,retain) WiFiAwareDiscoveryResult * discoveryResult;              //@synthesize discoveryResult=_discoveryResult - In the implementation block
@property (nonatomic,copy) NSString * identifier;                                     //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * name;                                           //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) int port;                                                //@synthesize port=_port - In the implementation block
@property (nonatomic,copy) NSString * serviceType;                                    //@synthesize serviceType=_serviceType - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * textInfo;                          //@synthesize textInfo=_textInfo - In the implementation block
-(id)description;
-(NSString *)name;
-(int)port;
-(void)setName:(NSString *)arg1 ;
-(NSString *)identifier;
-(void)setPort:(int)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)serviceType;
-(void)setServiceType:(NSString *)arg1 ;
-(NSDictionary *)textInfo;
-(id)descriptionWithLevel:(int)arg1 ;
-(WiFiAwareDiscoveryResult *)discoveryResult;
-(unsigned)updateWithDiscoveryResult:(id)arg1 ;
-(void)setDiscoveryResult:(WiFiAwareDiscoveryResult *)arg1 ;
@end

