/*
* Generated on Monday, March 1, 2021 at 2:32:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
*/


@protocol OS_dispatch_queue;
@class NSURL, NSObject;

@interface TPFileStorageManager : NSObject {

	BOOL _hasClearedLegacyStorage;
	NSURL* _urlForFileSystem;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic) BOOL hasClearedLegacyStorage;                    //@synthesize hasClearedLegacyStorage=_hasClearedLegacyStorage - In the implementation block
@property (nonatomic,readonly) NSURL * urlForFileSystem;                      //@synthesize urlForFileSystem=_urlForFileSystem - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)localeChanged;
-(id)imageWithName:(id)arg1 ;
-(NSURL *)urlForFileSystem;
-(void)clearLegacyStorageIfNecessary;
-(BOOL)hasClearedLegacyStorage;
-(id)urlsForLegacyFileSystem;
-(void)deleteStorageAtURLs:(id)arg1 ;
-(void)setHasClearedLegacyStorage:(BOOL)arg1 ;
-(void)saveImage:(id)arg1 withName:(id)arg2 ;
@end

