/*
* Generated on Monday, March 1, 2021 at 2:33:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SXLayouterFactory.h>

@protocol SXLayouterFactory <NSObject>
@required
-(id)layouterForContainerComponentBlueprint:(id)arg1 delegate:(id)arg2;

@end


@protocol SXColumnCalculator, SXLayoutContextFactory, SXUnitConverterFactory;
@class NSString;

@interface SXLayouterFactory : NSObject <SXLayouterFactory> {

	id<SXColumnCalculator> _columnCalculator;
	id<SXLayoutContextFactory> _layoutContextFactory;
	id<SXUnitConverterFactory> _unitConverterFactory;

}

@property (nonatomic,readonly) id<SXColumnCalculator> columnCalculator;                      //@synthesize columnCalculator=_columnCalculator - In the implementation block
@property (nonatomic,readonly) id<SXLayoutContextFactory> layoutContextFactory;              //@synthesize layoutContextFactory=_layoutContextFactory - In the implementation block
@property (nonatomic,readonly) id<SXUnitConverterFactory> unitConverterFactory;              //@synthesize unitConverterFactory=_unitConverterFactory - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SXUnitConverterFactory>)unitConverterFactory;
-(id)layouterForContainerComponentBlueprint:(id)arg1 delegate:(id)arg2 ;
-(id<SXLayoutContextFactory>)layoutContextFactory;
-(id<SXColumnCalculator>)columnCalculator;
-(id)initWithColumnCalculator:(id)arg1 layoutContextFactory:(id)arg2 unitConverterFactory:(id)arg3 ;
-(id)createColumnLayouterWithDelegate:(id)arg1 ;
@end

