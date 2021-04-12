/*
* Generated on Thursday, January 14, 2021 at 2:22:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/


@class NSDictionary, NSURL;

@interface ICURLBagRadioConfiguration : NSObject {

	NSDictionary* _bagRadioDictionary;

}

@property (nonatomic,copy,readonly) NSURL * baseURL; 
@property (nonatomic,readonly) long long getTracksDPInfoKBSyncCount; 
@property (nonatomic,readonly) long long maxSupportedProtocolVersion; 
@property (getter=isContinueListeningAvailable,nonatomic,readonly) BOOL continueListeningAvailable; 
@property (nonatomic,readonly) long long continueListeningMaxQueueSizeInRequest; 
@property (nonatomic,readonly) long long continueListeningMaxUpcomingTracksSizeToMaintain; 
@property (nonatomic,readonly) long long continueListeningLoadStationThreshold; 
-(NSURL *)baseURL;
-(id)urlForBagRadioKey:(id)arg1 ;
-(id)initWithBagRadioDictionary:(id)arg1 ;
-(long long)getTracksDPInfoKBSyncCount;
-(long long)maxSupportedProtocolVersion;
-(BOOL)isContinueListeningAvailable;
-(long long)continueListeningMaxQueueSizeInRequest;
-(long long)continueListeningMaxUpcomingTracksSizeToMaintain;
-(long long)continueListeningLoadStationThreshold;
-(BOOL)shouldIncludeHTTPHeaderField:(id)arg1 forRequestURL:(id)arg2 ;
@end

