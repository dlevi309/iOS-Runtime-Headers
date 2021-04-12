/*
* Generated on Thursday, January 14, 2021 at 2:28:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
*/


@class NSHashTable, TSPReferenceOrderedSet, NSMutableSet, NSArray, NSSet;

@interface TSPObjectInfo : NSObject {

	NSHashTable* _referencedDataHashTable;
	TSPReferenceOrderedSet* _referencedObjectsSet;
	NSMutableSet* _referencedObjectUUIDs;
	NSArray* _referencedData;
	NSArray* _referencedObjects;

}

@property (nonatomic,readonly) NSArray * referencedData; 
@property (nonatomic,readonly) NSArray * referencedObjects; 
@property (nonatomic,readonly) NSSet * referencedObjectUUIDs; 
-(id)init;
-(id)initWithObject:(id)arg1 referenceDepth:(unsigned long long)arg2 ;
-(NSArray *)referencedData;
-(NSArray *)referencedObjects;
-(NSSet *)referencedObjectUUIDs;
-(void)visitObject:(id)arg1 rootObject:(id)arg2 referenceDepth:(unsigned long long)arg3 ;
-(void)visitObjectReferences:(id)arg1 rootObject:(id)arg2 referenceDepth:(unsigned long long)arg3 ;
@end

