/*
* Generated on Thursday, January 14, 2021 at 2:27:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreChart.framework/CoreChart
*/

#import <CoreChart/CoreChart-Structs.h>
#import <libobjc.A.dylib/CCAsyncQueueDelegate.h>
#import <libobjc.A.dylib/CCVegaWorkerClientDelegate.h>

@protocol CCVegaRendererDelegate;
@class NSLocale, NSCalendar, CCVegaExpressionFunctions, NSMutableSet, CALayer, NSArray, UITraitCollection, CCVegaWorker, CCVegaWorkerClient, NSString, CCVegaHTMLElement, CCVegaCARenderer, CCViewRendererDelegate, CCAsyncQueue, JSValue, NSObject;

@interface CCVegaRenderer : NSObject <CCAsyncQueueDelegate, CCVegaWorkerClientDelegate> {

	NSLocale* _locale;
	NSCalendar* _calendar;
	CCVegaExpressionFunctions* _builtinExpressionFunctions;
	double _width;
	double _height;
	CGImageRef _currentCGImage;
	double _currentCGImageScaleFactor;
	BOOL _needsUpdateFromMainThread;
	NSMutableSet* _pendingDataUpdates;
	double _internalScaleFactor;
	double _internalZoomFactor;
	CALayer* _caLayer;
	NSArray* _data;
	BOOL _isActive;
	double _scaleFactor;
	double _zoomFactor;
	UITraitCollection* _traitCollection;
	unsigned rendererType;
	CCVegaWorker* worker;
	CCVegaWorkerClient* workerClient;
	NSString* spec;
	NSString* config;
	CCVegaHTMLElement* container;
	CCVegaCARenderer* CARenderer;
	CCViewRendererDelegate* viewDelegate;
	CCAsyncQueue* asyncQueue;
	JSValue* renderer;
	NSObject*<CCVegaRendererDelegate> delegate;
	CGImageRef currentCGImage;

}

