/*
* Generated on Monday, March 1, 2021 at 2:34:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
*/

#import <CoreData/NSManagedObject.h>

@class NSNumber, TDEffectParameterType, TDEffectComponent;

@interface TDEffectParameterValue : NSManagedObject

@property (nonatomic,retain) NSNumber * intValue; 
@property (nonatomic,retain) NSNumber * floatValue; 
@property (nonatomic,retain) NSNumber * colorValue; 
@property (nonatomic,retain) NSNumber * angleValue; 
@property (nonatomic,retain) TDEffectParameterType * parameterType; 
@property (nonatomic,retain) TDEffectComponent * component; 
@property (assign,nonatomic) unsigned long long redComponent; 
@property (assign,nonatomic) unsigned long long greenComponent; 
@property (assign,nonatomic) unsigned long long blueComponent; 
+(id)keyPathsForValuesAffectingColor;
+(id)keyPathsForValuesAffectingRedComponent;
+(id)keyPathsForValuesAffectingGreenComponent;
+(id)keyPathsForValuesAffectingBlueComponent;
-(unsigned long long)redComponent;
-(unsigned long long)greenComponent;
-(unsigned long long)blueComponent;
-(void)setRedComponent:(unsigned long long)arg1 ;
-(void)setGreenComponent:(unsigned long long)arg1 ;
-(void)setBlueComponent:(unsigned long long)arg1 ;
@end

