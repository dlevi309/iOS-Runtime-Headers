/*
* Generated on Monday, March 1, 2021 at 2:33:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/


@protocol TSKImportExportDelegate <NSObject>
@property (nonatomic,readonly) BOOL importingDesignDemoDoc; 
@property (nonatomic,readonly) BOOL isBrowsingVersions; 
@optional
-(void)addIncompatibleMovieInfo:(id)arg1 withCompatibilityLevel:(long long)arg2;
-(void)showDownloadPermissionAlertIfNeededForDownloadingAssetsWithEstimatedDownloadSize:(long long)arg1 isPrecise:(BOOL)arg2 completion:(/*^block*/id)arg3;
-(BOOL)importingDesignDemoDoc;
-(BOOL)isBrowsingVersions;

@required
-(id)warnings;
-(void)addWarning:(id)arg1;
-(void)removeWarning:(id)arg1;

@end

