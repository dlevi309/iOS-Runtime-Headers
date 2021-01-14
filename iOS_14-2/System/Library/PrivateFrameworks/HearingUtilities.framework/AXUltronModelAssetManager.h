/*
* Generated on Thursday, January 14, 2021 at 2:26:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HearingUtilities.framework/HearingUtilities
*/

#import <libobjc.A.dylib/AXAssetControllerObserver.h>

@class NSMutableArray, AXAssetController, NSMutableDictionary, NSDictionary, NSString;

@interface AXUltronModelAssetManager : NSObject <AXAssetControllerObserver> {

	NSMutableArray* _observers;
	AXAssetController* _assetController;
	NSMutableDictionary* _assetsTotalBytesWritten;
	NSMutableDictionary* _assetsTotalTimeExpected;
	NSMutableDictionary* _assetDownloadStalled;
	NSMutableDictionary* _cachedAssets;
	NSDictionary* _modelMap;
	long long _previousReportedSize;
	long long _expectedDownloadSize;

}

@property (assign,nonatomic) long long previousReportedSize;              //@synthesize previousReportedSize=_previousReportedSize - In the implementation block
@property (assign,nonatomic) long long expectedDownloadSize;              //@synthesize expectedDownloadSize=_expectedDownloadSize - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)addObserver:(id)arg1 ;
-(void)refresh;
-(void)run;
-(id)init;
-(void)removeObserver:(id)arg1 ;
-(void)_reset;
-(void)downloadAssets;
-(void)assetController:(id)arg1 didFinishRefreshingAssets:(id)arg2 wasSuccessful:(BOOL)arg3 error:(id)arg4 ;
-(void)assetController:(id)arg1 didFinishPurgingAssets:(id)arg2 wasSuccessful:(BOOL)arg3 error:(id)arg4 ;
-(void)assetController:(id)arg1 asset:(id)arg2 downloadProgressTotalWritten:(long long)arg3 totalExpected:(long long)arg4 isStalled:(BOOL)arg5 expectedTimeRemaining:(double)arg6 ;
-(void)assetController:(id)arg1 didFinishDownloadingAsset:(id)arg2 wasSuccessful:(BOOL)arg3 error:(id)arg4 hasRemainingDownloads:(BOOL)arg5 ;
-(void)initializeModelMap;
-(long long)assetStatus;
-(void)notifyAssetsNotReady;
-(long long)totalBytesOfAllAssetsWritten;
-(long long)totalExpectedTimeOfAllAssets;
-(BOOL)isAssetDownloadStalled;
-(void)notifyDownloadProgress:(long long)arg1 totalSizeExpected:(long long)arg2 totalRemainingTime:(double)arg3 isStalled:(BOOL)arg4 ;
-(void)notifyAssetsReady;
-(void)notifyAssetsState;
-(id)soundDetectionTypeForString:(id)arg1 ;
-(void)setExpectedDownloadSize:(long long)arg1 ;
-(long long)expectedDownloadSize;
-(void)cacheAsset:(id)arg1 ;
-(void)updateDownloadingAsset:(id)arg1 totalBytesWritten:(long long)arg2 isStalled:(BOOL)arg3 expectedTimeRemaining:(double)arg4 ;
-(id)localURLForDetector:(id)arg1 ;
-(long long)totalSizeOccupied;
-(long long)totalSizeExpected;
-(long long)previousReportedSize;
-(void)setPreviousReportedSize:(long long)arg1 ;
@end

