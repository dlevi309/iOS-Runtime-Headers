/*
* Generated on Thursday, January 14, 2021 at 2:24:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SXLayouter.h>

@protocol SXLayouterDelegate, SXColumnCalculator, SXUnitConverterFactory;
@class SXLayouterFactory, SXContainerComponentBlueprint, NSString;

@interface SXCollectionLayouter : NSObject <SXLayouter> {

	id<SXLayouterDelegate> _delegate;
	SXLayouterFactory* _layouterFactory;
	SXContainerComponentBlueprint* _containerComponentBlueprint;
	id<SXColumnCalculator> _columnCalculator;
	id<SXUnitConverterFactory> _unitConverterFactory;

}

@property (nonatomic,readonly) SXLayouterFactory * layouterFactory;                                      //@synthesize layouterFactory=_layouterFactory - In the implementation block
@property (nonatomic,readonly) SXContainerComponentBlueprint * containerComponentBlueprint;              //@synthesize containerComponentBlueprint=_containerComponentBlueprint - In the implementation block
@property (nonatomic,readonly) id<SXColumnCalculator> columnCalculator;                                  //@synthesize columnCalculator=_columnCalculator - In the implementation block
@property (nonatomic,readonly) id<SXUnitConverterFactory> unitConverterFactory;                          //@synthesize unitConverterFactory=_unitConverterFactory - In the implementation block
@property (assign,nonatomic,__weak) id<SXLayouterDelegate> delegate;                                     //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SXUnitConverterFactory>)unitConverterFactory;
-(id<SXLayouterDelegate>)delegate;
-(id<SXColumnCalculator>)columnCalculator;
-(void)setDelegate:(id<SXLayouterDelegate>)arg1 ;
-(SXLayouterFactory *)layouterFactory;
-(void)layoutBlueprint:(id)arg1 columnLayout:(id)arg2 description:(id)arg3 shouldContinue:(BOOL*)arg4 ;
-(SXContainerComponentBlueprint *)containerComponentBlueprint;
-(id)childColumnLayoutForRowLayout:(id)arg1 display:(id)arg2 collectionContainerBlueprint:(id)arg3 childContainerComponentBlueprint:(id)arg4 documentColumnLayout:(id)arg5 unitConverter:(id)arg6 ;
-(id)initWithContainerComponent:(id)arg1 layouterFactory:(id)arg2 columnCalculator:(id)arg3 unitConverterFactory:(id)arg4 ;
@end

