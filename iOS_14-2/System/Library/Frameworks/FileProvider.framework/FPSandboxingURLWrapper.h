/*
* Generated on Thursday, January 14, 2021 at 2:23:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSURL, NSData;

@interface FPSandboxingURLWrapper : NSObject <NSSecureCoding> {

	NSURL* _url;
	NSData* _scope;
	NSData* _promiseScope;
	NSURL* _promiseURL;

}

@property (nonatomic,copy) NSURL * url;                //@synthesize url=_url - In the implementation block
@property (retain) NSURL * promiseURL;                 //@synthesize promiseURL=_promiseURL - In the implementation block
@property (retain) NSData * scope;                     //@synthesize scope=_scope - In the implementation block
@property (retain) NSData * promiseScope;              //@synthesize promiseScope=_promiseScope - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)wrapperWithURL:(id)arg1 extensionClass:(const char*)arg2 error:(id*)arg3 ;
+(id)wrapperWithURL:(id)arg1 readonly:(BOOL)arg2 error:(id*)arg3 ;
+(id)wrapperWithSecurityScopedURL:(id)arg1 ;
+(void)assembleURL:(id)arg1 sandbox:(id)arg2 physicalURL:(id)arg3 physicalSandbox:(id)arg4 ;
+(id)wrapperWithURL:(id)arg1 readonly:(BOOL)arg2 ;
+(id)wrapperWithURL:(id)arg1 ;
-(void)setScope:(NSData *)arg1 ;
-(NSData *)scope;
-(void)encodeWithCoder:(id)arg1 ;
-(NSURL *)promiseURL;
-(NSURL *)url;
-(NSData *)promiseScope;
-(void)setPromiseURL:(NSURL *)arg1 ;
-(void)setPromiseScope:(NSData *)arg1 ;
-(void)setUrl:(NSURL *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

