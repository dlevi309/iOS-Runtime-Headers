/*
* Generated on Thursday, January 14, 2021 at 2:21:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


@class NSURL, NSString;

@interface PKPaymentHeroImageModel : NSObject {

	NSURL* _url;
	NSString* _imageSha;

}

@property (nonatomic,readonly) NSURL * url;                      //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) NSString * imageSha;              //@synthesize imageSha=_imageSha - In the implementation block
-(NSString *)imageSha;
-(NSURL *)url;
-(id)initWithDictionary:(id)arg1 ;
@end

