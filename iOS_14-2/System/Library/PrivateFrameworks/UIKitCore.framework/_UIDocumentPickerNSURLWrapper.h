/*
* Generated on Thursday, January 14, 2021 at 2:20:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSURL, NSData;

@interface _UIDocumentPickerNSURLWrapper : NSObject <NSSecureCoding> {

	NSURL* _url;
	NSURL* _promiseURL;
	NSData* _scope;
	NSData* _promiseScope;

}

@property (nonatomic,copy) NSURL * url;                //@synthesize url=_url - In the implementation block
@property (retain) NSURL * promiseURL;                 //@synthesize promiseURL=_promiseURL - In the implementation block
@property (retain) NSData * scope;                     //@synthesize scope=_scope - In the implementation block
@property (retain) NSData * promiseScope;              //@synthesize promiseScope=_promiseScope - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)wrapperWithURL:(id)arg1 createSandboxIfNoneAttached:(BOOL)arg2 ;
+(id)wrapperForExportWithURL:(id)arg1 error:(id*)arg2 ;
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

