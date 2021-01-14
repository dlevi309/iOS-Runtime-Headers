/*
* Generated on Thursday, January 14, 2021 at 2:29:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Health/Plugins/ActivitySharingPlugin.bundle/ActivitySharingPlugin
*/

#import <ActivitySharingPlugin/ActivitySharingPlugin-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface ASCloudKitServerChangeTokenCache : NSObject <NSCopying> {

	NSMutableDictionary* _databaseChangeTokensByDatabaseScope;
	NSMutableDictionary* _zoneChangeTokensByZoneID;
	double _timestamp;
	NSObject*<OS_dispatch_queue> _serialQueue;

}

@property (assign,getter=isExpired,nonatomic) BOOL expired; 
+(id)changeTokenCacheFromUserDefaultsWithSerialQueue:(id)arg1 ;
-(id)serverChangeTokenForRecordZoneID:(id)arg1 ;
-(void)setExpired:(BOOL)arg1 ;
-(BOOL)isExpired;
-(id)initWithSerialQueue:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setServerChangeToken:(id)arg1 forRecordZoneID:(id)arg2 ;
-(void)persistToUserDefaults;
-(id)serverChangeTokenForDatabase:(id)arg1 ;
-(void)setServerChangeToken:(id)arg1 forDatabase:(id)arg2 ;
@end

