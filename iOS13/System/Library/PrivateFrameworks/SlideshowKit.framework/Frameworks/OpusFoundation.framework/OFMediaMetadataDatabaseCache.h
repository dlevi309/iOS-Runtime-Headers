/*
* Generated on Monday, March 1, 2021 at 2:35:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
*/


@protocol OS_dispatch_queue;
#import <OpusFoundation/OpusFoundation-Structs.h>
@class NSString, NSObject;

@interface OFMediaMetadataDatabaseCache : NSObject {

	NSString* _diskCacheFilepath;
	sqlite3Ref _sqliteDatabase;
	NSObject*<OS_dispatch_queue> _serialQueue;

}
-(id)init;
-(void)dealloc;
-(void)performBlock:(/*^block*/id)arg1 ;
-(void)performBlockAndWait:(/*^block*/id)arg1 ;
-(BOOL)_open;
-(void)invalidateDiskCaches;
-(id)initWithDiskCacheFilepath:(id)arg1 ;
-(id)entryForIdentifier:(id)arg1 ;
-(id)newEntryWithIdentifier:(id)arg1 ;
@end

