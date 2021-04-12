/*
* Generated on Thursday, January 14, 2021 at 2:25:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <Foundation/NSOperation.h>

@protocol OS_dispatch_queue;
@class SKUIClientContext, NSObject, SSMetricsPageEvent, NSURLRequest;

@interface SKUILoadProductPageOperation : NSOperation {

	SKUIClientContext* _clientContext;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	long long _itemID;
	SSMetricsPageEvent* _metricsPageEvent;
	/*^block*/id _outputBlock;
	NSURLRequest* _urlRequest;

}

@property (copy) id outputBlock; 
@property (readonly) SSMetricsPageEvent * metricsPageEvent; 
-(SSMetricsPageEvent *)metricsPageEvent;
-(void)setOutputBlock:(id)arg1 ;
-(void)main;
-(id)outputBlock;
-(id)initWithItemIdentifier:(long long)arg1 clientContext:(id)arg2 ;
-(id)initWithProductPageURLRequest:(id)arg1 clientContext:(id)arg2 ;
-(id)_initSKUILoadProductPageOperation;
@end

