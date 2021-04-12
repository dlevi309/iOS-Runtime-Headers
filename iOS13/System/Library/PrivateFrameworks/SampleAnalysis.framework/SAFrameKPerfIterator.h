/*
* Generated on Monday, March 1, 2021 at 2:34:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
*/

#import <libobjc.A.dylib/SAFrameIterator.h>

@class SAFrame, SALeafFrame, SAKernelFrame, SAKernelLeafFrame, NSArray, SASharedCache, NSString;

@interface SAFrameKPerfIterator : NSObject <SAFrameIterator> {

	SAFrame* _user;
	SALeafFrame* _userLeaf;
	SAKernelFrame* _kernel;
	SAKernelLeafFrame* _kernelLeaf;
	BOOL _hideKernelFrames;
	BOOL _hideUserFrames;
	unsigned _numUserFrames;
	unsigned _numKernelFrames;
	NSArray* _userBinaryLoadInfos;
	NSArray* _kernelBinaryLoadInfos;
	SASharedCache* _sharedCache;
	const unsigned long long* _userFrames;
	const unsigned long long* _kernelFrames;
	unsigned long long _continuation;

}

@property (retain) NSArray * userBinaryLoadInfos;                       //@synthesize userBinaryLoadInfos=_userBinaryLoadInfos - In the implementation block
@property (retain) NSArray * kernelBinaryLoadInfos;                     //@synthesize kernelBinaryLoadInfos=_kernelBinaryLoadInfos - In the implementation block
@property (retain) SASharedCache * sharedCache;                         //@synthesize sharedCache=_sharedCache - In the implementation block
@property (assign) const unsigned long long* userFrames;                //@synthesize userFrames=_userFrames - In the implementation block
@property (assign) unsigned numUserFrames;                              //@synthesize numUserFrames=_numUserFrames - In the implementation block
@property (assign) const unsigned long long* kernelFrames;              //@synthesize kernelFrames=_kernelFrames - In the implementation block
@property (assign) unsigned numKernelFrames;                            //@synthesize numKernelFrames=_numKernelFrames - In the implementation block
@property (assign) unsigned long long continuation;                     //@synthesize continuation=_continuation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)debugDescription;
-(SASharedCache *)sharedCache;
-(void)iterateFrames:(/*^block*/id)arg1 ;
-(id)instructionForUserAddress:(unsigned long long)arg1 symbolicationOffByOne:(BOOL)arg2 ;
-(id)instructionForKernelAddress:(unsigned long long)arg1 symbolicationOffByOne:(BOOL)arg2 ;
-(void)clearThreadData;
-(void)exposeUserFramesOnly;
-(void)exposeKernelFramesOnly;
-(void)exposeAllFrames;
-(void)clearTaskData;
-(BOOL)hasUserStack;
-(BOOL)hasKernelStack;
-(NSArray *)userBinaryLoadInfos;
-(void)setUserBinaryLoadInfos:(NSArray *)arg1 ;
-(NSArray *)kernelBinaryLoadInfos;
-(void)setKernelBinaryLoadInfos:(NSArray *)arg1 ;
-(void)setSharedCache:(SASharedCache *)arg1 ;
-(unsigned long long)continuation;
-(void)setContinuation:(unsigned long long)arg1 ;
-(const unsigned long long*)userFrames;
-(void)setUserFrames:(const unsigned long long*)arg1 ;
-(unsigned)numUserFrames;
-(void)setNumUserFrames:(unsigned)arg1 ;
-(const unsigned long long*)kernelFrames;
-(void)setKernelFrames:(const unsigned long long*)arg1 ;
-(unsigned)numKernelFrames;
-(void)setNumKernelFrames:(unsigned)arg1 ;
@end

