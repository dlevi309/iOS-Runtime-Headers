/*
* Generated on Thursday, January 14, 2021 at 2:27:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeGraphKit.framework/KnowledgeGraphKit
*/

#import <KnowledgeGraphKit/KnowledgeGraphKit-Structs.h>
#import <KnowledgeGraphKit/KGElementCollection.h>

@class KGElementIdentifierSet, NSMutableArray, KGDegasGraphStore;

@interface KGDegasElementCollection : KGElementCollection {

	KGElementIdentifierSet* _identifiers;
	NSMutableArray* _arrayPages;
	os_unfair_lock_s _pageFillLock;
	KGDegasGraphStore* _store;

}

@property (nonatomic,readonly) KGDegasGraphStore * store;              //@synthesize store=_store - In the implementation block
-(KGDegasGraphStore *)store;
-(void)enumerateObjectsUsingBlock:(/*^block*/id)arg1 ;
-(unsigned long long)count;
-(id)lastObject;
-(id)firstObject;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(id)allObjects;
-(unsigned long long)pageOffsetForIndex:(unsigned long long)arg1 ;
-(id)initWithIdentifiers:(id)arg1 store:(id)arg2 ;
-(unsigned long long)pageNumberForIndex:(unsigned long long)arg1 ;
-(id)elementsForIdentifiers:(id)arg1 ;
-(id)fillPage:(unsigned long long)arg1 ;
-(id)getPage:(unsigned long long)arg1 ;
@end

