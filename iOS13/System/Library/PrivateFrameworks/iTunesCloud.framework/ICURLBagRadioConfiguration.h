/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/


@class NSDictionary, NSURL;

@interface ICURLBagRadioConfiguration : NSObject {

	NSDictionary* _bagRadioDictionary;

}

@property (nonatomic,copy,readonly) NSURL * baseURL; 
@property (nonatomic,readonly) long long getTracksDPInfoKBSyncCount; 
@property (nonatomic,readonly) long long maxSupportedProtocolVersion; 
-(NSURL *)baseURL;
-(id)urlForBagRadioKey:(id)arg1 ;
-(id)initWithBagRadioDictionary:(id)arg1 ;
-(long long)getTracksDPInfoKBSyncCount;
-(long long)maxSupportedProtocolVersion;
-(BOOL)shouldIncludeHTTPHeaderField:(id)arg1 forRequestURL:(id)arg2 ;
@end

