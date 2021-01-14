/*
* Generated on Thursday, January 14, 2021 at 2:21:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)_finish:(BOOL)arg1 ;
-(void)waitForManifestWithCallback:(id)arg1 ;
-(id)init;
@end

