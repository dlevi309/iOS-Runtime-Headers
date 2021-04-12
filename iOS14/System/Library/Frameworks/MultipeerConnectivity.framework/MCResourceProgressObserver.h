/*
* Generated on Thursday, January 14, 2021 at 2:26:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NSProgress *)progress;
-(id)cancelHandler;
-(NSString *)name;
-(void)setProgress:(NSProgress *)arg1 ;
-(void)setCancelHandler:(id)arg1 ;
-(void)invalidate;
-(void)setName:(NSString *)arg1 ;
-(void)dealloc;
-(id)initWithName:(id)arg1 progress:(id)arg2 cancelHandler:(/*^block*/id)arg3 ;
@end

