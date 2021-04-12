/*
* Generated on Monday, March 1, 2021 at 2:34:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
*/

#import <SampleAnalysis/SampleAnalysis-Structs.h>
#import <libobjc.A.dylib/SAFrameIterator.h>

@class SAFrame, SALeafFrame, SAKernelFrame, SAKernelLeafFrame, SAUserTruncatedBacktrace, NSArray, SASharedCache, NSString;

@interface SAFrameKCDataIterator : NSObject <SAFrameIterator> {

	SAFrame* _user;
	SALeafFrame* _userLeaf;
	SAKernelFrame* _kernel;
	SAKernelLeafFrame* _kernelLeaf;
	SAUserTruncatedBacktrace* _truncatedBacktrace;
	BOOL _hideKernelFrames;
	BOOL _hideUserFrames;
	BOOL _isUserStackTruncated;
	int _numUser64Frames;
	int _numUser64LRs;
	int _numUser32Frames;
	int _numUser32LRs;
	int _numKernel64Frames;
	int _numKernel64LRs;
	int _numKernel32Frames;
	int _numKernel32LRs;
	NSArray* _userBinaryLoadInfos;
	NSArray* _kernelBinaryLoadInfos;
	SASharedCache* _sharedCache;
	stack_snapshot_frame64* _user64Frames;
	unsigned long long* _user64LRs;
	stack_snapshot_frame32* _user32Frames;
	unsigned* _user32LRs;
	stack_snapshot_frame64* _kernel64Frames;
	unsigned long long* _kernel64LRs;
	stack_snapshot_frame32* _kernel32Frames;
	unsigned* _kernel32LRs;
	unsigned long long _continuation;

}

@property (retain) NSArray * userBinaryLoadInfos;                       //@synthesize userBinaryLoadInfos=_userBinaryLoadInfos - In the implementation block
@property (retain) NSArray * kernelBinaryLoadInfos;                     //@synthesize kernelBinaryLoadInfos=_kernelBinaryLoadInfos - In the implementation block
@property (retain) SASharedCache * sharedCache;                         //@synthesize sharedCache=_sharedCache - In the implementation block
@property (assign) stack_snapshot_frame64* user64Frames;                //@synthesize user64Frames=_user64Frames - In the implementation block
@property (assign) int numUser64Frames;                                 //@synthesize numUser64Frames=_numUser64Frames - In the implementation block
@property (assign) unsigned long long* user64LRs;                       //@synthesize user64LRs=_user64LRs - In the implementation block
@property (assign) int numUser64LRs;                                    //@synthesize numUser64LRs=_numUser64LRs - In the implementation block
@property (assign) stack_snapshot_frame32* user32Frames;                //@synthesize user32Frames=_user32Frames - In the implementation block
@property (assign) int numUser32Frames;                                 //@synthesize numUser32Frames=_numUser32Frames - In the implementation block
@property (assign) unsigned* user32LRs;                                 //@synthesize user32LRs=_user32LRs - In the implementation block
@property (assign) int numUser32LRs;                                    //@synthesize numUser32LRs=_numUser32LRs - In the implementation block
@property (assign) stack_snapshot_frame64* kernel64Frames;              //@synthesize kernel64Frames=_kernel64Frames - In the implementation block
@property (assign) int numKernel64Frames;                               //@synthesize numKernel64Frames=_numKernel64Frames - In the implementation block
@property (assign) unsigned long long* kernel64LRs;                     //@synthesize kernel64LRs=_kernel64LRs - In the implementation block
@property (assign) int numKernel64LRs;                                  //@synthesize numKernel64LRs=_numKernel64LRs - In the implementation block
@property (assign) stack_snapshot_frame32* kernel32Frames;              //@synthesize kernel32Frames=_kernel32Frames - In the implementation block
@property (assign) int numKernel32Frames;                               //@synthesize numKernel32Frames=_numKernel32Frames - In the implementation block
@property (assign) unsigned* kernel32LRs;                               //@synthesize kernel32LRs=_kernel32LRs - In the implementation block
@property (assign) int numKernel32LRs;                                  //@synthesize numKernel32LRs=_numKernel32LRs - In the implementation block
@property (assign) unsigned long long continuation;                     //@synthesize continuation=_continuation - In the implementation block
@property (assign) BOOL isUserStackTruncated;                           //@synthesize isUserStackTruncated=_isUserStackTruncated - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(SASharedCache *)sharedCache;
-(void)iterateFrames:(/*^block*/id)arg1 ;
-(id)instructionForUserAddress:(unsigned long long)arg1 symbolicationOffByOne:(BOOL)arg2 ;
-(id)instructionForKernelAddress:(unsigned long long)arg1 symbolicationOffByOne:(BOOL)arg2 ;
-(void)clearThreadData;
-(void)exposeUserFramesOnly;
-(void)exposeKernelFramesOnly;
-(void)exposeAllFrames;
-(void)clearTaskData;
-(BOOL)hasStack;
-(BOOL)hasUserStack;
-(BOOL)hasKernelStack;
-(NSArray *)userBinaryLoadInfos;
-(void)setUserBinaryLoadInfos:(NSArray *)arg1 ;
-(NSArray *)kernelBinaryLoadInfos;
-(void)setKernelBinaryLoadInfos:(NSArray *)arg1 ;
-(void)setSharedCache:(SASharedCache *)arg1 ;
-(stack_snapshot_frame64*)user64Frames;
-(void)setUser64Frames:(stack_snapshot_frame64*)arg1 ;
-(int)numUser64Frames;
-(void)setNumUser64Frames:(int)arg1 ;
-(unsigned long long*)user64LRs;
-(void)setUser64LRs:(unsigned long long*)arg1 ;
-(int)numUser64LRs;
-(void)setNumUser64LRs:(int)arg1 ;
-(stack_snapshot_frame32*)user32Frames;
-(void)setUser32Frames:(stack_snapshot_frame32*)arg1 ;
-(int)numUser32Frames;
-(void)setNumUser32Frames:(int)arg1 ;
-(unsigned*)user32LRs;
-(void)setUser32LRs:(unsigned*)arg1 ;
-(int)numUser32LRs;
-(void)setNumUser32LRs:(int)arg1 ;
-(stack_snapshot_frame64*)kernel64Frames;
-(void)setKernel64Frames:(stack_snapshot_frame64*)arg1 ;
-(int)numKernel64Frames;
-(void)setNumKernel64Frames:(int)arg1 ;
-(unsigned long long*)kernel64LRs;
-(void)setKernel64LRs:(unsigned long long*)arg1 ;
-(int)numKernel64LRs;
-(void)setNumKernel64LRs:(int)arg1 ;
-(stack_snapshot_frame32*)kernel32Frames;
-(void)setKernel32Frames:(stack_snapshot_frame32*)arg1 ;
-(int)numKernel32Frames;
-(void)setNumKernel32Frames:(int)arg1 ;
-(unsigned*)kernel32LRs;
-(void)setKernel32LRs:(unsigned*)arg1 ;
-(int)numKernel32LRs;
-(void)setNumKernel32LRs:(int)arg1 ;
-(unsigned long long)continuation;
-(void)setContinuation:(unsigned long long)arg1 ;
-(BOOL)isUserStackTruncated;
-(void)setIsUserStackTruncated:(BOOL)arg1 ;
@end

