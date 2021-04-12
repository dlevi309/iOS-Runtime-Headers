/*
* Generated on Monday, March 1, 2021 at 2:33:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/Silex-Structs.h>
#import <libobjc.A.dylib/SXLayoutProcessor.h>

@protocol SXUnitConverterFactory;
@class NSString;

@interface SXLayoutFinalizationProcessor : NSObject <SXLayoutProcessor> {

	id<SXUnitConverterFactory> _unitConverterFactory;

}

@property (nonatomic,readonly) id<SXUnitConverterFactory> unitConverterFactory;              //@synthesize unitConverterFactory=_unitConverterFactory - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)processLayoutTask:(id)arg1 layoutBlueprint:(id)arg2 DOMObjectProvider:(id)arg3 ;
-(id<SXUnitConverterFactory>)unitConverterFactory;
-(void)finalizeLayoutBlueprint:(id)arg1 origin:(CGPoint)arg2 absoluteOrigin:(CGPoint)arg3 ;
-(id)initWithUnitConverterFactory:(id)arg1 ;
@end

