/*
* Generated on Monday, March 1, 2021 at 2:31:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)main;
-(NSURL *)pageURL;
-(SKUIClientContext *)clientContext;
-(id)outputBlock;
-(id)initWithClientContext:(id)arg1 pageURL:(id)arg2 outputBlock:(/*^block*/id)arg3 ;
@end

