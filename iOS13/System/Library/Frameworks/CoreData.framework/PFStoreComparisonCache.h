/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/


@class NSMutableDictionary;

@interface PFStoreComparisonCache : NSObject {

	NSMutableDictionary* _identifierToStoreUUIDToObjectID;
	NSMutableDictionary* _storeUUIDToIdentifiers;

}
-(id)init;
-(void)dealloc;
-(id)objectIDForIdentifier:(id)arg1 inStore:(id)arg2 ;
-(void)setObjectID:(id)arg1 forIdentifier:(id)arg2 ;
-(id)identifiersForStore:(id)arg1 ;
@end

