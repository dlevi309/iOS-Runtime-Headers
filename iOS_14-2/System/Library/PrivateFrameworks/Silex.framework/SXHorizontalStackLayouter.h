/*
* Generated on Thursday, January 14, 2021 at 2:24:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SXLayouter.h>

@protocol SXLayouterDelegate, SXColumnCalculator, SXLayoutContextFactory, SXUnitConverterFactory;
@class SXContainerComponentBlueprint, SXLayouterFactory, NSString;

@interface SXHorizontalStackLayouter : NSObject <SXLayouter> {

	id<SXLayouterDelegate> delegate;
	SXContainerComponentBlueprint* _containerComponentBlueprint;
	SXLayouterFactory* _layouterFactory;
	id<SXColumnCalculator> _columnCalculator;
	id<SXLayoutContextFactory> _layoutContextFactory;
	id<SXUnitConverterFactory> _unitConverterFactory;

}

@property (assign,nonatomic,__weak) id<SXLayouterDelegate> delegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SXLayouterDelegate>)delegate;
-(void)setDelegate:(id<SXLayouterDelegate>)arg1 ;
-(void)layoutBlueprint:(id)arg1 columnLayout:(id)arg2 description:(id)arg3 shouldContinue:(BOOL*)arg4 ;
@end

