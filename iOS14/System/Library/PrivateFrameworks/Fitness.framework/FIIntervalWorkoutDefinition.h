/*
* Generated on Thursday, January 14, 2021 at 2:27:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)dictionaryRepresentation;
-(NSArray *)sets;
-(NSString *)name;
-(NSUUID *)identifier;
-(unsigned long long)intervalCount;
-(id)initWithName:(id)arg1 identifier:(id)arg2 sets:(id)arg3 ;
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

