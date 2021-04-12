/*
* Generated on Thursday, January 14, 2021 at 2:25:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <Foundation/NSOperation.h>

@class SKUIClientContext, NSURL;

@interface SKUILoadTrendingSearchPageOperation : NSOperation {

	SKUIClientContext* _clientContext;
	NSURL* _pageURL;
	/*^block*/id _outputBlock;

}

@property (nonatomic,readonly) SKUIClientContext * clientContext;              //@synthesize clientContext=_clientContext - In the implementation block
@property (nonatomic,readonly) NSURL * pageURL;                                //@synthesize pageURL=_pageURL - In the implementation block
@property (nonatomic,copy,readonly) id outputBlock;                            //@synthesize outputBlock=_outputBlock - In the implementation block
-(NSURL *)pageURL;
-(SKUIClientContext *)clientContext;
-(void)main;
-(id)outputBlock;
-(id)initWithClientContext:(id)arg1 pageURL:(id)arg2 outputBlock:(/*^block*/id)arg3 ;
@end

