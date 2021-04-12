/*
* Generated on Monday, March 1, 2021 at 2:35:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MobileAccessoryUpdater.framework/MobileAccessoryUpdater
*/


@protocol FudPluginDelegate <NSObject>
@optional
-(void)didFind:(BOOL)arg1 info:(id)arg2 updateAvailable:(BOOL)arg3 error:(id)arg4;

@required
-(void)accessoryDisconnected:(id)arg1;
-(void)log:(int)arg1 format:(id)arg2;
-(void)didBootstrap:(BOOL)arg1 info:(id)arg2 error:(id)arg3;
-(void)didFind:(BOOL)arg1 info:(id)arg2 updateAvailable:(BOOL)arg3 needsDownload:(BOOL)arg4 error:(id)arg5;
-(void)didDownload:(BOOL)arg1 info:(id)arg2 error:(id)arg3;
-(void)didPrepare:(BOOL)arg1 info:(id)arg2 error:(id)arg3;
-(void)didApply:(BOOL)arg1 info:(id)arg2 error:(id)arg3;
-(void)didFinish:(BOOL)arg1 info:(id)arg2 error:(id)arg3;
-(void)reportAnalytics:(id)arg1 info:(id)arg2;
-(void)progress:(double)arg1;
-(void)logv:(int)arg1 format:(id)arg2 arguments:(char*)arg3;
-(void)personalizationRequest:(id)arg1;

@end

