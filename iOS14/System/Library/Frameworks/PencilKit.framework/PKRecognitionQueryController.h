/*
* Generated on Thursday, January 14, 2021 at 2:24:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/


@class NSMutableDictionary, PKRecognitionSessionManager;

@interface PKRecognitionQueryController : NSObject {

	NSMutableDictionary* _drawingQueries;
	NSMutableDictionary* _visibleStrokeQueries;
	NSMutableDictionary* _queriesToCreate;
	PKRecognitionSessionManager* _recognitionManager;

}

@property (retain) NSMutableDictionary * drawingQueries;                                           //@synthesize drawingQueries=_drawingQueries - In the implementation block
@property (retain) NSMutableDictionary * visibleStrokeQueries;                                     //@synthesize visibleStrokeQueries=_visibleStrokeQueries - In the implementation block
@property (retain) NSMutableDictionary * queriesToCreate;                                          //@synthesize queriesToCreate=_queriesToCreate - In the implementation block
@property (assign,nonatomic,__weak) PKRecognitionSessionManager * recognitionManager;              //@synthesize recognitionManager=_recognitionManager - In the implementation block
-(id)initWithRecognitionSessionManager:(id)arg1 ;
-(PKRecognitionSessionManager *)recognitionManager;
-(void)setRecognitionManager:(PKRecognitionSessionManager *)arg1 ;
-(void)_cleanupQuery:(id)arg1 ;
-(id)setupAndStartQuery:(Class)arg1 ;
-(void)flushAllQueries;
-(void)clearVisibleStrokesQueries;
-(void)clearDrawingQueries;
-(void)addQueryOfType:(Class)arg1 withIdentifier:(id)arg2 ;
-(void)removeQueryWithIdentifier:(id)arg1 ;
-(id)visibleStrokesQueryWithIdentifier:(id)arg1 ;
-(id)drawingQueryWithIdentifier:(id)arg1 ;
-(void)updateQueriesIfNecessaryWithState:(long long)arg1 ;
-(void)setupVisibleStrokesQueries;
-(void)setupDrawingQueriesIfNecessary;
-(NSMutableDictionary *)drawingQueries;
-(void)setDrawingQueries:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)visibleStrokeQueries;
-(void)setVisibleStrokeQueries:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)queriesToCreate;
-(void)setQueriesToCreate:(NSMutableDictionary *)arg1 ;
@end

