/*
* Generated on Monday, March 1, 2021 at 2:30:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@class NSMutableDictionary;

@interface PLQueryChangeDetectionCriteria : NSObject {

	NSMutableDictionary* _attributeKeyPathsByEntityNameAffectingFetchResult;
	NSMutableDictionary* _relationshipKeyPathsByEntityNameAffectingFetchResult;

}

@property (readonly) BOOL isEmpty; 
-(id)init;
-(id)description;
-(BOOL)isEmpty;
-(void)addAttributeKeyPath:(id)arg1 forEntityName:(id)arg2 ;
-(void)addRelationshipKeyPath:(id)arg1 forEntityName:(id)arg2 ;
-(void)enumerateEntitiesAndAttributesUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateEntitiesAndRelationshipsUsingBlock:(/*^block*/id)arg1 ;
@end

