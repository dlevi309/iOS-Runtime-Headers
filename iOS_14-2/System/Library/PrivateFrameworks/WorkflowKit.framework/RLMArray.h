/*
* Generated on Thursday, January 14, 2021 at 2:26:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WorkflowKit-Structs.h>
#import <libobjc.A.dylib/RLMThreadConfined_Private.h>
#import <libobjc.A.dylib/RLMCollection.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class NSString, RLMRealm, RLMObjectBase, NSMutableArray;

@interface RLMArray : NSObject <RLMThreadConfined_Private, RLMCollection, NSFastEnumeration> {

	NSString* _objectClassName;
	int _type;
	BOOL _optional;
	NSString* _key;
	RLMObjectBase* _parentObject;
	NSMutableArray* _backingArray;

}

@property (nonatomic,readonly) unsigned long long count; 
@property (nonatomic,readonly) int type;                                           //@synthesize type=_type - In the implementation block
@property (getter=isOptional,nonatomic,readonly) BOOL optional;                    //@synthesize optional=_optional - In the implementation block
@property (nonatomic,copy,readonly) NSString * objectClassName;                    //@synthesize objectClassName=_objectClassName - In the implementation block
@property (nonatomic,readonly) RLMRealm * realm; 
@property (getter=isInvalidated,nonatomic,readonly) BOOL invalidated; 
@property (nonatomic,readonly) id objectiveCMetadata; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)objectWithThreadSafeReference:(unique_ptr<realm::ThreadSafeReferenceBase, std::__1::default_delete<realm::ThreadSafeReferenceBase> >*)arg1 metadata:(id)arg2 realm:(id)arg3 ;
-(void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2 ;
-(RLMRealm *)realm;
-(void)removeObjectsAtIndexes:(id)arg1 ;
-(BOOL)isOptional;
-(void)removeLastObject;
-(id)sortedResultsUsingDescriptors:(id)arg1 ;
-(void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void*)arg4 ;
-(BOOL)isInvalidated;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_RL7*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)objectAtIndexedSubscript:(unsigned long long)arg1 ;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(id)addNotificationBlock:(/*^block*/id)arg1 ;
-(void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(unsigned long long)indexOfObject:(id)arg1 ;
-(id)objectsAtIndexes:(id)arg1 ;
-(void)addObjects:(id)arg1 ;
-(id)valueForKey:(id)arg1 ;
-(unique_ptr<realm::ThreadSafeReferenceBase, std::__1::default_delete<realm::ThreadSafeReferenceBase> >*)makeThreadSafeReference;
-(unsigned long long)count;
-(id)lastObject;
-(unsigned long long)indexOfObjectWhere:(id)arg1 args:(char*)arg2 ;
-(void)addObjectsFromArray:(id)arg1 ;
-(id)firstObject;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(id)objectsWhere:(id)arg1 ;
-(id)objectsWithPredicate:(id)arg1 ;
-(id)valueForKeyPath:(id)arg1 ;
-(NSString *)description;
-(void)addObject:(id)arg1 ;
-(id)averageOfProperty:(id)arg1 ;
-(void)removeObjectAtIndex:(unsigned long long)arg1 ;
-(void)moveObjectAtIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2 ;
-(id)minOfProperty:(id)arg1 ;
-(void)insertObjects:(id)arg1 atIndexes:(id)arg2 ;
-(void)exchangeObjectAtIndex:(unsigned long long)arg1 withObjectAtIndex:(unsigned long long)arg2 ;
-(void)removeAllObjects;
-(int)type;
-(unsigned long long)indexOfObjectWithPredicate:(id)arg1 ;
-(id)maxOfProperty:(id)arg1 ;
-(id)sumOfProperty:(id)arg1 ;
-(id)objectsWhere:(id)arg1 args:(char*)arg2 ;
-(id)sortedResultsUsingKeyPath:(id)arg1 ascending:(BOOL)arg2 ;
-(unsigned long long)indexOfObjectWhere:(id)arg1 ;
-(NSString *)objectClassName;
-(void)setObject:(id)arg1 atIndexedSubscript:(unsigned long long)arg2 ;
-(id)objectiveCMetadata;
-(id)initWithObjectClassName:(id)arg1 ;
-(id)initWithObjectType:(int)arg1 optional:(BOOL)arg2 ;
-(int)typeForProperty:(id)arg1 ;
-(id)aggregateProperty:(id)arg1 operation:(id)arg2 method:(SEL)arg3 ;
-(id)descriptionWithMaxDepth:(unsigned long long)arg1 ;
@end

