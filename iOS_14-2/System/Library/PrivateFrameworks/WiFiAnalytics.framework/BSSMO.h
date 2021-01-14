/*
* Generated on Thursday, January 14, 2021 at 2:26:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiAnalytics.framework/WiFiAnalytics
*/

#import <CoreData/NSManagedObject.h>

@class NSUUID, NSString, NSDate, NSObject, BlacklistMO, NSSet, NetworkMO;

@interface BSSMO : NSManagedObject

@property (nonatomic,copy) NSUUID * apid; 
@property (assign,nonatomic) short autoLeaveRssi; 
@property (assign,nonatomic) BOOL beaconMetricSubmitted; 
@property (nonatomic,copy) NSString * bssid; 
@property (assign,nonatomic) short channel; 
@property (assign,nonatomic) short disBcnLossCount; 
@property (assign,nonatomic) short disTrgDisCount; 
@property (assign,nonatomic) short disUsrForcedInWeakRssiCount; 
@property (nonatomic,copy) NSUUID * idUsedInMetric; 
@property (assign,nonatomic) BOOL isEdgeForJoin; 
@property (assign,nonatomic) BOOL isEdgeForLeave; 
@property (assign,nonatomic) BOOL isTCPGood; 
@property (nonatomic,copy) NSDate * lastSeen; 
@property (assign,nonatomic) BOOL manualJoinAfterAutoLeave; 
@property (nonatomic,retain) NSObject * neighborBSSIDs; 
@property (nonatomic,retain) NSObject * neighborChannels; 
@property (nonatomic,retain) NSObject * parsedBeacon; 
@property (assign,nonatomic) int phyMode; 
@property (assign,nonatomic) short roamTriggerRssi; 
@property (nonatomic,retain) NSObject * unparsedBeacon; 
@property (nonatomic,retain) BlacklistMO * blacklist; 
@property (nonatomic,retain) NSSet * geoTag; 
@property (nonatomic,retain) NSSet * joins; 
@property (nonatomic,retain) NSSet * leaves; 
@property (nonatomic,retain) NetworkMO * network; 
@property (nonatomic,retain) NSSet * roamsFrom; 
@property (nonatomic,retain) NSSet * roamsTo; 
+(id)entityName;
+(id)fetchRequest;
@end

