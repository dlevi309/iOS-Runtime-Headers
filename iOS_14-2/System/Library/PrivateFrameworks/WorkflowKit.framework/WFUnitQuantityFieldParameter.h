/*
* Generated on Thursday, January 14, 2021 at 2:26:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WFQuantityFieldParameter.h>

@class NSArray, NSString, NSUnit, NSDictionary;

@interface WFUnitQuantityFieldParameter : WFQuantityFieldParameter {

	BOOL _fallbackToAllSupportedUnits;
	NSArray* _possibleUnits;
	NSString* _unitType;
	NSUnit* _defaultUnit;
	NSDictionary* _unitSymbolMap;

}

@property (nonatomic,retain) NSDictionary * unitSymbolMap;                  //@synthesize unitSymbolMap=_unitSymbolMap - In the implementation block
@property (nonatomic,copy) NSString * unitType;                             //@synthesize unitType=_unitType - In the implementation block
@property (nonatomic,retain) NSUnit * defaultUnit;                          //@synthesize defaultUnit=_defaultUnit - In the implementation block
@property (assign,nonatomic) BOOL fallbackToAllSupportedUnits;              //@synthesize fallbackToAllSupportedUnits=_fallbackToAllSupportedUnits - In the implementation block
-(void)setUnitType:(NSString *)arg1 ;
-(void)setDefaultUnit:(NSUnit *)arg1 ;
-(NSString *)unitType;
-(NSUnit *)defaultUnit;
-(id)initWithDefinition:(id)arg1 ;
-(BOOL)parameterStateIsValid:(id)arg1 ;
-(id)defaultSerializedRepresentation;
-(void)setPossibleUnits:(id)arg1 ;
-(id)localizedLabelForPossibleUnit:(id)arg1 magnitude:(id)arg2 style:(unsigned long long)arg3 ;
-(id)possibleUnits;
-(void)setFallbackToAllSupportedUnits:(BOOL)arg1 ;
-(id)availableUnitForStringValue:(id)arg1 ;
-(void)updatePossibleUnits;
-(BOOL)fallbackToAllSupportedUnits;
-(NSDictionary *)unitSymbolMap;
-(void)setUnitSymbolMap:(NSDictionary *)arg1 ;
@end

