/*
* Generated on Thursday, January 14, 2021 at 2:26:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiAnalytics.framework/WiFiAnalytics
*/

#import <CoreData/NSManagedObject.h>

@class NSObject, NSDate, BSSMO;

@interface JoinMO : NSManagedObject

@property (assign,nonatomic) short autojoinPhase; 
@property (assign,nonatomic) short cca; 
@property (nonatomic,retain) NSObject * channelsScanned; 
@property (nonatomic,copy) NSDate * date; 
@property (assign,nonatomic) int dhcpLatencyMs; 
@property (assign,nonatomic) int dhcpLeaseMins; 
@property (assign,nonatomic) BOOL dhcpSuccess; 
@property (assign,nonatomic) BOOL isAutojoin; 
@property (assign,nonatomic) short motionState; 
@property (assign,nonatomic) int reason; 
@property (assign,nonatomic) short rssi; 
@property (assign,nonatomic) short snr; 
@property (assign,nonatomic) int status; 
@property (assign,nonatomic) int subreason; 
@property (assign,nonatomic) BOOL success; 
@property (nonatomic,retain) BSSMO * bss; 
+(id)entityName;
+(id)fetchRequest;
@end

