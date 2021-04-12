/*
* Generated on Thursday, January 14, 2021 at 2:22:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
*/

#import <AppleAccount/AppleAccount-Structs.h>
#import <libobjc.A.dylib/NSURLSessionDataDelegate.h>

@class NSString, NSDictionary, NSURLRequest;

@interface AARequest : NSObject <NSURLSessionDataDelegate> {

	/*^block*/id _handler;
	NSString* _initialURLString;
	OpaqueCFHTTPCookieStorageRef _cookieStorage;
	NSString* _oneTimePassword;
	NSString* _machineId;
	BOOL _flushCache;
	NSDictionary* _customHeaders;

}

@property (readonly) NSURLRequest * urlRequest; 
@property (assign,nonatomic) BOOL flushCache;                         //@synthesize flushCache=_flushCache - In the implementation block
@property (nonatomic,copy) NSDictionary * customHeaders;              //@synthesize customHeaders=_customHeaders - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)responseClass;
+(id)protocolVersion;
+(id)redactedHeadersFromHTTPHeaders:(id)arg1 ;
-(id)urlString;
-(id)initWithURLString:(id)arg1 ;
-(NSURLRequest *)urlRequest;
-(BOOL)flushCache;
-(void)performSignedRequestWithHandler:(/*^block*/id)arg1 ;
-(void)setFlushCache:(BOOL)arg1 ;
-(void)setCookieStorage:(OpaqueCFHTTPCookieStorageRef)arg1 ;
-(id)redactedBodyStringWithPropertyList:(id)arg1 ;
-(void)_performRequestWithSession:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)_handleDataTaskCompletionWithData:(id)arg1 response:(id)arg2 error:(id)arg3 ;
-(void)setDeviceProvisioningOneTimePassword:(id)arg1 ;
-(void)setDeviceProvisioningMachineId:(id)arg1 ;
-(id)urlCredential;
-(void)performRequestForDevice:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(NSDictionary *)customHeaders;
-(void)setCustomHeaders:(NSDictionary *)arg1 ;
-(void)performRequestWithHandler:(/*^block*/id)arg1 ;
-(id)bodyDictionary;
-(void)dealloc;
@end

