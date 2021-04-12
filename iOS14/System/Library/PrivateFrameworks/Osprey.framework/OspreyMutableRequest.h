/*
* Generated on Thursday, January 14, 2021 at 2:26:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Osprey.framework/Osprey
*/


@class NSMutableDictionary, NSString;

@interface OspreyMutableRequest : NSObject {

	NSMutableDictionary* _additionalHeaders;
	BOOL _enableDeviceAuthentication;
	BOOL _allowsCellularAccess;
	BOOL _compressionEnabled;
	BOOL _forceHTTPv2;
	NSString* _methodName;
	NSString* _clientTraceIdentifier;

}

@property (nonatomic,readonly) NSString * methodName;                                          //@synthesize methodName=_methodName - In the implementation block
@property (nonatomic,copy) NSString * clientTraceIdentifier;                                   //@synthesize clientTraceIdentifier=_clientTraceIdentifier - In the implementation block
@property (assign,nonatomic) BOOL enableDeviceAuthentication;                                  //@synthesize enableDeviceAuthentication=_enableDeviceAuthentication - In the implementation block
@property (assign,nonatomic) BOOL allowsCellularAccess;                                        //@synthesize allowsCellularAccess=_allowsCellularAccess - In the implementation block
@property (assign,getter=isCompressionEnabled,nonatomic) BOOL compressionEnabled;              //@synthesize compressionEnabled=_compressionEnabled - In the implementation block
@property (assign,nonatomic) BOOL forceHTTPv2;                                                 //@synthesize forceHTTPv2=_forceHTTPv2 - In the implementation block
@property (assign,nonatomic) BOOL requireAbsintheAuthentication; 
-(void)setValue:(id)arg1 forHTTPHeaderField:(id)arg2 ;
-(void)setAllowsCellularAccess:(BOOL)arg1 ;
-(BOOL)allowsCellularAccess;
-(void)setClientTraceIdentifier:(NSString *)arg1 ;
-(BOOL)isCompressionEnabled;
-(void)setCompressionEnabled:(BOOL)arg1 ;
-(id)initWithMethodName:(id)arg1 ;
-(BOOL)requireAbsintheAuthentication;
-(void)setRequireAbsintheAuthentication:(BOOL)arg1 ;
-(NSString *)methodName;
-(BOOL)enableDeviceAuthentication;
-(void)setEnableDeviceAuthentication:(BOOL)arg1 ;
-(BOOL)forceHTTPv2;
-(void)setForceHTTPv2:(BOOL)arg1 ;
-(id)buildInternalRequest;
-(NSString *)clientTraceIdentifier;
@end

