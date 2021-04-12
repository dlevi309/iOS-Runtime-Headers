/*
* Generated on Thursday, January 14, 2021 at 2:24:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
*/

#import <MapsSupport/_MSPContainerEdit.h>
#import <libobjc.A.dylib/MSPContainerEditAddition.h>

@class NSArray, NSIndexSet, NSMapTable, NSString;

@interface _MSPContainerEditAddition : _MSPContainerEdit <MSPContainerEditAddition> {

	NSMapTable* _identifiersAtopByIdentifier;
	NSArray* _objects;
	NSArray* _addedImmutableObjects;
	NSIndexSet* _indexesOfAddedObjects;

}

@property (nonatomic,readonly) NSArray * objects;                               //@synthesize objects=_objects - In the implementation block
@property (nonatomic,readonly) NSArray * addedImmutableObjects;                 //@synthesize addedImmutableObjects=_addedImmutableObjects - In the implementation block
@property (nonatomic,readonly) NSIndexSet * indexesOfAddedObjects;              //@synthesize indexesOfAddedObjects=_indexesOfAddedObjects - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSArray *)objects;
-(NSString *)description;
-(NSArray *)addedImmutableObjects;
-(id)initWithObjects:(id)arg1 indexes:(id)arg2 identifiersAtop:(id)arg3 ;
-(void)useImmutableObjectsFromMap:(id)arg1 intermediateMutableObjectTransferBlock:(/*^block*/id)arg2 ;
-(NSIndexSet *)indexesOfAddedObjects;
-(id)identifierForObjectAtopAddedImmutableObject:(id)arg1 ;
@end

