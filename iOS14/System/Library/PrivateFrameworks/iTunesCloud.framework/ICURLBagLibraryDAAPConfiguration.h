/*
* Generated on Thursday, January 14, 2021 at 2:22:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/


@class NSDictionary, NSString;

@interface ICURLBagLibraryDAAPConfiguration : NSObject {

	NSDictionary* _bagDictionary;

}

@property (nonatomic,readonly) long long databaseID; 
@property (nonatomic,readonly) NSString * databaseName; 
@property (nonatomic,readonly) NSString * baseURL; 
@property (getter=isOnlineGeniusForMatchEnabled,nonatomic,readonly) BOOL onlineGeniusForMatchEnabled; 
@property (nonatomic,readonly) long long playDataBatchIntervalInMinutes; 
@property (nonatomic,readonly) long long subscribedContainerPollingFrequencySeconds; 
@property (nonatomic,readonly) long long updatePollingFrequencySeconds; 
@property (nonatomic,readonly) long long autoUpdatePollingFrequencySeconds; 
@property (nonatomic,readonly) unsigned long long maxSyncRetryIntervalSeconds; 
-(NSString *)baseURL;
-(BOOL)isOnlineGeniusForMatchEnabled;
-(long long)playDataBatchIntervalInMinutes;
-(long long)subscribedContainerPollingFrequencySeconds;
-(long long)updatePollingFrequencySeconds;
-(long long)autoUpdatePollingFrequencySeconds;
-(unsigned long long)maxSyncRetryIntervalSeconds;
-(id)description;
-(long long)databaseID;
-(NSString *)databaseName;
-(id)initWithBagLibraryDAAPDictionary:(id)arg1 ;
@end

