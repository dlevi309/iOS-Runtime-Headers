/*
* Generated on Monday, March 1, 2021 at 2:32:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
*/


@class NSDictionary, NSURLRequest;

@interface AAUIServerHookResponse : NSObject {

	NSDictionary* _additionalPayload;
	NSURLRequest* _continuationRequest;

}

@property (nonatomic,copy) NSDictionary * additionalPayload;                //@synthesize additionalPayload=_additionalPayload - In the implementation block
@property (nonatomic,copy) NSURLRequest * continuationRequest;              //@synthesize continuationRequest=_continuationRequest - In the implementation block
-(void)setContinuationRequest:(NSURLRequest *)arg1 ;
-(NSDictionary *)additionalPayload;
-(void)setAdditionalPayload:(NSDictionary *)arg1 ;
-(NSURLRequest *)continuationRequest;
@end

