/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(void)finalize;
-(void)_dispose;
-(id)initWithWeaksReferences:(BOOL)arg1 ;
-(void)setForUseWithCoordinator:(id)arg1 ;
-(unsigned long long)getAllObjects:(id*)arg1 ;
-(void)setCapacityHint:(unsigned long long)arg1 forSlot:(unsigned)arg2 ;
-(void)clearTemporaryIDs;
@end

