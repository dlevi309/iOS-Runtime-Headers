/*
* Generated on Thursday, January 14, 2021 at 2:24:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProtectedCloudStorage.framework/ProtectedCloudStorage
*/

#import <ProtectedCloudStorage/ProtectedCloudStorage-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface UserRegistryStats : NSObject <NSSecureCoding> {

	long long _fetchRecordZoneChanges;
	long long _lastfetchRecordZoneChangesAtStart;
	long long _pushNotifications;
	long long _zoneReset;
	long long _recordFetch;
	long long _recordModify;

}

@property (assign) long long fetchRecordZoneChanges;                         //@synthesize fetchRecordZoneChanges=_fetchRecordZoneChanges - In the implementation block
@property (assign) long long lastfetchRecordZoneChangesAtStart;              //@synthesize lastfetchRecordZoneChangesAtStart=_lastfetchRecordZoneChangesAtStart - In the implementation block
@property (assign) long long pushNotifications;                              //@synthesize pushNotifications=_pushNotifications - In the implementation block
@property (assign) long long zoneReset;                                      //@synthesize zoneReset=_zoneReset - In the implementation block
@property (assign) long long recordFetch;                                    //@synthesize recordFetch=_recordFetch - In the implementation block
@property (assign) long long recordModify;                                   //@synthesize recordModify=_recordModify - In the implementation block
+(BOOL)supportsSecureCoding;
-(long long)lastfetchRecordZoneChangesAtStart;
-(void)setFetchRecordZoneChanges:(long long)arg1 ;
-(long long)pushNotifications;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)fetchRecordZoneChanges;
-(id)getUserRegistryStats;
-(void)setRecordModify:(long long)arg1 ;
-(long long)recordModify;
-(void)setRecordFetch:(long long)arg1 ;
-(void)setLastfetchRecordZoneChangesAtStart:(long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)zoneReset;
-(void)setPushNotifications:(long long)arg1 ;
-(long long)recordFetch;
-(void)printUserRegistryStats:(_sFILE*)arg1 ;
-(void)setZoneReset:(long long)arg1 ;
@end

