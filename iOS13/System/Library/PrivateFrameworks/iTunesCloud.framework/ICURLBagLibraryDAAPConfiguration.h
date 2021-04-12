/*
* Generated on Monday, March 1, 2021 at 2:32:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(NSString *)baseURL;
-(NSString *)databaseName;
-(long long)databaseID;
-(id)initWithBagLibraryDAAPDictionary:(id)arg1 ;
-(BOOL)isOnlineGeniusForMatchEnabled;
-(long long)playDataBatchIntervalInMinutes;
-(long long)subscribedContainerPollingFrequencySeconds;
-(long long)updatePollingFrequencySeconds;
-(long long)autoUpdatePollingFrequencySeconds;
-(unsigned long long)maxSyncRetryIntervalSeconds;
@end

