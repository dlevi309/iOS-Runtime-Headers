/*
* Generated on Monday, March 1, 2021 at 2:30:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
*/


@class NSProgress;

@interface MyProgressReporter : NSObject {

	NSProgress* _progress;
	BOOL _receivedProgressUpdate;

}

@property (nonatomic,retain) NSProgress * progress;                    //@synthesize progress=_progress - In the implementation block
@property (assign,nonatomic) BOOL receivedProgressUpdate;              //@synthesize receivedProgressUpdate=_receivedProgressUpdate - In the implementation block
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NSProgress *)progress;
-(void)startObserving;
-(void)stopObserving;
-(void)setProgress:(NSProgress *)arg1 ;
-(BOOL)receivedProgressUpdate;
-(void)setReceivedProgressUpdate:(BOOL)arg1 ;
@end

