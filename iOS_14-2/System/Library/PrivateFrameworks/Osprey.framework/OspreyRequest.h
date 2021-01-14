/*
* Generated on Thursday, January 14, 2021 at 2:26:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Osprey.framework/Osprey
*/


@class NSString, NSData, NSDictionary, NSNumber;

@interface OspreyRequest : NSObject {

	BOOL _enableDeviceAuthentication;
	BOOL _useCompression;
	BOOL _forceHTTPv2;
	BOOL _allowsCellularAccess;
	NSString* _methodName;
	NSData* _data;
	NSDictionary* _headers;
	NSData* _signedDeviceAuthenticationData;
	NSNumber* _deviceAuthenticationVersion;
	NSString* _clientTraceId;
	NSString* _userAgent;

}

@property (nonatomic,readonly) NSString * methodName;                              //@synthesize methodName=_methodName - In the implementation block
@property (nonatomic,retain) NSData * data;                                        //@synthesize data=_data - In the implementation block
@property (nonatomic,retain) NSDictionary * headers;                               //@synthesize headers=_headers - In the implementation block
@property (assign,nonatomic) BOOL enableDeviceAuthentication;                      //@synthesize enableDeviceAuthentication=_enableDeviceAuthentication - In the implementation block
@property (nonatomic,retain) NSData * signedDeviceAuthenticationData;              //@synthesize signedDeviceAuthenticationData=_signedDeviceAuthenticationData - In the implementation block
@property (nonatomic,retain) NSNumber * deviceAuthenticationVersion;               //@synthesize deviceAuthenticationVersion=_deviceAuthenticationVersion - In the implementation block
@property (assign,nonatomic) BOOL useCompression;                                  //@synthesize useCompression=_useCompression - In the implementation block
@property (assign,nonatomic) BOOL forceHTTPv2;                                     //@synthesize forceHTTPv2=_forceHTTPv2 - In the implementation block
@property (nonatomic,copy) NSString * clientTraceId;                               //@synthesize clientTraceId=_clientTraceId - In the implementation block
@property (nonatomic,readonly) NSString * userAgent;                               //@synthesize userAgent=_userAgent - In the implementation block
@property (assign,nonatomic) BOOL allowsCellularAccess;                            //@synthesize allowsCellularAccess=_allowsCellularAccess - In the implementation block
@property (assign,nonatomic) BOOL requireAbsintheAuthentication; 
+(id)requestWithMethodName:(id)arg1 ;
-(void)setData:(NSData *)arg1 ;
-(void)setAllowsCellularAccess:(BOOL)arg1 ;
-(NSData *)data;
-(BOOL)allowsCellularAccess;
-(NSString *)userAgent;
-(void)setUseCompression:(BOOL)arg1 ;
-(NSDictionary *)headers;
-(void)setHeaders:(NSDictionary *)arg1 ;
-(NSNumber *)deviceAuthenticationVersion;
-(void)setDeviceAuthenticationVersion:(NSNumber *)arg1 ;
-(id)initWithMethodName:(id)arg1 ;
-(id)grpcRequestWithBaseURL:(id)arg1 ;
-(BOOL)requireAbsintheAuthentication;
-(void)setRequireAbsintheAuthentication:(BOOL)arg1 ;
-(NSString *)methodName;
-(BOOL)enableDeviceAuthentication;
-(void)setEnableDeviceAuthentication:(BOOL)arg1 ;
-(NSData *)signedDeviceAuthenticationData;
-(void)setSignedDeviceAuthenticationData:(NSData *)arg1 ;
-(BOOL)useCompression;
-(BOOL)forceHTTPv2;
-(void)setForceHTTPv2:(BOOL)arg1 ;
-(NSString *)clientTraceId;
-(void)setClientTraceId:(NSString *)arg1 ;
@end

