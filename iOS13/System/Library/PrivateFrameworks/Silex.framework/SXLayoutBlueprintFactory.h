/*
* Generated on Monday, March 1, 2021 at 2:33:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SXLayoutBlueprintFactory.h>

@protocol SXLayoutBlueprintFactory <NSObject>
@required
-(id)createLayoutBlueprintWithLayoutOptions:(id)arg1;

@end


@protocol SXComponentBlueprintFactory, SXUnitConverterFactory;
@class NSString;

@interface SXLayoutBlueprintFactory : NSObject <SXLayoutBlueprintFactory> {

	id<SXComponentBlueprintFactory> _componentBlueprintFactory;
	id<SXUnitConverterFactory> _unitConverterFactory;

}

@property (nonatomic,readonly) id<SXComponentBlueprintFactory> componentBlueprintFactory;              //@synthesize componentBlueprintFactory=_componentBlueprintFactory - In the implementation block
@property (nonatomic,readonly) id<SXUnitConverterFactory> unitConverterFactory;                        //@synthesize unitConverterFactory=_unitConverterFactory - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SXUnitConverterFactory>)unitConverterFactory;
-(id)createLayoutBlueprintWithLayoutOptions:(id)arg1 ;
-(id)initWithComponentBlueprintFactory:(id)arg1 unitConverterFactory:(id)arg2 ;
-(id<SXComponentBlueprintFactory>)componentBlueprintFactory;
@end

