/*
* Generated on Thursday, January 14, 2021 at 2:22:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <Foundation/NSOperation.h>

@protocol PXVideoProcessingOperationResult;
@class PXVideoProcessingOperationSpec;

@interface PXVideoProcessingOperation : NSOperation {

	PXVideoProcessingOperationSpec* _spec;
	id<PXVideoProcessingOperationResult> _result;
	/*^block*/id _progressHandler;

}

@property (nonatomic,readonly) PXVideoProcessingOperationSpec * spec;                    //@synthesize spec=_spec - In the implementation block
@property (nonatomic,readonly) id<PXVideoProcessingOperationResult> result;              //@synthesize result=_result - In the implementation block
@property (nonatomic,copy) id progressHandler;                                           //@synthesize progressHandler=_progressHandler - In the implementation block
+(id)new;
-(id)initWithSpec:(id)arg1 ;
-(id)init;
-(PXVideoProcessingOperationSpec *)spec;
-(void)main;
-(void)setProgressHandler:(id)arg1 ;
-(id<PXVideoProcessingOperationResult>)result;
-(id)progressHandler;
-(id)performProcessing;
@end

