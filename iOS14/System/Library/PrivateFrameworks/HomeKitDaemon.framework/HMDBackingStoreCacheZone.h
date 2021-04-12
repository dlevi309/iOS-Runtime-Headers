/*
* Generated on Thursday, January 14, 2021 at 2:25:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>

@class NSString, NSMutableArray, NSArray;

@interface HMDBackingStoreCacheZone : HMFObject {

	long long _zoneID;
	NSString* _zoneName;
	NSMutableArray* _actualGroups;

}

@property (retain) NSMutableArray * actualGroups;              //@synthesize actualGroups=_actualGroups - In the implementation block
@property (readonly) long long zoneID;                         //@synthesize zoneID=_zoneID - In the implementation block
@property (readonly) NSString * zoneName;                      //@synthesize zoneName=_zoneName - In the implementation block
@property (readonly) NSArray * groups; 
-(long long)zoneID;
-(NSString *)zoneName;
-(NSArray *)groups;
-(id)dumpDebug;
-(NSMutableArray *)actualGroups;
-(id)initWithZoneID:(long long)arg1 name:(id)arg2 ;
-(void)setActualGroups:(NSMutableArray *)arg1 ;
@end

