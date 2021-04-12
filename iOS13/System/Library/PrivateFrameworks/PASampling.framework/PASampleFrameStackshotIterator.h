/*
* Generated on Monday, March 1, 2021 at 2:35:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
*/

#import <PASampling/PASampleFrameIterator.h>

@class PAStackshotThread, PASampleKernelFrame, PASampleUserFrame, NSString;

@interface PASampleFrameStackshotIterator : NSObject <PASampleFrameIterator> {

	PAStackshotThread* _stackshotThread;
	PASampleKernelFrame* _kernel;
	PASampleUserFrame* _user;
	BOOL _hideKernelFrames;
	BOOL _hideUserFrames;

}

@property (retain) PAStackshotThread * stackshotThread;              //@synthesize stackshotThread=_stackshotThread - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)iterateFrames:(/*^block*/id)arg1 ;
-(void)exposeUserFramesOnly;
-(void)exposeKernelFramesOnly;
-(void)exposeAllFrames;
-(PAStackshotThread *)stackshotThread;
-(void)setStackshotThread:(PAStackshotThread *)arg1 ;
@end

