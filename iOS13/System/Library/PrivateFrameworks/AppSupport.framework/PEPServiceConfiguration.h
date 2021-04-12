/*
* Generated on Monday, March 1, 2021 at 2:30:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
*/


@class NSString;

@interface PEPServiceConfiguration : NSObject {

	NSString* _cacheFilePath;
	BOOL _shouldDownloadNetworkConfigFile;
	double _cachedFileLastModifyDate;

}
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)_postNotification;
-(BOOL)registerNetworkDefaultsForAppIDs:(id)arg1 forceUpdate:(BOOL)arg2 ;
-(void)_updateDefaults:(id)arg1 ;
-(BOOL)registerNetworkDefaultsForAppID:(id)arg1 ;
@end

