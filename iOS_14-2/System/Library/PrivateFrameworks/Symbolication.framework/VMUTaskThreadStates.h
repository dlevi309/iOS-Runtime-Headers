/*
* Generated on Thursday, January 14, 2021 at 2:23:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
*/


@interface VMUTaskThreadStates : NSObject {

	unsigned _threadCount;
	unsigned _threadStateSize;
	void* _threadStates;
	unsigned long long* _stackPointers;

}

@property (nonatomic,readonly) unsigned threadCount;                  //@synthesize threadCount=_threadCount - In the implementation block
@property (nonatomic,readonly) unsigned threadStateSize;              //@synthesize threadStateSize=_threadStateSize - In the implementation block
-(id)initWithPid:(int)arg1 task:(unsigned)arg2 ;
-(unsigned)threadCount;
-(unsigned long long)stackPointerForThreadNum:(unsigned)arg1 ;
-(void*)threadStateForThreadNum:(unsigned)arg1 ;
-(unsigned)threadStateSize;
-(void)dealloc;
@end

