/*
* Generated on Thursday, January 14, 2021 at 2:27:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreChart.framework/CoreChart
*/

#import <CoreChart/CoreChart-Structs.h>
#import <UIKitCore/UIView.h>

@protocol CCChartViewDelegate;
@class CCVegaWorker, CCVegaWorkerClient, CCVegaRenderer, NSString, NSDictionary, NSArray, NSMutableSet, NSLocale, NSCalendar, NSLayoutConstraint, NSObject, UIAccessibilityElement;

@interface CCChartView : UIView {

	CCVegaWorker* _worker;
	CCVegaWorkerClient* _workerClient;
	CCVegaRenderer* _renderer;
	NSString* _baseConfigType;
	NSString* _rendererType;
	NSString* _config;
	NSDictionary* _configDictionary;
	NSString* _spec;
	NSDictionary* _specDictionary;
	double _zoomFactor;
	NSArray* _legacyData;
	NSMutableSet* _knownNamedDatasets;
	BOOL _preventGestures;
	BOOL _caUpdateFromBackground;
	NSLocale* _locale;
	NSCalendar* _calendar;
	BOOL _didCustomizeLocale;
	BOOL _didCustomizeCalendar;
	double _rendererWidth;
	double _rendererHeight;
	unsigned long long _translatesChartSizeIntoConstraints;
	NSLayoutConstraint* _widthConstraint;
	NSLayoutConstraint* _heightConstraint;
	NSObject*<CCChartViewDelegate> delegate;
	UIAccessibilityElement* _accessibilityDataSeriesElement;

}

