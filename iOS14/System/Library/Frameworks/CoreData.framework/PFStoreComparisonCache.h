/*
* Generated on Thursday, January 14, 2021 at 2:21:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/


@class NSMutableDictionary;

@interface PFStoreComparisonCache : NSObject {

	NSMutableDictionary* _identifierToStoreUUIDToObjectID;
	NSMutableDictionary* _storeUUIDToIdentifiers;

}
-(id)init;
-(id)objectIDForIdentifier:(id)arg1 inStore:(id)arg2 ;
-(void)setObjectID:(id)arg1 forIdentifier:(id)arg2 ;
-(id)identifiersForStore:(id)arg1 ;
-(void)dealloc;
@end

