/*
* Generated on Thursday, January 14, 2021 at 2:24:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SplashBoard.framework/SplashBoard
*/


@protocol XBSnapshotManifestStore <NSObject>
@optional
-(void)endAccessBlockForBundleIdentifier:(id)arg1;
-(void)beginAccessBlockForBundleIdentifier:(id)arg1;

@required
-(id)loadManifestDataForBundleIdentifier:(id)arg1;
-(void)synchronizeForBundleIdentifier:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)persistManifestData:(id)arg1 forBundleIdentifier:(id)arg2;
-(void)clearManifestDataForBundleIdentifier:(id)arg1;

@end

