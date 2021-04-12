/*
* Generated on Monday, March 1, 2021 at 2:31:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <libobjc.A.dylib/GEOResourceManifestTileGroupObserver.h>

@protocol OS_dispatch_queue;
@class NSURL, NSObject, NSLock, NSMutableArray, NSString;

@interface _MKIconDiskCache : NSObject <GEOResourceManifestTileGroupObserver> {

	NSURL* _directoryURL;
	NSObject*<OS_dispatch_queue> _storingQueue;
	NSLock* _lock;
	NSMutableArray* _inProgressUUIDs;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)resourceManifestManager:(id)arg1 didChangeActiveTileGroup:(id)arg2 fromOldTileGroup:(id)arg3 ;
-(id)imageForStyleAttributes:(id)arg1 size:(unsigned long long)arg2 scale:(double)arg3 isCarplay:(BOOL)arg4 isTransit:(BOOL)arg5 isTransparent:(BOOL)arg6 isNightMode:(BOOL)arg7 drawingBlock:(/*^block*/id)arg8 ;
-(void)_updateVersionsInfo;
-(id)initWithDirectoryURL:(id)arg1 ;
-(id)imageForStyleAttributes:(id)arg1 size:(unsigned long long)arg2 scale:(double)arg3 drawingBlock:(/*^block*/id)arg4 ;
@end

