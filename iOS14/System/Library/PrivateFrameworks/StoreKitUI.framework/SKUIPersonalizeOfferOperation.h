/*
* Generated on Thursday, January 14, 2021 at 2:25:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setOutputBlock:(id)arg1 ;
-(void)main;
-(id)outputBlock;
-(id)initWithItemIdentifier:(long long)arg1 clientContext:(id)arg2 ;
@end

