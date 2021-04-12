/*
* Generated on Monday, March 1, 2021 at 2:34:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MultipeerConnectivity.framework/MultipeerConnectivity
*/


@class NSString, NSProgress;

@interface MCResourceProgressObserver : NSObject {

	BOOL _progressObserversSet;
	NSString* _name;
	NSProgress* _progress;
	/*^block*/id _cancelHandler;

}

@property (nonatomic,copy) NSString * name;                      //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSProgress * progress;              //@synthesize progress=_progress - In the implementation block
@property (nonatomic,copy) id cancelHandler;                     //@synthesize cancelHandler=_cancelHandler - In the implementation block
-(void)dealloc;
-(NSString *)name;
-(void)invalidate;
-(void)setName:(NSString *)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NSProgress *)progress;
-(id)cancelHandler;
-(void)setCancelHandler:(id)arg1 ;
-(void)setProgress:(NSProgress *)arg1 ;
-(id)initWithName:(id)arg1 progress:(id)arg2 cancelHandler:(/*^block*/id)arg3 ;
@end

