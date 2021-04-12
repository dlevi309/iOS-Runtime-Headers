/*
* Generated on Thursday, January 14, 2021 at 2:24:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)_save;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(void)check;
-(id)valueForKey:(id)arg1 ;
-(void)_setContents:(id)arg1 ;
-(double)_updateInterval;
-(id)initWithClientLibraryBaseURL:(id)arg1 ;
-(void)_load;
-(void)refetchFromDisk;
@end

