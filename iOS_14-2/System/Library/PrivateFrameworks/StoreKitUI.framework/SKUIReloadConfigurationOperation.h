/*
* Generated on Thursday, January 14, 2021 at 2:25:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setURLBag:(SSURLBag *)arg1 ;
-(void)setOutputBlock:(id)arg1 ;
-(void)main;
-(id)outputBlock;
-(SSURLBag *)URLBag;
@end

