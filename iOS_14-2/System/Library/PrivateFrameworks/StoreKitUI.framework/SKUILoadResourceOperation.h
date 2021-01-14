/*
* Generated on Thursday, January 14, 2021 at 2:25:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <Foundation/NSOperation.h>

@class SKUIClientContext, NSLock, SKUIResourceRequest;

@interface SKUILoadResourceOperation : NSOperation {

	SKUIClientContext* _clientContext;
	NSLock* _lock;
	/*^block*/id _outputBlock;
	SKUIResourceRequest* _request;
	long long __loadReason;

}

@property (assign,setter=_setLoadReason:,nonatomic) long long _loadReason;              //@synthesize _loadReason=__loadReason - In the implementation block
@property (copy,readonly) SKUIResourceRequest * resourceRequest; 
@property (retain) SKUIClientContext * clientContext; 
@property (copy) id outputBlock; 
-(id)init;
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(SKUIClientContext *)clientContext;
-(void)setOutputBlock:(id)arg1 ;
-(void)main;
-(long long)_loadReason;
-(id)outputBlock;
-(void)_setLoadReason:(long long)arg1 ;
-(void)cancel;
-(id)initWithResourceRequest:(id)arg1 ;
-(SKUIResourceRequest *)resourceRequest;
-(id)_initSKUILoadResourceOperation;
@end

