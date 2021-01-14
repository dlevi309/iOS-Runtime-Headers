/*
* Generated on Thursday, January 14, 2021 at 2:22:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXObservable.h>
#import <libobjc.A.dylib/PHImportControllerObserver.h>
#import <libobjc.A.dylib/PHImportSourceObserver.h>

@class NSMutableArray, PHImportSource, PHImportController, NSArray;

@interface PXImportSourcesManager : PXObservable <PHImportControllerObserver, PHImportSourceObserver> {

	NSMutableArray* _importSources;
	PHImportSource* _URLImportSource;
	PHImportController* _importController;

}

@property (nonatomic,readonly) PHImportController * importController;              //@synthesize importController=_importController - In the implementation block
@property (nonatomic,readonly) NSArray * importSources; 
+(id)sharedController;
-(id)init;
-(void)_notifyObserversDidAddImportSource:(id)arg1 ;
-(void)_notifyObserversDidUpdateImportSource:(id)arg1 ;
-(void)_notifyObserversDidRemoveImportSource:(id)arg1 ;
-(NSArray *)importSources;
-(id)updateImportSourceForURLs:(id)arg1 ;
-(void)importSource:(id)arg1 didDeleteAsset:(id)arg2 ;
-(void)importSource:(id)arg1 didUpdateAsset:(id)arg2 propertyMask:(unsigned short)arg3 ;
-(void)nameDidChangeForImportSource:(id)arg1 ;
-(PHImportController *)importController;
-(void)importController:(id)arg1 removedImportSource:(id)arg2 ;
-(void)importController:(id)arg1 addedImportSource:(id)arg2 ;
-(void)importSource:(id)arg1 didRemoveAssets:(id)arg2 ;
-(void)importSource:(id)arg1 didAddAssets:(id)arg2 ;
-(void)capabilitiesDidChangeForImportSource:(id)arg1 ;
-(void)userHasTrustedHostForImportSource:(id)arg1 ;
-(void)userRequiredToTrustHostForImportSource:(id)arg1 ;
@end

