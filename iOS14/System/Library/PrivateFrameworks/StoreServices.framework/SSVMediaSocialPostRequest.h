/*
* Generated on Thursday, January 14, 2021 at 2:22:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/

#import <StoreServices/SSRequest.h>
#import <libobjc.A.dylib/SSXPCCoding.h>

@class SSVMediaSocialPostDescription, NSString;

@interface SSVMediaSocialPostRequest : SSRequest <SSXPCCoding> {

	SSVMediaSocialPostDescription* _postDescription;

}

@property (nonatomic,readonly) SSVMediaSocialPostDescription * postDescription;              //@synthesize postDescription=_postDescription - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(void)startWithCompletionBlock:(/*^block*/id)arg1 ;
-(SSVMediaSocialPostDescription *)postDescription;
-(id)initWithPostDescription:(id)arg1 ;
@end

