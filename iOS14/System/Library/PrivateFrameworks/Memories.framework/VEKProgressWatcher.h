/*
* Generated on Thursday, January 14, 2021 at 2:27:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/


@class VEKProgress;

@interface VEKProgressWatcher : NSObject {

	BOOL _progressIncludesDownload;
	/*^block*/id _progressHandler;
	VEKProgress* _progress;
	id _observedObject;

}

@property (assign,nonatomic) BOOL progressIncludesDownload;              //@synthesize progressIncludesDownload=_progressIncludesDownload - In the implementation block
@property (nonatomic,copy) id progressHandler;                           //@synthesize progressHandler=_progressHandler - In the implementation block
@property (nonatomic,retain) VEKProgress * progress;                     //@synthesize progress=_progress - In the implementation block
@property (assign,nonatomic,__weak) id observedObject;                   //@synthesize observedObject=_observedObject - In the implementation block
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(VEKProgress *)progress;
-(id)observedObject;
-(void)setProgressHandler:(id)arg1 ;
-(void)setProgress:(VEKProgress *)arg1 ;
-(id)progressHandler;
-(void)dealloc;
-(id)initWithObservedObject:(id)arg1 ;
-(void)setObservedObject:(id)arg1 ;
-(void)setProgressIncludesDownload:(BOOL)arg1 ;
-(BOOL)progressIncludesDownload;
@end

