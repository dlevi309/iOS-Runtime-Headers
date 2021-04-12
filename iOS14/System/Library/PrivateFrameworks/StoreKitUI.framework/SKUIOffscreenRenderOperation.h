/*
* Generated on Thursday, January 14, 2021 at 2:25:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <Foundation/NSOperation.h>

@protocol OS_dispatch_queue;
@class NSObject, UIImage;

@interface SKUIOffscreenRenderOperation : NSOperation {

	NSObject*<OS_dispatch_queue> _accessQueue;
	/*^block*/id _createLayerBlock;
	UIImage* _outputImage;

}

@property (nonatomic,copy) id createLayerBlock; 
@property (nonatomic,readonly) UIImage * outputImage; 
+(void)preheatOffscreenRenderOperations;
-(id)init;
-(void)main;
-(UIImage *)outputImage;
-(id)createLayerBlock;
-(void)setCreateLayerBlock:(id)arg1 ;
@end

