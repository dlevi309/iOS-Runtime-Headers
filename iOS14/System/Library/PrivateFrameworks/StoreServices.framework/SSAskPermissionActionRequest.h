/*
* Generated on Thursday, January 14, 2021 at 2:22:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/

#import <StoreServices/SSRequest.h>
#import <libobjc.A.dylib/SSXPCCoding.h>

@class NSURL, NSString;

@interface SSAskPermissionActionRequest : SSRequest <SSXPCCoding> {

	NSURL* _url;

}

@property (nonatomic,readonly) NSURL * URL;                         //@synthesize url=_url - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(id)initWithURL:(id)arg1 ;
-(void)startWithCompletionBlock:(/*^block*/id)arg1 ;
-(NSURL *)URL;
@end

