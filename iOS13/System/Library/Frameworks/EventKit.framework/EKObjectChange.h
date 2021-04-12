/*
* Generated on Monday, March 1, 2021 at 2:32:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
*/


@class EKObjectID;

@interface EKObjectChange : NSObject {

	int _changeType;
	EKObjectID* _changedObjectID;
	long long _changeID;
	long long _sequenceNumber;

}

@property (nonatomic,readonly) long long changeID;                        //@synthesize changeID=_changeID - In the implementation block
@property (nonatomic,readonly) long long sequenceNumber;                  //@synthesize sequenceNumber=_sequenceNumber - In the implementation block
@property (nonatomic,readonly) EKObjectID * changedObjectID;              //@synthesize changedObjectID=_changedObjectID - In the implementation block
@property (nonatomic,readonly) int changeType;                            //@synthesize changeType=_changeType - In the implementation block
+(long long)objectType;
+(int)entityType;
+(void)fetchChangesToObjectsOfTypes:(id)arg1 inStore:(id)arg2 resultHandler:(/*^block*/id)arg3 ;
+(void)fetchChangesToObjectsOfTypes:(id)arg1 inSource:(id)arg2 resultHandler:(/*^block*/id)arg3 ;
+(void)fetchChangesToObjectsOfTypes:(id)arg1 inCalendar:(id)arg2 resultHandler:(/*^block*/id)arg3 ;
+(/*^block*/id)processFetchResults:(/*^block*/id)arg1 ;
+(id)objectChangeWithProperties:(id)arg1 ;
+(id)CADObjectChangeIDsFromEKObjectChanges:(id)arg1 ;
+(void)fetchObjectChangesInStore:(id)arg1 resultHandler:(/*^block*/id)arg2 ;
+(void)fetchObjectChangesInSource:(id)arg1 resultHandler:(/*^block*/id)arg2 ;
+(void)fetchObjectChangesInCalendar:(id)arg1 resultHandler:(/*^block*/id)arg2 ;
+(void)callClientResultsHandler:(/*^block*/id)arg1 changesTruncated:(BOOL)arg2 latestToken:(long long)arg3 changes:(id)arg4 ;
+(/*^block*/id)_filterObjectChangesNotConformingToOwnerIDProvidingProtocol:(/*^block*/id)arg1 ;
+(void)fetchChangesToOwnerIDProvidingObjectsOfTypes:(id)arg1 inStore:(id)arg2 resultHandler:(/*^block*/id)arg3 ;
+(void)fetchChangesToOwnerIDProvidingObjectsOfTypes:(id)arg1 inSource:(id)arg2 resultHandler:(/*^block*/id)arg3 ;
+(void)fetchChangesToOwnerIDProvidingObjectsOfTypes:(id)arg1 inCalendar:(id)arg2 resultHandler:(/*^block*/id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(int)changeType;
-(long long)sequenceNumber;
-(EKObjectID *)changedObjectID;
-(long long)changeID;
-(id)initWithChangeProperties:(id)arg1 ;
-(id)serializedPropertiesForConsumingChange;
@end

