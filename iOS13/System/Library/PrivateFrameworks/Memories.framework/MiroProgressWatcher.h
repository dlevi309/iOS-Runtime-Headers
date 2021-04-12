/*
* Generated on Monday, March 1, 2021 at 2:35:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/


@interface MiroProgressWatcher : NSObject {

	float _progress;
	/*^block*/id _progressHandler;
	id _observedObject;

}

@property (nonatomic,copy) id progressHandler;               //@synthesize progressHandler=_progressHandler - In the implementation block
@property (assign,nonatomic) float progress;                 //@synthesize progress=_progress - In the implementation block
@property (nonatomic,retain) id observedObject;              //@synthesize observedObject=_observedObject - In the implementation block
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(float)progress;
-(id)progressHandler;
-(void)setProgressHandler:(id)arg1 ;
-(void)setProgress:(float)arg1 ;
-(id)observedObject;
-(id)initWithObservedObject:(id)arg1 ;
-(void)setObservedObject:(id)arg1 ;
@end

