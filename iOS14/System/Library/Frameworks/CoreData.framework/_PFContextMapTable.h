/*
* Generated on Thursday, January 14, 2021 at 2:21:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/


#import <CoreData/CoreData-Structs.h>
@class _PFModelMap;

@interface _PFContextMapTable : NSObject {

	unsigned long long _slotLimit;
	CFDictionaryRef _objectsByTemporaryID;
	_CFDictionary* _objectsByPermanentObjectID;
	_CFDictionary* _objectsBy64bitPKID;
	unsigned long long* _capacitiesFor64bitPKMappings;
	struct {
		unsigned _usesWeakReferences : 1;
		unsigned _garbageCollectionEnabled : 1;
		unsigned _reservedFlags : 30;
	}  _flags;
	_PFModelMap* _modelMap;

}
-(void)finalize;
-(void)dealloc;
@end

