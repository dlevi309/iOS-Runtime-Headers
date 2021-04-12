/*
* Generated on Thursday, January 14, 2021 at 2:27:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(float)progress;
-(id)observedObject;
-(void)setProgressHandler:(id)arg1 ;
-(void)setProgress:(float)arg1 ;
-(id)progressHandler;
-(void)dealloc;
-(id)initWithObservedObject:(id)arg1 ;
-(void)setObservedObject:(id)arg1 ;
@end

