/*
* Generated on Thursday, January 14, 2021 at 2:24:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/Silex-Structs.h>
#import <libobjc.A.dylib/SXLayouter.h>

@protocol SXLayouterDelegate, SXLayoutContextFactory, SXUnitConverterFactory;
@class SXLayouterFactory, NSMutableDictionary, NSString;

@interface SXColumnLayouter : NSObject <SXLayouter> {

	id<SXLayouterDelegate> _delegate;
	SXLayouterFactory* _layouterFactory;
	NSMutableDictionary* _intersectionCache;
	id<SXLayoutContextFactory> _layoutContextFactory;
	id<SXUnitConverterFactory> _unitConverterFactory;

}

@property (nonatomic,readonly) SXLayouterFactory * layouterFactory;                          //@synthesize layouterFactory=_layouterFactory - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * intersectionCache;                      //@synthesize intersectionCache=_intersectionCache - In the implementation block
@property (nonatomic,readonly) id<SXLayoutContextFactory> layoutContextFactory;              //@synthesize layoutContextFactory=_layoutContextFactory - In the implementation block
@property (nonatomic,readonly) id<SXUnitConverterFactory> unitConverterFactory;              //@synthesize unitConverterFactory=_unitConverterFactory - In the implementation block
@property (assign,nonatomic,__weak) id<SXLayouterDelegate> delegate;                         //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SXUnitConverterFactory>)unitConverterFactory;
-(id<SXLayouterDelegate>)delegate;
-(void)setDelegate:(id<SXLayouterDelegate>)arg1 ;
-(SXLayouterFactory *)layouterFactory;
-(id<SXLayoutContextFactory>)layoutContextFactory;
-(id)columnStackForLayoutBlueprint:(id)arg1 columnLayout:(id)arg2 ;
-(void)createDependenciesForLayoutBlueprint:(id)arg1 columnStack:(id)arg2 inDependencyResolver:(id)arg3 ;
-(CGPoint)calculatePositionForComponentNode:(id)arg1 columnLayout:(id)arg2 layoutBlueprint:(id)arg3 ;
-(CGSize)calculateSizeForComponentNode:(id)arg1 columnLayout:(id)arg2 layoutBlueprint:(id)arg3 dependencyResolver:(id)arg4 ;
-(void)layoutBlueprint:(id)arg1 columnLayout:(id)arg2 description:(id)arg3 shouldContinue:(BOOL*)arg4 ;
-(void)analyzeSnapLinesForLayoutBlueprint:(id)arg1 ;
-(BOOL)intersectionPossibleForComponentWithBlueprint:(id)arg1 anchoredToComponentWithBlueprint:(id)arg2 layoutBlueprint:(id)arg3 columnStack:(id)arg4 ;
-(BOOL)componentBlueprint:(id)arg1 shouldIntersectWithComponentBlueprint:(id)arg2 ;
-(id)findComponentStackBeforeComponent:(id)arg1 inColumnStack:(id)arg2 ;
-(int)layoutAttributeForAnchor:(long long)arg1 ;
-(BOOL)anchorPossibleForComponentWithBlueprint:(id)arg1 anchoredToComponentWithBlueprint:(id)arg2 layoutBlueprint:(id)arg3 columnStack:(id)arg4 ;
-(double)factorForLayoutAttribute:(int)arg1 ;
-(id)sortComponentDependencies:(id)arg1 forBlueprint:(id)arg2 ;
-(BOOL)stack:(id)arg1 stackComponents:(id)arg2 containsComponentIncludingAnchoredComponents:(id)arg3 forSourceComponent:(id)arg4 ;
-(id)initWithLayouterFactory:(id)arg1 layoutContextFactory:(id)arg2 unitConverterFactory:(id)arg3 ;
-(NSMutableDictionary *)intersectionCache;
@end
