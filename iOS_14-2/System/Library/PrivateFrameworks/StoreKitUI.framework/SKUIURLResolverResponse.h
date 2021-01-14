/*
* Generated on Thursday, January 14, 2021 at 2:25:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

