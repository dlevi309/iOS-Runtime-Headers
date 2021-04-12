/*
* Generated on Monday, March 1, 2021 at 2:31:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)cancel;
-(void)main;
-(long long)_loadReason;
-(SKUIClientContext *)clientContext;
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(void)setOutputBlock:(id)arg1 ;
-(id)outputBlock;
-(id)initWithResourceRequest:(id)arg1 ;
-(void)_setLoadReason:(long long)arg1 ;
-(SKUIResourceRequest *)resourceRequest;
-(id)_initSKUILoadResourceOperation;
@end

