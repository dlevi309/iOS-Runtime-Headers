/*
* Generated on Thursday, January 14, 2021 at 2:24:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
*/

#import <libobjc.A.dylib/NTSourceAvailabilityEntry.h>

@class FCNetworkReachability, NSString;

@interface NTParsecSourceAvailabilityEntry : NSObject <NTSourceAvailabilityEntry> {

	/*^block*/id _availabilityChangedNotificationBlock;
	FCNetworkReachability* _networkReachability;

}

@property (nonatomic,readonly) FCNetworkReachability * networkReachability;              //@synthesize networkReachability=_networkReachability - In the implementation block
@property (nonatomic,readonly) Class todayResultsFetchDescriptorClass; 
@property (getter=isAvailable,nonatomic,readonly) BOOL available; 
@property (nonatomic,copy) id availabilityChangedNotificationBlock;                      //@synthesize availabilityChangedNotificationBlock=_availabilityChangedNotificationBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isAvailable;
-(id)init;
-(id)initWithNetworkReachability:(id)arg1 ;
-(Class)todayResultsFetchDescriptorClass;
-(id)availabilityChangedNotificationBlock;
-(void)setAvailabilityChangedNotificationBlock:(id)arg1 ;
-(FCNetworkReachability *)networkReachability;
@end

