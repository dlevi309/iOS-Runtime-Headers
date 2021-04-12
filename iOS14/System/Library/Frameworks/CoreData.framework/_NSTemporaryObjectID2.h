/*
* Generated on Thursday, January 14, 2021 at 2:21:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/NSTemporaryObjectID.h>

@class _NS128bitWrapper;

@interface _NSTemporaryObjectID2 : NSTemporaryObjectID {

	id _store;
	_NS128bitWrapper* _uuid128;

}
+(id)initWithEntity:(id)arg1 andUUIDString:(id)arg2 ;
-(id)persistentStore;
-(BOOL)_isPersistentStoreAlive;
-(unsigned long long)hash;
-(id)_referenceData;
-(void)_setPersistentStore:(id)arg1 ;
-(id)_storeIdentifier;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

