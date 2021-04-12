/*
* Generated on Monday, March 1, 2021 at 2:33:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SXLayoutOperationFactory.h>

@protocol SXLayoutOperationFactory <NSObject>
@required
-(id)layoutOperationWithTask:(id)arg1 DOMObjectProvider:(id)arg2;

@end


@protocol SXComponentSizerEngine, SXLayoutBlueprintFactory, SXLayouterFactory, SXLayoutContextFactory, SXUnitConverterFactory;
@class NSString;

@interface SXLayoutOperationFactory : NSObject <SXLayoutOperationFactory> {

	id<SXComponentSizerEngine> _componentSizerEngine;
	id<SXLayoutBlueprintFactory> _layoutBlueprintFactory;
	id<SXLayouterFactory> _layouterFactory;
	id<SXLayoutContextFactory> _layoutContextFactory;
	id<SXUnitConverterFactory> _unitConverterFactory;

}

@property (nonatomic,readonly) id<SXComponentSizerEngine> componentSizerEngine;                  //@synthesize componentSizerEngine=_componentSizerEngine - In the implementation block
@property (nonatomic,readonly) id<SXLayoutBlueprintFactory> layoutBlueprintFactory;              //@synthesize layoutBlueprintFactory=_layoutBlueprintFactory - In the implementation block
@property (nonatomic,readonly) id<SXLayouterFactory> layouterFactory;                            //@synthesize layouterFactory=_layouterFactory - In the implementation block
@property (nonatomic,readonly) id<SXLayoutContextFactory> layoutContextFactory;                  //@synthesize layoutContextFactory=_layoutContextFactory - In the implementation block
@property (nonatomic,readonly) id<SXUnitConverterFactory> unitConverterFactory;                  //@synthesize unitConverterFactory=_unitConverterFactory - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SXUnitConverterFactory>)unitConverterFactory;
-(id<SXLayouterFactory>)layouterFactory;
-(id<SXLayoutContextFactory>)layoutContextFactory;
-(id)layoutOperationWithTask:(id)arg1 DOMObjectProvider:(id)arg2 ;
-(id)initWithComponentSizerEngine:(id)arg1 layoutBlueprintFactory:(id)arg2 layouterFactory:(id)arg3 layoutContextFactory:(id)arg4 unitConverterFactory:(id)arg5 ;
-(id<SXLayoutBlueprintFactory>)layoutBlueprintFactory;
-(id<SXComponentSizerEngine>)componentSizerEngine;
@end

