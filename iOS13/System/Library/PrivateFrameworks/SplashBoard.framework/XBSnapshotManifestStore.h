/*
* Generated on Monday, March 1, 2021 at 2:33:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SplashBoard.framework/SplashBoard
*/


@protocol XBSnapshotManifestStore <NSObject>
@optional
-(void)beginAccessBlockForBundleIdentifier:(id)arg1;
-(void)endAccessBlockForBundleIdentifier:(id)arg1;

@required
-(void)persistManifestData:(id)arg1 forBundleIdentifier:(id)arg2;
-(void)clearManifestDataForBundleIdentifier:(id)arg1;
-(id)loadManifestDataForBundleIdentifier:(id)arg1;
-(void)synchronizeForBundleIdentifier:(id)arg1 withCompletion:(/*^block*/id)arg2;

@end

