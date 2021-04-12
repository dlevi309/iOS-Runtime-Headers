/*
* Generated on Thursday, January 14, 2021 at 2:24:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
*/


@class NSMutableDictionary;

@interface IMBalloonPluginAttributionController : NSObject {

	BOOL _hasPerformedFirstAppExtensionLoad;
	NSMutableDictionary* _expiredBundleIDToTimestampMap;
	NSMutableDictionary* _bundleIDsDisplayingAttribution;

}

@property (nonatomic,retain) NSMutableDictionary * expiredBundleIDToTimestampMap;               //@synthesize expiredBundleIDToTimestampMap=_expiredBundleIDToTimestampMap - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * bundleIDsDisplayingAttribution;              //@synthesize bundleIDsDisplayingAttribution=_bundleIDsDisplayingAttribution - In the implementation block
@property (assign,nonatomic) BOOL hasPerformedFirstAppExtensionLoad;                            //@synthesize hasPerformedFirstAppExtensionLoad=_hasPerformedFirstAppExtensionLoad - In the implementation block
+(id)sharedInstance;
-(id)init;
-(id)_currentTimestamp;
-(void)dealloc;
-(void)_handleInstalledPluginsChanged;
-(void)setHasPerformedFirstAppExtensionLoad:(BOOL)arg1 ;
-(NSMutableDictionary *)bundleIDsDisplayingAttribution;
-(double)_expiryTimeout;
-(NSMutableDictionary *)expiredBundleIDToTimestampMap;
-(void)_purgeLeastRecentlySeenAppBundleIDsIfNecessary;
-(void)_saveToFile;
-(BOOL)hasPerformedFirstAppExtensionLoad;
-(void)startExpiryTimer;
-(void)didShowAttributionForBundleIDs:(id)arg1 ;
-(BOOL)shouldShowAttributionForBundleID:(id)arg1 ;
-(void)setExpiredBundleIDToTimestampMap:(NSMutableDictionary *)arg1 ;
-(void)setBundleIDsDisplayingAttribution:(NSMutableDictionary *)arg1 ;
@end

