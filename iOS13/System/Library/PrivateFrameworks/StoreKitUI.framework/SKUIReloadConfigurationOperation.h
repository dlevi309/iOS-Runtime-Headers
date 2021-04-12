/*
* Generated on Monday, March 1, 2021 at 2:31:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <Foundation/NSOperation.h>

@protocol OS_dispatch_queue;
@class NSObject, SSURLBag;

@interface SKUIReloadConfigurationOperation : NSOperation {

	NSObject*<OS_dispatch_queue> _dispatchQueue;
	/*^block*/id _outputBlock;
	SSURLBag* _urlBag;

}

@property (retain) SSURLBag * URLBag; 
@property (copy) id outputBlock; 
+(id)cachePath;
-(id)init;
-(void)main;
-(void)setOutputBlock:(id)arg1 ;
-(id)outputBlock;
-(SSURLBag *)URLBag;
-(void)setURLBag:(SSURLBag *)arg1 ;
@end

