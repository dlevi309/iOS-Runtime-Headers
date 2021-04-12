/*
* Generated on Thursday, January 14, 2021 at 2:21:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
*/


@class NSString;

@interface PEPServiceConfiguration : NSObject {

	NSString* _cacheFilePath;
	BOOL _shouldDownloadNetworkConfigFile;
	double _cachedFileLastModifyDate;

}
+(id)sharedInstance;
-(BOOL)registerNetworkDefaultsForAppIDs:(id)arg1 forceUpdate:(BOOL)arg2 ;
-(id)init;
-(BOOL)registerNetworkDefaultsForAppID:(id)arg1 ;
-(void)_updateDefaults:(id)arg1 ;
-(void)_postNotification;
-(void)dealloc;
@end

