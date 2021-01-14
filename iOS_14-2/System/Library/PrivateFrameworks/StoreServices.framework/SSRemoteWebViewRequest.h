/*
* Generated on Thursday, January 14, 2021 at 2:22:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/

#import <StoreServices/SSRequest.h>

@class NSString;

@interface SSRemoteWebViewRequest : SSRequest {

	NSString* _referrer;
	NSString* _URLString;

}

@property (nonatomic,retain) NSString * referrer;               //@synthesize referrer=_referrer - In the implementation block
@property (nonatomic,retain) NSString * URLString;              //@synthesize URLString=_URLString - In the implementation block
-(NSString *)URLString;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(void)startWithCompletionBlock:(/*^block*/id)arg1 ;
-(NSString *)referrer;
-(void)setURLString:(NSString *)arg1 ;
-(void)setReferrer:(NSString *)arg1 ;
@end

