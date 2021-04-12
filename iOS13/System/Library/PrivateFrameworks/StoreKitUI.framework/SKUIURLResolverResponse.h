/*
* Generated on Monday, March 1, 2021 at 2:31:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/


@class NSData, NSHTTPURLResponse;

@interface SKUIURLResolverResponse : NSObject {

	NSData* _data;
	NSHTTPURLResponse* _response;

}

@property (nonatomic,readonly) NSData * data;                                //@synthesize data=_data - In the implementation block
@property (nonatomic,readonly) NSHTTPURLResponse * URLResponse;              //@synthesize response=_response - In the implementation block
-(NSData *)data;
-(NSHTTPURLResponse *)URLResponse;
-(id)initWithData:(id)arg1 URLResponse:(id)arg2 ;
@end

