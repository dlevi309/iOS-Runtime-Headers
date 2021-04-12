/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/

#import <libobjc.A.dylib/ATXLocationManagerStateStore.h>

@protocol ATXLocationManagerStateStoreOnDiskEnv;
@class NSString;

@interface ATXLocationManagerStateStoreOnDisk : NSObject <ATXLocationManagerStateStore> {

	NSString* _path;
	id<ATXLocationManagerStateStoreOnDiskEnv> _env;
	/*^block*/id _deferredLoadCallback;
	int _fd;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)clear;
-(void)write:(id)arg1 ;
-(id)loadNowOrCallLater:(/*^block*/id)arg1 ;
-(id)initWithPath:(id)arg1 environment:(id)arg2 ;
-(BOOL)_tryToOpen;
-(void)_deviceDidUnlock;
@end

