/*
* Generated on Thursday, January 14, 2021 at 2:26:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
*/


@protocol MMCSEngineDelegate <NSObject>
@optional
-(id)MMCSEngine:(id)arg1 didRequestAssetWithItemID:(unsigned long long)arg2;
-(BOOL)MMCSEngine:(id)arg1 shouldLogAtLogLevel:(int)arg2;
-(void)MMCSEngine:(id)arg1 logMessage:(id)arg2 logLevel:(int)arg3;
-(void)MMCSEngine:(id)arg1 logPerformanceMetrics:(id)arg2;

@required
-(void)MMCSEngine:(id)arg1 didFinishPuttingAsset:(id)arg2 putReceipt:(id)arg3 error:(id)arg4;
-(void)MMCSEngine:(id)arg1 didCreateRequestorContext:(id)arg2 forAssets:(id)arg3;
-(void)MMCSEngine:(id)arg1 didMakePutProgress:(float)arg2 state:(int)arg3 onAsset:(id)arg4;
-(void)didFinishPuttingAllAssets;
-(void)MMCSEngine:(id)arg1 didFinishGettingAsset:(id)arg2 path:(id)arg3 error:(id)arg4;
-(void)MMCSEngine:(id)arg1 didMakeGetProgress:(float)arg2 state:(int)arg3 onAsset:(id)arg4;
-(void)didFinishGettingAllAssets;

@end

