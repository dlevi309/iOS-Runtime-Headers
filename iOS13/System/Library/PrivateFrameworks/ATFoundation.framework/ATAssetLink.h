/*
* Generated on Monday, March 1, 2021 at 2:34:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
*/


@protocol ATAssetLink <NSObject>
@property (getter=isOpen,nonatomic,readonly) BOOL open; 
@property (assign,nonatomic,__weak) id<ATAssetLinkDelegate> delegate; 
@required
-(BOOL)open;
-(void)close;
-(id<ATAssetLinkDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(unsigned long long)priority;
-(BOOL)isOpen;
-(unsigned long long)maximumBatchSize;
-(id)enqueueAssets:(id)arg1 force:(BOOL)arg2;
-(BOOL)canEnqueueAsset:(id)arg1;
-(void)cancelAssets:(id)arg1;
-(void)prioritizeAsset:(id)arg1;
-(BOOL)linkIsReady;

@end

