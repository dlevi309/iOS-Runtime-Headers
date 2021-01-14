/*
* Generated on Thursday, January 14, 2021 at 2:23:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
*/

#import <AXMediaUtilities/AXMediaUtilities-Structs.h>
#import <AXMediaUtilities/AXAssetControllerObserver.h>

@class AXAssetController, NSURL, NSString;

@interface AXMImageCaptionModelAssetManager : NSObject <AXAssetControllerObserver> {

	os_unfair_lock_s _lock;
	BOOL _didTryWaitingForAssetLookup;
	AXAssetController* _assetController;
	NSURL* _modelURL;

}

@property (nonatomic,copy) NSURL * modelURL;                        //@synthesize modelURL=_modelURL - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)setModelURL:(NSURL *)arg1 ;
-(NSURL *)modelURL;
-(id)modelURLWithTimeout:(double)arg1 ;
-(id)init;
-(void)_performWithLock:(/*^block*/id)arg1 ;
-(void)assetController:(id)arg1 didFinishRefreshingAssets:(id)arg2 wasSuccessful:(BOOL)arg3 error:(id)arg4 ;
-(id)infoForModelAtURL:(id)arg1 ;
@end

