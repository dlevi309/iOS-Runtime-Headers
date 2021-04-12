/*
* Generated on Thursday, January 14, 2021 at 2:27:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(long long)repeatCount;
-(id)dictionaryRepresentation;
-(long long)setType;
-(unsigned long long)intervalCount;
-(id)intervalAtIndex:(unsigned long long)arg1 ;
-(id)initWithIntervalDefinitions:(id)arg1 repeatCount:(long long)arg2 setType:(long long)arg3 ;
-(id)byAddingIntervalDefinition:(id)arg1 ;
-(id)byInsertingIntervalDefinition:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(id)byReplacingIntervalDefinitionAtIndex:(unsigned long long)arg1 withIntervalDefinition:(id)arg2 ;
-(id)byRemovingIntervalDefinitionAtIndex:(unsigned long long)arg1 ;
-(NSArray *)intervalDefinitions;
-(id)byChangingRepeatCount:(long long)arg1 ;
-(id)byChangingSetType:(long long)arg1 ;
@end

