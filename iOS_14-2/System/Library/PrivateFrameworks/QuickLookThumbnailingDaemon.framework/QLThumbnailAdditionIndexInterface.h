/*
* Generated on Thursday, January 14, 2021 at 2:25:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/QuickLookThumbnailingDaemon.framework/QuickLookThumbnailingDaemon
*/


@protocol QLThumbnailAdditionIndexInterface
@required
-(void)hasThumbnailForURLWrapper:(id)arg1 updateLastHitDate:(BOOL)arg2 andSize:(unsigned long long)arg3 completion:(/*^block*/id)arg4;
-(void)updateFileSize:(unsigned long long)arg1 ofThumbnailForURL:(id)arg2 completion:(/*^block*/id)arg3;
-(void)updateLastHitDate:(id)arg1 ofThumbnailForURL:(id)arg2 completion:(/*^block*/id)arg3;
-(void)removeThumbnailForURL:(id)arg1 completion:(/*^block*/id)arg2;
-(void)addThumbnailForURLWrapper:(id)arg1 size:(unsigned long long)arg2 completion:(/*^block*/id)arg3;
-(void)retrieveAllAdditions:(/*^block*/id)arg1;
-(void)removeAllAdditions;

@end

