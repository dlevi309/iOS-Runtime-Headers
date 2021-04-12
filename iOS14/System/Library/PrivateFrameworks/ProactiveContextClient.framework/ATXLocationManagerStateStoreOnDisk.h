/*
* Generated on Thursday, January 14, 2021 at 2:28:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveContextClient.framework/ProactiveContextClient
*/

#import <libobjc.A.dylib/ATXLocationManagerStateStore.h>

@protocol ATXLocationManagerStateStoreOnDiskEnv;
@class NSString;

@interface ATXLocationManagerStateStoreOnDisk : NSObject <ATXLocationManagerStateStore> {

	NSString* _path;
	id<ATXLocationManagerStateStoreOnDiskEnv> _env;
	/*^block*/id _deferredLoadCallback;
	int _fd;
	double _cacheExpirationInterval;

}

@property (assign) double cacheExpirationInterval;                  //@synthesize cacheExpirationInterval=_cacheExpirationInterval - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)clear;
-(BOOL)_tryToOpen;
-(id)init;
-(void)write:(id)arg1 ;
-(id)loadNowOrCallLater:(/*^block*/id)arg1 ;
-(void)setCacheExpirationInterval:(double)arg1 ;
-(id)initWithPath:(id)arg1 environment:(id)arg2 ;
-(void)_deviceDidUnlock;
-(double)cacheExpirationInterval;
-(void)dealloc;
@end

