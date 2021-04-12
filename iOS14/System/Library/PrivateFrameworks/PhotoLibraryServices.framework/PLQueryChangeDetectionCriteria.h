/*
* Generated on Thursday, January 14, 2021 at 2:22:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@class NSMutableDictionary;

@interface PLQueryChangeDetectionCriteria : NSObject {

	NSMutableDictionary* _attributeKeyPathsByEntityNameAffectingFetchResult;
	NSMutableDictionary* _relationshipKeyPathsByEntityNameAffectingFetchResult;

}

@property (readonly) BOOL isEmpty; 
-(id)init;
-(void)enumerateEntitiesAndRelationshipsUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateEntitiesAndAttributesUsingBlock:(/*^block*/id)arg1 ;
-(id)description;
-(void)addAttributeKeyPath:(id)arg1 forEntityName:(id)arg2 ;
-(void)addRelationshipKeyPath:(id)arg1 forEntityName:(id)arg2 ;
-(BOOL)isEmpty;
@end