@property (nonatomic,retain) NSString * spec; 
@property (nonatomic,retain) NSString * config; 
@property (nonatomic,retain) CCVegaHTMLElement * container; 
@property (nonatomic,retain) JSValue * renderer; 
@property (retain) CCVegaCARenderer * CARenderer; 
@property (retain) CCViewRendererDelegate * viewDelegate; 
@property (nonatomic,retain) CCAsyncQueue * asyncQueue; 
@property (assign) CGImageRef currentCGImage; 
@property (retain) CCVegaWorker * worker; 
@property (retain) CCVegaWorkerClient * workerClient; 
@property (nonatomic,retain) NSArray * data; 
@property (assign) double scaleFactor; 
@property (assign) double zoomFactor; 
@property (assign) unsigned rendererType; 
@property (retain) CALayer * caLayer; 
@property (__weak) NSObject*<CCVegaRendererDelegate> delegate; 
@property (readonly) BOOL specIsValid; 
@property (assign) BOOL isActive; 
@property (retain) NSLocale * locale; 
@property (retain) NSCalendar * calendar; 
@property (retain) UITraitCollection * traitCollection; 
-(NSString *)config;
-(void)setScaleFactor:(double)arg1 ;
-(void)setSpec:(NSString *)arg1 ;
-(UITraitCollection *)traitCollection;
-(double)scaleFactor;
-(NSLocale *)locale;
-(CCVegaWorker *)worker;
-(double)width;
-(void)setCalendar:(NSCalendar *)arg1 ;
-(void)setTraitCollection:(UITraitCollection *)arg1 ;
-(void)setLocale:(NSLocale *)arg1 ;
-(NSObject*<CCVegaRendererDelegate>)delegate;
-(NSCalendar *)calendar;
-(BOOL)isActive;
-(id)accessibilityElements;
-(void)setSize:(CGSize)arg1 ;
-(double)height;
-(double)zoomFactor;
-(void)setData:(NSArray *)arg1 ;
-(void)setContainer:(CCVegaHTMLElement *)arg1 ;
-(JSValue *)renderer;
-(NSString *)spec;
-(void)setRenderer:(JSValue *)arg1 ;
-(void)setDelegate:(NSObject*<CCVegaRendererDelegate>)arg1 ;
-(void)setZoomFactor:(double)arg1 ;
-(CALayer *)caLayer;
-(NSArray *)data;
-(CCViewRendererDelegate *)viewDelegate;
-(id)cursor;
-(void)setIsActive:(BOOL)arg1 ;
-(void)setConfig:(NSString *)arg1 ;
-(void)setViewDelegate:(CCViewRendererDelegate *)arg1 ;
-(CCVegaHTMLElement *)container;
-(void)dealloc;
-(void)loadState:(id)arg1 ;
-(void)setCaLayer:(CALayer *)arg1 ;
-(void)setWorker:(CCVegaWorker *)arg1 ;
-(unsigned)rendererType;
-(CCAsyncQueue *)asyncQueue;
-(CGImageRef)currentBitmap;
-(void)displayWithCommitter:(id)arg1 ;
-(CGColorRef)newColorFromCSSString:(id)arg1 alpha:(double)arg2 ;
-(CGColorRef)newColorFromCSSString:(id)arg1 ;
-(id)fontOptions;
-(void)workerContextEnter;
-(void)workerContextExit;
-(void)workerDidExecuteTimerCallback;
-(CGImageRef)newImageFromURL:(id)arg1 ;
-(void)setRendererType:(unsigned)arg1 ;
-(void)setLocale:(id)arg1 calendar:(id)arg2 shouldRefresh:(BOOL)arg3 ;
-(double)currentBitmapScaleFactor;
-(void)rerender;
-(void)refreshNativeSignals;
-(void)rerenderEntireChart;
-(id)initWithSpec:(id)arg1 config:(id)arg2 options:(id)arg3 workerClient:(id)arg4 ;
-(id)saveStateWithNamedDatasets:(id)arg1 ;
-(void)triggerEventWithType:(id)arg1 event:(id)arg2 waitForEventHandling:(BOOL)arg3 ;
-(void)setDefaultDataset:(id)arg1 ;
-(void)setNamedDataset:(id)arg1 rows:(id)arg2 ;
-(void)changeDefaultDatasetByInserting:(id)arg1 removingIDs:(id)arg2 ;
-(void)changeNamedDataset:(id)arg1 inserting:(id)arg2 removingIDs:(id)arg3 ;
-(CGImageRef)renderToCGImage;
-(id)newDataWithPDFImage;
-(id)getSignalWithName:(id)arg1 ;
-(void)setSignalWithName:(id)arg1 toValue:(id)arg2 ;
-(id)addListener:(/*^block*/id)arg1 toSignalWithName:(id)arg2 ;
-(void)removeListener:(id)arg1 fromSignalWithName:(id)arg2 ;
-(void)simplifyQueue:(id)arg1 ;
-(CCVegaWorkerClient *)workerClient;
-(void)updateNativeView;
-(void)setWorkerClient:(CCVegaWorkerClient *)arg1 ;
-(void)setAsyncQueue:(CCAsyncQueue *)arg1 ;
-(void)setCARenderer:(CCVegaCARenderer *)arg1 ;
-(CCVegaCARenderer *)CARenderer;
-(void)setupSignalHandlers;
-(void)setupScreenSignal;
-(void)runAsyncWithCallback:(/*^block*/id)arg1 ;
-(void)_doUpdateInMainThread;
-(id)vegaContext;
-(void)scheduleDisplay;
-(void)refreshNativeSignalsRerunDataflow:(BOOL)arg1 ;
-(void)updateInMainThreadIfNeeded;
-(void)setCurrentCGImage:(CGImageRef)arg1 ;
-(void)clearPendingDataUpdates;
-(void)updateScaleFactor:(double)arg1 zoomFactor:(double)arg2 ;
-(CGImageRef)currentCGImage;
-(void)enqueueRunAsync;
-(void)changeNamedDataset:(id)arg1 inserting:(id)arg2 removingWithCallback:(/*^block*/id)arg3 ;
-(BOOL)specIsValid;
-(void)runAsync;
-(void)addPendingDataUpdate:(id)arg1 ;
-(BOOL)hasPendingDataUpdate:(id)arg1 ;
@end

