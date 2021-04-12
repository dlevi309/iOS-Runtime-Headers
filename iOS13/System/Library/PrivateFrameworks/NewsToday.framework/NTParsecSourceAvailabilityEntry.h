/*
* Generated on Monday, March 1, 2021 at 2:33:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
*/

#import <libobjc.A.dylib/NTSourceAvailabilityEntry.h>

@class FCNetworkReachability, NSString;

@interface NTParsecSourceAvailabilityEntry : NSObject <NTSourceAvailabilityEntry> {

	/*^block*/id _availabilityChangedNotificationBlock;
	FCNetworkReachability* _networkReachability;

}

@property (nonatomic,readonly) FCNetworkReachability * networkReachability;              //@synthesize networkReachability=_networkReachability - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) Class todayResultsFetchDescriptorClass; 
@property (getter=isAvailable,nonatomic,readonly) BOOL available; 
@property (nonatomic,copy) id availabilityChangedNotificationBlock;                      //@synthesize availabilityChangedNotificationBlock=_availabilityChangedNotificationBlock - In the implementation block
-(id)init;
-(BOOL)isAvailable;
-(FCNetworkReachability *)networkReachability;
-(id)initWithNetworkReachability:(id)arg1 ;
-(Class)todayResultsFetchDescriptorClass;
-(id)availabilityChangedNotificationBlock;
-(void)setAvailabilityChangedNotificationBlock:(id)arg1 ;
@end

