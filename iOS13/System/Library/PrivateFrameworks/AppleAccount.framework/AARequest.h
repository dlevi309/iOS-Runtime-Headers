/*
* Generated on Monday, March 1, 2021 at 2:30:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
*/

#import <AppleAccount/AppleAccount-Structs.h>
#import <libobjc.A.dylib/NSURLSessionDataDelegate.h>

@class NSString, NSDictionary, NSURLRequest;

@interface AARequest : NSObject <NSURLSessionDataDelegate> {

	/*^block*/id _handler;
	NSString* _initialURLString;
	BOOL _flushCache;
	OpaqueCFHTTPCookieStorageRef _cookieStorage;
	NSString* _oneTimePassword;
	NSString* _machineId;
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
-(void)dealloc;
-(NSURLRequest *)urlRequest;
-(id)urlString;
-(void)setFlushCache:(BOOL)arg1 ;
-(void)performRequestWithHandler:(/*^block*/id)arg1 ;
-(void)setCookieStorage:(OpaqueCFHTTPCookieStorageRef)arg1 ;
-(void)setCustomHeaders:(NSDictionary *)arg1 ;
-(id)bodyDictionary;
-(id)redactedBodyStringWithPropertyList:(id)arg1 ;
-(void)_handleDataTaskCompletionWithData:(id)arg1 response:(id)arg2 error:(id)arg3 ;
-(id)initWithURLString:(id)arg1 ;
-(void)setDeviceProvisioningOneTimePassword:(id)arg1 ;
-(void)setDeviceProvisioningMachineId:(id)arg1 ;
-(id)urlCredential;
-(id)_redactedHeadersFromHTTPHeaders:(id)arg1 ;
-(BOOL)flushCache;
-(NSDictionary *)customHeaders;
@end

