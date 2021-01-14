/*
* Generated on Thursday, January 14, 2021 at 2:24:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
*/


@class NSDictionary, NSURL;

@interface SKStorePageRequest : NSObject {

	long long _pageStyle;
	NSDictionary* _productParameters;
	NSURL* _productURL;

}

@property (assign,nonatomic) long long productPageStyle;                  //@synthesize pageStyle=_pageStyle - In the implementation block
@property (nonatomic,copy) NSDictionary * productParameters;              //@synthesize productParameters=_productParameters - In the implementation block
@property (nonatomic,copy) NSURL * productURL;                            //@synthesize productURL=_productURL - In the implementation block
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(NSURL *)productURL;
-(void)setProductURL:(NSURL *)arg1 ;
-(void)setProductPageStyle:(long long)arg1 ;
-(long long)productPageStyle;
-(NSDictionary *)productParameters;
-(void)setProductParameters:(NSDictionary *)arg1 ;
@end

