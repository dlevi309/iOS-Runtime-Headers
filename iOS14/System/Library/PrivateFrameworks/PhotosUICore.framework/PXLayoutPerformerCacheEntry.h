/*
* Generated on Thursday, January 14, 2021 at 2:22:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@protocol PXLayoutPerformer;
@interface PXLayoutPerformerCacheEntry : NSObject {

	id<PXLayoutPerformer> _performer;
	unsigned long long _reentryCount;

}

@property (nonatomic,retain) id<PXLayoutPerformer> performer;              //@synthesize performer=_performer - In the implementation block
@property (assign,nonatomic) unsigned long long reentryCount;              //@synthesize reentryCount=_reentryCount - In the implementation block
-(void)setPerformer:(id<PXLayoutPerformer>)arg1 ;
-(unsigned long long)reentryCount;
-(void)setReentryCount:(unsigned long long)arg1 ;
-(id<PXLayoutPerformer>)performer;
@end

