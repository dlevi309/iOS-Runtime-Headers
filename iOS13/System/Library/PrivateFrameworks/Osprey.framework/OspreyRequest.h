/*
* Generated on Monday, March 1, 2021 at 2:35:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Osprey.framework/Osprey
*/


@class NSString, NSData, NSDictionary;

@interface OspreyRequest : NSObject {

	BOOL _useCompression;
	BOOL _forceHTTPv2;
	NSString* _methodName;
	NSData* _data;
	NSDictionary* _headers;
	NSData* _absintheSigningData;
	NSString* _clientTraceId;
	NSString* _userAgent;

}

@property (nonatomic,readonly) NSString * methodName;                   //@synthesize methodName=_methodName - In the implementation block
@property (nonatomic,retain) NSData * data;                             //@synthesize data=_data - In the implementation block
@property (nonatomic,retain) NSDictionary * headers;                    //@synthesize headers=_headers - In the implementation block
@property (nonatomic,retain) NSData * absintheSigningData;              //@synthesize absintheSigningData=_absintheSigningData - In the implementation block
@property (assign,nonatomic) BOOL useCompression;                       //@synthesize useCompression=_useCompression - In the implementation block
@property (assign,nonatomic) BOOL forceHTTPv2;                          //@synthesize forceHTTPv2=_forceHTTPv2 - In the implementation block
@property (nonatomic,copy) NSString * clientTraceId;                    //@synthesize clientTraceId=_clientTraceId - In the implementation block
@property (nonatomic,readonly) NSString * userAgent;                    //@synthesize userAgent=_userAgent - In the implementation block
+(id)requestWithMethodName:(id)arg1 ;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(NSString *)userAgent;
-(void)setHeaders:(NSDictionary *)arg1 ;
-(NSDictionary *)headers;
-(NSString *)methodName;
-(void)setClientTraceId:(NSString *)arg1 ;
-(id)initWithMethodName:(id)arg1 ;
-(id)grpcRequestWithBaseURL:(id)arg1 ;
-(NSData *)absintheSigningData;
-(void)setAbsintheSigningData:(NSData *)arg1 ;
-(BOOL)useCompression;
-(void)setUseCompression:(BOOL)arg1 ;
-(BOOL)forceHTTPv2;
-(void)setForceHTTPv2:(BOOL)arg1 ;
-(NSString *)clientTraceId;
@end

