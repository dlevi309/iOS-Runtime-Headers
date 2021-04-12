/*
* Generated on Monday, March 1, 2021 at 2:34:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Fitness.framework/Fitness
*/

#import <libobjc.A.dylib/FIDictionaryRepresentable.h>

@class NSArray;

@interface FIIntervalSetDefinition : NSObject <FIDictionaryRepresentable> {

	NSArray* _intervalDefinitions;
	long long _repeatCount;
	long long _setType;

}

@property (nonatomic,readonly) NSArray * intervalDefinitions;                 //@synthesize intervalDefinitions=_intervalDefinitions - In the implementation block
@property (nonatomic,readonly) long long repeatCount;                         //@synthesize repeatCount=_repeatCount - In the implementation block
@property (nonatomic,readonly) long long setType;                             //@synthesize setType=_setType - In the implementation block
@property (nonatomic,readonly) unsigned long long intervalCount; 
+(id)definitionFromDictionary:(id)arg1 error:(id*)arg2 ;
-(id)dictionaryRepresentation;
-(long long)repeatCount;
-(unsigned long long)intervalCount;
-(id)intervalAtIndex:(unsigned long long)arg1 ;
-(id)initWithIntervalDefinitions:(id)arg1 repeatCount:(long long)arg2 setType:(long long)arg3 ;
-(id)byAddingIntervalDefinition:(id)arg1 ;
-(id)byInsertingIntervalDefinition:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(id)byReplacingIntervalDefinitionAtIndex:(unsigned long long)arg1 withIntervalDefinition:(id)arg2 ;
-(id)byRemovingIntervalDefinitionAtIndex:(unsigned long long)arg1 ;
-(NSArray *)intervalDefinitions;
-(long long)setType;
-(id)byChangingRepeatCount:(long long)arg1 ;
-(id)byChangingSetType:(long long)arg1 ;
@end
