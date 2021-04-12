/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
*/


@protocol OS_dispatch_queue;
@class NSObject, WLKChannelsResponse, NSError, NSDictionary, NSArray;

@interface WLKChannelUtilities : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	BOOL _filtered;
	WLKChannelsResponse* _cachedResponse;
	NSError* _error;
	NSDictionary* _channelsByBundleID;

}

@property (nonatomic,readonly) BOOL loaded; 
@property (nonatomic,readonly) NSError * error;                                     //@synthesize error=_error - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * channelsByID; 
@property (nonatomic,copy,readonly) NSDictionary * channelsByBundleID;              //@synthesize channelsByBundleID=_channelsByBundleID - In the implementation block
@property (nonatomic,copy,readonly) NSArray * orderedChannels; 
+(id)sharedInstance;
+(id)sharedInstanceFiltered;
+(id)_validiTunesBundles;
+(BOOL)isItunesBundleID:(id)arg1 ;
-(id)init;
-(NSError *)error;
-(id)_configuration;
-(BOOL)loaded;
-(id)channelIDForBundleID:(id)arg1 ;
-(id)channelForBundleID:(id)arg1 ;
-(NSArray *)orderedChannels;
-(id)channelForID:(id)arg1 ;
-(void)loadIfNeededWithCompletion:(/*^block*/id)arg1 ;
-(id)initFiltered:(BOOL)arg1 ;
-(void)_loadConfigIfNeededWithCompletion:(/*^block*/id)arg1 ;
-(NSDictionary *)channelsByID;
-(BOOL)isItunesOrFirstPartyBundleID:(id)arg1 ;
-(NSDictionary *)channelsByBundleID;
@end

