/*
* Generated on Thursday, January 14, 2021 at 2:26:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
*/

#import <libobjc.A.dylib/SAFrameIterator.h>

@protocol SAFrameIterator <NSObject>
@required
-(void)iterateFrames:(/*^block*/id)arg1;
-(void)exposeUserFramesOnly;
-(void)exposeKernelFramesOnly;
-(void)exposeAllFrames;

@end


@class SAFrame, SALeafFrame, SAKernelFrame, SAKernelLeafFrame, SAUserTruncatedBacktrace, NSArray, SASharedCache, NSMutableDictionary, NSString;

@interface SAFrameIterator : NSObject <SAFrameIterator> {

	SAFrame* _user;
	SALeafFrame* _userLeaf;
	SAKernelFrame* _kernel;
	SAKernelLeafFrame* _kernelLeaf;
	SAUserTruncatedBacktrace* _truncatedBacktrace;
	BOOL _hideKernelFrames;
	BOOL _hideUserFrames;
	BOOL _assumeUserBinaryLoadInfosContainMainBinary;
	BOOL _isUserStackTruncated;
	BOOL _checkLR;
	int _numUserFrames;
	int _numKernelFrames;
	unsigned long long _backtracer;
	NSArray* _userBinaryLoadInfos;
	NSArray* _kernelBinaryLoadInfos;
	SASharedCache* _sharedCache;
	unsigned long long* _userFrames;
	unsigned long long* _kernelFrames;
	unsigned long long _continuation;
	NSMutableDictionary* _addressTranslations;

}

@property (assign) unsigned long long backtracer;                                //@synthesize backtracer=_backtracer - In the implementation block
@property (assign) BOOL assumeUserBinaryLoadInfosContainMainBinary;              //@synthesize assumeUserBinaryLoadInfosContainMainBinary=_assumeUserBinaryLoadInfosContainMainBinary - In the implementation block
@property (retain) NSArray * userBinaryLoadInfos;                                //@synthesize userBinaryLoadInfos=_userBinaryLoadInfos - In the implementation block
@property (retain) NSArray * kernelBinaryLoadInfos;                              //@synthesize kernelBinaryLoadInfos=_kernelBinaryLoadInfos - In the implementation block
@property (retain) SASharedCache * sharedCache;                                  //@synthesize sharedCache=_sharedCache - In the implementation block
@property (assign) BOOL isUserStackTruncated;                                    //@synthesize isUserStackTruncated=_isUserStackTruncated - In the implementation block
@property (assign) unsigned long long* userFrames;                               //@synthesize userFrames=_userFrames - In the implementation block
@property (assign) int numUserFrames;                                            //@synthesize numUserFrames=_numUserFrames - In the implementation block
@property (assign) unsigned long long* kernelFrames;                             //@synthesize kernelFrames=_kernelFrames - In the implementation block
@property (assign) int numKernelFrames;                                          //@synthesize numKernelFrames=_numKernelFrames - In the implementation block
@property (assign) unsigned long long continuation;                              //@synthesize continuation=_continuation - In the implementation block
@property (retain) NSMutableDictionary * addressTranslations;                    //@synthesize addressTranslations=_addressTranslations - In the implementation block
@property (assign) BOOL checkLR;                                                 //@synthesize checkLR=_checkLR - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)debugDescription;
-(SASharedCache *)sharedCache;
-(BOOL)checkLR;
-(void)dealloc;
-(unsigned long long)continuation;
-(void)iterateFrames:(/*^block*/id)arg1 ;
-(BOOL)hasUserStack;
-(BOOL)hasKernelStack;
-(void)clearThreadData;
-(void)exposeUserFramesOnly;
-(void)exposeKernelFramesOnly;
-(void)exposeAllFrames;
-(void)clearTaskData;
-(BOOL)hasStack;
-(unsigned long long)backtracer;
-(void)setBacktracer:(unsigned long long)arg1 ;
-(BOOL)assumeUserBinaryLoadInfosContainMainBinary;
-(void)setAssumeUserBinaryLoadInfosContainMainBinary:(BOOL)arg1 ;
-(NSArray *)userBinaryLoadInfos;
-(void)setUserBinaryLoadInfos:(NSArray *)arg1 ;
-(NSArray *)kernelBinaryLoadInfos;
-(void)setKernelBinaryLoadInfos:(NSArray *)arg1 ;
-(void)setSharedCache:(SASharedCache *)arg1 ;
-(BOOL)isUserStackTruncated;
-(void)setIsUserStackTruncated:(BOOL)arg1 ;
-(unsigned long long*)userFrames;
-(void)setUserFrames:(unsigned long long*)arg1 ;
-(int)numUserFrames;
-(void)setNumUserFrames:(int)arg1 ;
-(unsigned long long*)kernelFrames;
-(void)setKernelFrames:(unsigned long long*)arg1 ;
-(int)numKernelFrames;
-(void)setNumKernelFrames:(int)arg1 ;
-(void)setContinuation:(unsigned long long)arg1 ;
-(NSMutableDictionary *)addressTranslations;
-(void)setAddressTranslations:(NSMutableDictionary *)arg1 ;
-(void)setCheckLR:(BOOL)arg1 ;
@end

