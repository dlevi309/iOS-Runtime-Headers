/*
* Generated on Thursday, January 14, 2021 at 2:25:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/QuickLookThumbnailingDaemon.framework/QuickLookThumbnailingDaemon
*/


@protocol OS_dispatch_queue;
#import <QuickLookThumbnailingDaemon/QuickLookThumbnailingDaemon-Structs.h>
@class NSObject;

@interface QLDiskStore : NSObject {

	NSObject*<OS_dispatch_queue> _afterInit;
	unsigned char _disableQuickLook;
	BOOL _isExternalEncrypted;
	unsigned char _disableCache;
	statfs _fs_stat;
	BOOL _encrypted;

}

@property (assign) unsigned char disableQuickLook;                       //@synthesize disableQuickLook=_disableQuickLook - In the implementation block
@property (assign) unsigned char disableCache;                           //@synthesize disableCache=_disableCache - In the implementation block
@property (assign,nonatomic) BOOL isExternalEncrypted;                   //@synthesize isExternalEncrypted=_isExternalEncrypted - In the implementation block
@property (assign) statfs fs_stat;                                       //@synthesize fs_stat=_fs_stat - In the implementation block
@property (readonly) BOOL acceptsThumbnails; 
@property (readonly) BOOL hasThumbnailCache; 
@property (readonly) BOOL distant; 
@property (readonly) BOOL encrypted;                                     //@synthesize encrypted=_encrypted - In the implementation block
@property (readonly) unsigned long long availableDiskSpace; 
@property (readonly) const char* mountPath; 
+(id)diskStoreForURL:(id)arg1 ;
+(id)diskStores;
-(id)initWithURL:(id)arg1 ;
-(BOOL)encrypted;
-(id)description;
-(unsigned char)disableCache;
-(void)setDisableCache:(unsigned char)arg1 ;
-(BOOL)distant;
-(statfs)fs_stat;
-(void)setDisableQuickLook:(unsigned char)arg1 ;
-(unsigned char)disableQuickLook;
-(const char*)mountPath;
-(void)executeBlock:(/*^block*/id)arg1 onQueue:(id)arg2 ;
-(BOOL)acceptsThumbnails;
-(BOOL)hasThumbnailCache;
-(BOOL)isExternalEncrypted;
-(unsigned long long)availableDiskSpace;
-(void)setIsExternalEncrypted:(BOOL)arg1 ;
-(void)setFs_stat:(statfs)arg1 ;
@end

