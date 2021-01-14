/*
* Generated on Thursday, January 14, 2021 at 2:26:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/


@class NSArray;

@interface CKDCachePurger : NSObject {

	BOOL _purged;
	NSArray* _oldCacheDirs;

}

@property (assign,nonatomic) BOOL purged;                           //@synthesize purged=_purged - In the implementation block
@property (nonatomic,readonly) NSArray * oldCacheDirs;              //@synthesize oldCacheDirs=_oldCacheDirs - In the implementation block
+(id)enumerateOldCachesForApplicationBundleID:(id)arg1 sourceApplicationBundleID:(id)arg2 containerPath:(id)arg3 cachesPath:(id)arg4 ;
-(void)setPurged:(BOOL)arg1 ;
-(BOOL)purged;
-(NSArray *)oldCacheDirs;
-(id)initWithApplicationBundleID:(id)arg1 sourceApplicationBundleID:(id)arg2 containerPath:(id)arg3 cachePath:(id)arg4 ;
-(void)purgeOldCacheDirectories;
@end

