/*
* Generated on Monday, March 1, 2021 at 2:34:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Fitness.framework/Fitness
*/

#import <libobjc.A.dylib/FIDictionaryRepresentable.h>

@class NSString, NSUUID, NSArray;

@interface FIIntervalWorkoutDefinition : NSObject <FIDictionaryRepresentable> {

	NSString* _name;
	NSUUID* _identifier;
	NSArray* _sets;

}

@property (nonatomic,readonly) NSString * name;                               //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSUUID * identifier;                           //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSArray * sets;                                //@synthesize sets=_sets - In the implementation block
@property (nonatomic,readonly) unsigned long long intervalCount; 
+(id)definitionFromDictionary:(id)arg1 error:(id*)arg2 ;
+(id)intervalWorkoutDefinition;
-(NSString *)name;
-(NSUUID *)identifier;
-(id)dictionaryRepresentation;
-(unsigned long long)intervalCount;
-(id)initWithName:(id)arg1 identifier:(id)arg2 sets:(id)arg3 ;
-(NSArray *)sets;
-(id)byReplacingSetDefinitionAtIndex:(unsigned long long)arg1 withSetDefinition:(id)arg2 ;
-(id)intervalDefinitionForIntervalAtIndex:(long long)arg1 ;
-(id)byChangingName:(id)arg1 ;
-(id)byAddingSetDefinition:(id)arg1 ;
-(id)byInsertingSetDefinition:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(id)byRemovingSetDefinitionAtIndex:(unsigned long long)arg1 ;
-(id)byAddingIntervalDefinition:(id)arg1 toSetIndex:(unsigned long long)arg2 ;
-(id)byInsertingIntervalDefinition:(id)arg1 atIndexPath:(id)arg2 ;
-(id)byReplacingIntervalDefinitionAtIndexPath:(id)arg1 withIntervalDefinition:(id)arg2 ;
-(id)byRemovingIntervalDefinitionAtIndexPath:(id)arg1 ;
@end

