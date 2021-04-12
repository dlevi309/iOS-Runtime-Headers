/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/NSTemporaryObjectID.h>

@class _NS128bitWrapper;

@interface _NSTemporaryObjectID2 : NSTemporaryObjectID {

	id _store;
	_NS128bitWrapper* _uuid128;

}
+(id)initWithEntity:(id)arg1 andUUIDString:(id)arg2 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)finalize;
-(id)persistentStore;
-(id)_storeIdentifier;
-(id)_referenceData;
-(void)_setPersistentStore:(id)arg1 ;
-(BOOL)_isPersistentStoreAlive;
@end

