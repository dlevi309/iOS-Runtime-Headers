/*
* Generated on Thursday, January 14, 2021 at 2:27:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
*/


@protocol ATAssetLink <NSObject>
@property (getter=isOpen,nonatomic,readonly) BOOL open; 
@property (assign,nonatomic,__weak) id<ATAssetLinkDelegate> delegate; 
@required
-(BOOL)open;
-(id<ATAssetLinkDelegate>)delegate;
-(BOOL)isOpen;
-(void)close;
-(void)cancelAssets:(id)arg1;
-(void)prioritizeAsset:(id)arg1;
-(id)enqueueAssets:(id)arg1 force:(BOOL)arg2;
-(void)setDelegate:(id)arg1;
-(unsigned long long)maximumBatchSize;
-(BOOL)canEnqueueAsset:(id)arg1;
-(unsigned long long)priority;
-(BOOL)linkIsReady;

@end

