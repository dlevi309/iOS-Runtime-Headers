/*
* Generated on Thursday, January 14, 2021 at 2:22:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/

#import <StoreServices/SSRequest.h>
#import <libobjc.A.dylib/SSXPCCoding.h>

@class NSURLRequest, NSString;

@interface SSDownloadManifestRequest : SSRequest <SSXPCCoding> {

	long long _manifestFormat;
	BOOL _shouldHideUserPrompts;
	NSURLRequest* _urlRequest;

}

@property (assign) long long manifestFormat; 
@property (assign,nonatomic) id<SSDownloadManifestRequestDelegate> delegate; 
@property (readonly) NSURLRequest * URLRequest; 
@property (assign) BOOL shouldHideUserPrompts; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(id)init;
-(BOOL)start;
-(void)startWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)initWithURLRequest:(id)arg1 ;
-(void)startWithManifestResponseBlock:(/*^block*/id)arg1 ;
-(void)setShouldHideUserPrompts:(BOOL)arg1 ;
-(BOOL)shouldHideUserPrompts;
-(long long)manifestFormat;
-(void)setManifestFormat:(long long)arg1 ;
-(NSURLRequest *)URLRequest;
-(void)dealloc;
@end

