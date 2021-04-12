/*
* Generated on Monday, March 1, 2021 at 2:33:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
*/


@protocol OS_dispatch_queue;
@class NSURL, NSDictionary, NSDate, NSURLSession, NSObject;

@interface CPLConfiguration : NSObject {

	NSURL* _configurationFileURL;
	NSDictionary* _configuration;
	NSDate* _lastUpdate;
	double _updateInterval;
	NSURLSession* _currentSession;
	NSObject*<OS_dispatch_queue> _lock;

}
+(void)disableConfigurationFetching;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(id)valueForKey:(id)arg1 ;
-(void)_load;
-(double)_updateInterval;
-(void)_save;
-(id)initWithClientLibraryBaseURL:(id)arg1 ;
-(void)_setContents:(id)arg1 ;
-(void)refetchFromDisk;
-(void)check;
@end

