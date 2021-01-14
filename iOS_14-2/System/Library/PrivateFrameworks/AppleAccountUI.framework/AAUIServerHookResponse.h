/*
* Generated on Thursday, January 14, 2021 at 2:25:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
*/


@class NSDictionary, NSURLRequest;

@interface AAUIServerHookResponse : NSObject {

	NSDictionary* _additionalPayload;
	NSURLRequest* _continuationRequest;

}

@property (nonatomic,copy) NSDictionary * additionalPayload;                //@synthesize additionalPayload=_additionalPayload - In the implementation block
@property (nonatomic,copy) NSURLRequest * continuationRequest;              //@synthesize continuationRequest=_continuationRequest - In the implementation block
-(void)setAdditionalPayload:(NSDictionary *)arg1 ;
-(void)setContinuationRequest:(NSURLRequest *)arg1 ;
-(NSDictionary *)additionalPayload;
-(NSURLRequest *)continuationRequest;
@end

