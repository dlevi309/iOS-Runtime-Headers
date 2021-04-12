/*
* Generated on Monday, March 1, 2021 at 2:33:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>

@class NSString, NSMutableArray, NSArray;

@interface HMDBackingStoreCacheZone : HMFObject {

	long long _zoneID;
	NSString* _zoneName;
	NSMutableArray* _actualGroups;
	NSMutableArray* _actualShares;

}

@property (retain) NSMutableArray * actualGroups;              //@synthesize actualGroups=_actualGroups - In the implementation block
@property (retain) NSMutableArray * actualShares;              //@synthesize actualShares=_actualShares - In the implementation block
@property (readonly) long long zoneID;                         //@synthesize zoneID=_zoneID - In the implementation block
@property (readonly) NSString * zoneName;                      //@synthesize zoneName=_zoneName - In the implementation block
@property (readonly) NSArray * groups; 
@property (readonly) NSArray * shares; 
-(long long)zoneID;
-(NSString *)zoneName;
-(NSArray *)groups;
-(NSArray *)shares;
-(id)dumpDebug;
-(NSMutableArray *)actualGroups;
-(NSMutableArray *)actualShares;
-(id)initWithZoneID:(long long)arg1 name:(id)arg2 ;
-(void)setActualGroups:(NSMutableArray *)arg1 ;
-(void)setActualShares:(NSMutableArray *)arg1 ;
@end
