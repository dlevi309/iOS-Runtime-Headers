/*
* Generated on Monday, March 1, 2021 at 2:31:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <GeoServices/GEOTileRequester.h>

@protocol OS_dispatch_queue;
@class NSMutableArray, NSMutableSet, NSObject;

@interface MKTileOverlayRequester : GEOTileRequester {

	BOOL _cancelled;
	NSMutableArray* _waiting;
	NSMutableSet* _running;
	NSMutableArray* _errors;
	NSObject*<OS_dispatch_queue> _workQueue;

}
+(unsigned char)tileProviderIdentifier;
+(unsigned)registerOverlay:(id)arg1 ;
+(void)unregisterOverlay:(unsigned)arg1 ;
-(void)dealloc;
-(void)cancel;
-(void)start;
-(BOOL)isRunning;
-(void)_cleanup;
-(id)initWithTileRequest:(id)arg1 delegateQueue:(id)arg2 delegate:(id)arg3 ;
-(void)_operationFinished:(id)arg1 ;
-(void)_operationFailed:(id)arg1 error:(id)arg2 ;
-(void)_doWorkOrFinish;
-(void)_startOnWorkQueue;
@end