@property (retain) NSString * config; 
@property (retain) NSDictionary * configDictionary; 
@property (retain) NSString * spec; 
@property (retain) NSDictionary * specDictionary; 
@property (assign,nonatomic) BOOL CATransactionFromBackgroundThread; 
@property (nonatomic,retain) NSString * rendererType; 
@property (nonatomic,retain) NSString * baseConfig; 
@property (nonatomic,retain) NSArray * data; 
@property (nonatomic,retain) NSLocale * locale; 
@property (nonatomic,retain) NSCalendar * calendar; 
@property (assign,nonatomic) double zoomFactor; 
@property (readonly) CGImageRef CGImage; 
@property (assign,nonatomic) double contentScaleFactor; 
@property (assign,nonatomic) unsigned long long translatesChartSizeIntoConstraints; 
@property (__weak) NSObject*<CCChartViewDelegate> delegate; 
@property (retain) NSArray * accessibilityDataSeriesElements; 
@property (retain) UIAccessibilityElement * accessibilityDataSeriesElement;                      //@synthesize accessibilityDataSeriesElement=_accessibilityDataSeriesElement - In the implementation block
+(void)cleanUp;
+(void)registerExpressionFunction:(/*^block*/id)arg1 withName:(id)arg2 ;
+(id)JSONStringFromDictionary:(id)arg1 ;
+(id)configForBaseConfigType:(id)arg1 ;
+(id)dictionaryFromJSONString:(id)arg1 ;
+(id)unwrapJSValue:(id)arg1 ;
+(id)compileSpec:(id)arg1 config:(id)arg2 baseConfig:(id)arg3 expressionFunctionNames:(id)arg4 error:(id*)arg5 ;
+(id)getBenchmarkRecords;
+(void)preloadFrameworkAssets;
+(id)compileSpecDictionary:(id)arg1 configDictionary:(id)arg2 baseConfig:(id)arg3 expressionFunctionNames:(id)arg4 error:(id*)arg5 ;
-(NSString *)config;
-(void)initialize;
-(id)initWithSpec:(id)arg1 ;
-(void)setSpec:(NSString *)arg1 ;
-(NSLocale *)locale;
-(id)imageNamed:(id)arg1 ;
-(void)setCalendar:(NSCalendar *)arg1 ;
-(void)render;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setLocale:(NSLocale *)arg1 ;
-(NSObject*<CCChartViewDelegate>)delegate;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(NSCalendar *)calendar;
-(id)accessibilityElements;
-(void)setContentScaleFactor:(double)arg1 ;
-(double)zoomFactor;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)setData:(NSArray *)arg1 ;
-(id)renderer;
-(NSString *)spec;
-(void)drawRect:(CGRect)arg1 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)setRenderer:(id)arg1 ;
-(id)colorNamed:(id)arg1 ;
-(void)setDelegate:(NSObject*<CCChartViewDelegate>)arg1 ;
-(void)setZoomFactor:(double)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(double)contentScaleFactor;
-(NSArray *)data;
-(void)setAccessibilityElements:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)accessibilityContainerType;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)setConfig:(NSString *)arg1 ;
-(NSDictionary *)configDictionary;
-(void)traitCollectionDidChange:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(CGImageRef)CGImage;
-(void)dealloc;
-(void)setConfigDictionary:(NSDictionary *)arg1 ;
-(NSString *)rendererType;
-(void)registerExpressionFunction:(/*^block*/id)arg1 withName:(id)arg2 ;
-(id)initWithSpec:(id)arg1 config:(id)arg2 ;
-(id)initWithSpec:(id)arg1 config:(id)arg2 options:(id)arg3 ;
-(void)setRendererType:(NSString *)arg1 ;
-(void)setBaseConfig:(NSString *)arg1 ;
-(void)setCATransactionFromBackgroundThread:(BOOL)arg1 ;
-(void)refreshLocaleAndCalendar;
-(void)mouseHoverGestureRecognized:(id)arg1 ;
-(NSString *)baseConfig;
-(void)lazilyInitializeRenderer;
-(void)setupWithSpec:(id)arg1 options:(id)arg2 ;
-(void)reinitializeRenderer;
-(id)loadChartDataFromURL:(id)arg1 error:(id*)arg2 ;
-(void)changeConstraints;
-(UIAccessibilityElement *)accessibilityDataSeriesElement;
-(id)dynamicColorNamed:(id)arg1 ;
-(id)localizedStringNamed:(id)arg1 ;
-(void)triggerMouseEvent:(id)arg1 type:(id)arg2 setConsumed:(BOOL)arg3 ;
-(id)eventToMouseEvent:(id)arg1 ;
-(void)triggerMouseEvent:(id)arg1 type:(id)arg2 ;
-(void)setSpecDictionary:(NSDictionary *)arg1 ;
-(void)setDefaultDataset:(id)arg1 ;
-(void)setNamedDataset:(id)arg1 rows:(id)arg2 ;
-(void)changeDefaultDatasetByInserting:(id)arg1 removingIDs:(id)arg2 ;
-(void)changeNamedDataset:(id)arg1 inserting:(id)arg2 removingIDs:(id)arg3 ;
-(id)getSignalWithName:(id)arg1 ;
-(void)setSignalWithName:(id)arg1 toValue:(id)arg2 ;
-(id)addListener:(/*^block*/id)arg1 toSignalWithName:(id)arg2 ;
-(void)removeListener:(id)arg1 fromSignalWithName:(id)arg2 ;
-(void)setAccessibilityDataSeriesElement:(UIAccessibilityElement *)arg1 ;
-(void)setupWithSpec:(id)arg1 ;
-(void)setupWithSpecDictionary:(id)arg1 ;
-(void)setupWithSpecDictionary:(id)arg1 options:(id)arg2 ;
-(BOOL)CATransactionFromBackgroundThread;
-(void)rendererDidUpdate;
-(NSDictionary *)specDictionary;
-(void)setSpec:(id)arg1 config:(id)arg2 ;
-(void)setSpec:(id)arg1 config:(id)arg2 baseConfig:(id)arg3 ;
-(void)setSpec:(id)arg1 config:(id)arg2 baseConfig:(id)arg3 rendererType:(id)arg4 ;
-(void)setSpecDictionary:(id)arg1 configDictionary:(id)arg2 ;
-(void)setSpecDictionary:(id)arg1 configDictionary:(id)arg2 baseConfig:(id)arg3 ;
-(void)setSpecDictionary:(id)arg1 configDictionary:(id)arg2 baseConfig:(id)arg3 rendererType:(id)arg4 ;
-(unsigned long long)translatesChartSizeIntoConstraints;
-(void)setTranslatesChartSizeIntoConstraints:(unsigned long long)arg1 ;
-(id)renderToImageWithType:(unsigned long long)arg1 ;
-(void)registerLocalExpressionFunction:(/*^block*/id)arg1 withName:(id)arg2 ;
-(void)setAccessibilityDataSeriesElements:(NSArray *)arg1 ;
-(NSArray *)accessibilityDataSeriesElements;
@end

