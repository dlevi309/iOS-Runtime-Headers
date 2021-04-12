/*
* Generated on Thursday, January 14, 2021 at 2:26:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiAnalytics.framework/WiFiAnalytics
*/

#import <CoreData/NSManagedObject.h>

@class NSObject, NSString, BlacklistMO, NSSet;

@interface NetworkMO : NSManagedObject

@property (assign,nonatomic) int authFlags; 
@property (nonatomic,retain) NSObject * channels; 
@property (assign,nonatomic) long long colocatedState; 
@property (assign,nonatomic) BOOL isHome; 
@property (assign,nonatomic) BOOL isMoving; 
@property (assign,nonatomic) BOOL isOmnipresent; 
@property (assign,nonatomic) BOOL isWork; 
@property (assign,nonatomic) long long networkScore; 
@property (nonatomic,readonly) long long numBSS; 
@property (nonatomic,copy) NSString * ssid; 
@property (assign,nonatomic) long long switchedAwayFromCount; 
@property (assign,nonatomic) long long switchedToCount; 
@property (assign,nonatomic) int usageRank; 
@property (nonatomic,retain) BlacklistMO * blacklist; 
@property (nonatomic,retain) NSSet * bss; 
+(id)entityName;
+(id)fetchRequest;
@end

