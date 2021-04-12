/*
* Generated on Thursday, January 14, 2021 at 2:22:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <libobjc.A.dylib/PUAdjustmentsViewDataSource.h>

@protocol PUAdjustmentsDataSourceDelegate;
@class NSMutableArray, PICompositionController, PUAutoAdjustmentController, PUPhotoEditValuesCalculator, NSString;

@interface PUAdjustmentsDataSource : NSObject <PUAdjustmentsViewDataSource> {

	NSMutableArray* _adjustmentInfoSections;
	id<PUAdjustmentsDataSourceDelegate> _delegate;
	PICompositionController* _compositionController;
	PUAutoAdjustmentController* _autoEnhanceController;
	PUPhotoEditValuesCalculator* _valuesCalculator;
	unsigned long long _assetType;

}

@property (nonatomic,retain) NSMutableArray * adjustmentInfoSections;                          //@synthesize adjustmentInfoSections=_adjustmentInfoSections - In the implementation block
@property (nonatomic,retain) PICompositionController * compositionController;                  //@synthesize compositionController=_compositionController - In the implementation block
@property (nonatomic,retain) PUAutoAdjustmentController * autoEnhanceController;               //@synthesize autoEnhanceController=_autoEnhanceController - In the implementation block
@property (nonatomic,retain) PUPhotoEditValuesCalculator * valuesCalculator;                   //@synthesize valuesCalculator=_valuesCalculator - In the implementation block
@property (assign,nonatomic) unsigned long long assetType;                                     //@synthesize assetType=_assetType - In the implementation block
@property (assign,nonatomic,__weak) id<PUAdjustmentsDataSourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)assetType;
-(PUPhotoEditValuesCalculator *)valuesCalculator;
-(id<PUAdjustmentsDataSourceDelegate>)delegate;
-(void)_resetEnabledStateForAutoEnhancedInfos;
-(PUAutoAdjustmentController *)autoEnhanceController;
-(void)_setDefaultsForInfo:(id)arg1 ;
-(void)_modifyAdjustmentForInfo:(id)arg1 ;
-(BOOL)canModifyAdjustmentAtIndexPath:(id)arg1 ;
-(void)setAdjustmentEnabled:(BOOL)arg1 atIndexPath:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)modifyValue:(double)arg1 atIndexPath:(id)arg2 ;
-(id)infoForItemAtIndexPath:(id)arg1 ;
-(void)resetInfoAtIndexPath:(id)arg1 ;
-(void)setupWithCompositionController:(id)arg1 valuesCalculator:(id)arg2 autoAdjustmentController:(id)arg3 assetType:(unsigned long long)arg4 ;
-(id)_newAdjustmentInfoWithIdentifier:(id)arg1 adjustmentKey:(id)arg2 settingKey:(id)arg3 attributeKey:(id)arg4 ;
-(id)_newAdjustmentInfoWithAdjustmentKey:(id)arg1 settingKey:(id)arg2 attributeKey:(id)arg3 ;
-(void)_createAdjustmentInfos;
-(id)_autoEnhanceAdjustmentInfo;
-(id)_lightAdjustmentInfos;
-(id)_colorAdjustmentInfos;
-(id)_detailAdjustmentInfos;
-(id)_vignetteAdjustmentInfos;
-(id)_smartBlackAndWhiteAdjustmentInfos;
-(id)_debugAdjustmentInfos;
-(void)_enableNonAutoAjustments:(BOOL)arg1 ;
-(void)_updateAdjustmentInfos;
-(NSMutableArray *)adjustmentInfoSections;
-(void)compositionControllerDidChange;
-(void)setAdjustmentInfoSections:(NSMutableArray *)arg1 ;
-(void)setAutoEnhanceController:(PUAutoAdjustmentController *)arg1 ;
-(void)setValuesCalculator:(PUPhotoEditValuesCalculator *)arg1 ;
-(long long)numberOfItemsInSection:(long long)arg1 ;
-(long long)numberOfSections;
-(void)setAssetType:(unsigned long long)arg1 ;
-(id)renderer;
-(void)setDelegate:(id<PUAdjustmentsDataSourceDelegate>)arg1 ;
-(PICompositionController *)compositionController;
-(void)setCompositionController:(PICompositionController *)arg1 ;
@end

