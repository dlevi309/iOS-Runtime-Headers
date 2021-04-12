/*
* Generated on Monday, March 1, 2021 at 2:34:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
*/

#import <libobjc.A.dylib/SAFrameIterator.h>

@class NSArray, NSString;

@interface SAStackIterator : NSObject <SAFrameIterator> {

	NSArray* _stack;

}

@property (retain) NSArray * stack;                                 //@synthesize stack=_stack - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setStack:(NSArray *)arg1 ;
-(NSArray *)stack;
-(void)iterateFrames:(/*^block*/id)arg1 ;
-(void)exposeUserFramesOnly;
-(void)exposeKernelFramesOnly;
-(void)exposeAllFrames;
@end

