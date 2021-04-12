/*
* Generated on Thursday, January 14, 2021 at 2:25:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <Foundation/NSOperation.h>

@protocol OS_dispatch_queue;
@class NSArray, SKUIClientContext, NSObject;

@interface SKUILoadGratisEligibilityOperation : NSOperation {

	NSArray* _bundleIDs;
	SKUIClientContext* _clientContext;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	/*^block*/id _outputBlock;

}

@property (copy) id outputBlock; 
-(id)init;
-(void)setOutputBlock:(id)arg1 ;
-(void)main;
-(id)_bodyData;
-(id)outputBlock;
-(id)initWithBundleIdentifiers:(id)arg1 clientContext:(id)arg2 ;
@end

