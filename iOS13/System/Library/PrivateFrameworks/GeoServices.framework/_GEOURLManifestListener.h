/*
* Generated on Monday, March 1, 2021 at 2:30:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@protocol OS_dispatch_source;
#import <GeoServices/GeoServices-Structs.h>
@class NSMutableArray, NSObject;

@interface _GEOURLManifestListener : NSObject {

	NSMutableArray* _handlers;
	os_unfair_lock_s _lock;
	NSObject*<OS_dispatch_source> _timeoutTimer;

}
+(id)sharedListener;
-(id)init;
-(void)_finish:(BOOL)arg1 ;
-(void)waitForManifestWithCallback:(id)arg1 ;
@end

