/*
* Generated on Monday, March 1, 2021 at 2:31:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <Foundation/NSOperation.h>

@protocol OS_dispatch_queue;
@class SKUIClientContext, NSObject;

@interface SKUIPersonalizeOfferOperation : NSOperation {

	SKUIClientContext* _clientContext;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	long long _itemID;
	/*^block*/id _outputBlock;

}

@property (copy) id outputBlock; 
-(void)main;
-(void)setOutputBlock:(id)arg1 ;
-(id)outputBlock;
-(id)initWithItemIdentifier:(long long)arg1 clientContext:(id)arg2 ;
@end

