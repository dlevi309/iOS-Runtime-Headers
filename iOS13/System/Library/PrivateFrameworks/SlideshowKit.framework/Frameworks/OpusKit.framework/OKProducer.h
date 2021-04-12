/*
* Generated on Monday, March 1, 2021 at 2:35:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
*/


@protocol OKProducerDelegate;
@class OKProducerPlugin, OKPresentation, NSOperationQueue;

@interface OKProducer : NSObject {

	id<OKProducerDelegate> _delegate;
	OKProducerPlugin* _plugin;
	OKPresentation* _presentation;
	NSOperationQueue* _liveAuthoringOperationQueue;
	BOOL _liveAuthoringInProgress;
	double _startLiveAuthorTime;

}

@property (nonatomic,retain) OKProducerPlugin * plugin;                    //@synthesize plugin=_plugin - In the implementation block
@property (nonatomic,retain) OKPresentation * presentation;                //@synthesize presentation=_presentation - In the implementation block
@property (assign,nonatomic) id<OKProducerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(void)setupJavascriptContext:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id<OKProducerDelegate>)delegate;
-(void)setDelegate:(id<OKProducerDelegate>)arg1 ;
-(void)setPresentation:(OKPresentation *)arg1 ;
-(OKPresentation *)presentation;
-(OKProducerPlugin *)plugin;
-(void)setPlugin:(OKProducerPlugin *)arg1 ;
-(BOOL)supportsLiveAuthoring;
-(BOOL)author:(BOOL)arg1 progressBlock:(/*^block*/id)arg2 requiresProducer:(inout BOOL*)arg3 error:(id*)arg4 ;
-(BOOL)liveAuthorInitialBootstrap:(/*^block*/id)arg1 error:(id*)arg2 ;
-(id)initWithPresentation:(id)arg1 andPlugin:(id)arg2 ;
-(void)cancelLiveAuthoring:(BOOL)arg1 ;
-(BOOL)needsLiveAuthoring;
-(id)liveAuthorNextChunk:(/*^block*/id)arg1 error:(id*)arg2 ;
-(float)currentLiveAuthoringProgress;
-(unsigned long long)totalNumberOfLiveAuthoringItems;
-(float)liveAuthoringProgressForMediaItem:(id)arg1 ;
-(id)liveAuthoringOperationQueue;
-(double)_continueLiveAuthoringDelay;
-(void)_continueLiveAuthoring;
-(BOOL)migratePresentation:(/*^block*/id)arg1 error:(id*)arg2 ;
-(void)cleanupPresentation:(/*^block*/id)arg1 ;
-(void)updateSynopsisGuideline;
-(BOOL)prepareLiveAuthoringIfNeeded:(/*^block*/id)arg1 error:(id*)arg2 ;
-(void)startLiveAuthoringIfNeeded;
-(BOOL)resetLiveAuthoring;
-(void)setSettingsObject:(id)arg1 forKeyPath:(id)arg2 onWidget:(id)arg3 ;
-(void)addSettingsFromDictionary:(id)arg1 onWidget:(id)arg2 ;
-(void)didPanMediaForWidget:(id)arg1 toState:(id)arg2 ;
-(void)didChangeTextForWidget:(id)arg1 toSettings:(id)arg2 ;
@end

