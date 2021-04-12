/*
* Generated on Thursday, January 14, 2021 at 2:24:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)localeChanged;
-(id)init;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)dealloc;
-(id)imageWithName:(id)arg1 ;
-(NSURL *)urlForFileSystem;
-(void)clearLegacyStorageIfNecessary;
-(BOOL)hasClearedLegacyStorage;
-(id)urlsForLegacyFileSystem;
-(void)deleteStorageAtURLs:(id)arg1 ;
-(void)setHasClearedLegacyStorage:(BOOL)arg1 ;
-(void)saveImage:(id)arg1 withName:(id)arg2 ;
@end

