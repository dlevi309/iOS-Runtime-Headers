/*
* Generated on Monday, March 1, 2021 at 2:31:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setURLString:(NSString *)arg1 ;
-(NSString *)referrer;
-(void)startWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(void)setReferrer:(NSString *)arg1 ;
@end

