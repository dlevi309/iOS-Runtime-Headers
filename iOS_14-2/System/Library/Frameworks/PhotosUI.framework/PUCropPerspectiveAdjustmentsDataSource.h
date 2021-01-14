/*
* Generated on Thursday, January 14, 2021 at 2:22:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <libobjc.A.dylib/PUAdjustmentsViewDataSource.h>

@protocol PUCropPerspectiveAdjustmentsDataSourceDelegate;
@class PUAdjustmentInfo, NSMutableDictionary, NSMutableArray, PICompositionController, PUPhotoEditValuesCalculator, NSString;

@interface PUCropPerspectiveAdjustmentsDataSource : NSObject <PUAdjustmentsViewDataSource> {

	long long _orientation;
	PUAdjustmentInfo* _straightenAngleInfo;
	PUAdjustmentInfo* _pitchAngleInfo;
	PUAdjustmentInfo* _yawAngleInfo;
	NSMutableDictionary* _valueScaleForKey;
	NSMutableArray* _adjustmentInfoSections;
	id<PUCropPerspectiveAdjustmentsDataSourceDelegate> _delegate;
	PICompositionController* _compositionController;
	PUPhotoEditValuesCalculator* _valuesCalculator;

}

@property (nonatomic,retain) NSMutableArray * adjustmentInfoSections;                                         //@synthesize adjustmentInfoSections=_adjustmentInfoSections - In the implementation block
@property (nonatomic,retain) PICompositionController * compositionController;                                 //@synthesize compositionController=_compositionController - In the implementation block
@property (nonatomic,retain) PUPhotoEditValuesCalculator * valuesCalculator;                                  //@synthesize valuesCalculator=_valuesCalculator - In the implementation block
@property (assign,nonatomic,__weak) id<PUCropPerspectiveAdjustmentsDataSourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(PUPhotoEditValuesCalculator *)valuesCalculator;
-(id<PUCropPerspectiveAdjustmentsDataSourceDelegate>)delegate;
-(void)_setDefaultsForInfo:(id)arg1 ;
-(void)_modifyAdjustmentForInfo:(id)arg1 ;
-(BOOL)canModifyAdjustmentAtIndexPath:(id)arg1 ;
-(void)setAdjustmentEnabled:(BOOL)arg1 atIndexPath:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)modifyValue:(double)arg1 atIndexPath:(id)arg2 ;
-(id)infoForItemAtIndexPath:(id)arg1 ;
-(void)resetInfoAtIndexPath:(id)arg1 ;
-(id)_newAdjustmentInfoWithIdentifier:(id)arg1 adjustmentKey:(id)arg2 settingKey:(id)arg3 attributeKey:(id)arg4 ;
-(id)_newAdjustmentInfoWithAdjustmentKey:(id)arg1 settingKey:(id)arg2 attributeKey:(id)arg3 ;
-(void)_createAdjustmentInfos;
-(void)_enableNonAutoAjustments:(BOOL)arg1 ;
-(void)_updateAdjustmentInfos;
-(NSMutableArray *)adjustmentInfoSections;
-(void)compositionControllerDidChange;
-(void)setAdjustmentInfoSections:(NSMutableArray *)arg1 ;
-(void)setValuesCalculator:(PUPhotoEditValuesCalculator *)arg1 ;
-(long long)numberOfItemsInSection:(long long)arg1 ;
-(long long)numberOfSections;
-(void)setupWithCompositionController:(id)arg1 valuesCalculator:(id)arg2 ;
-(id)renderer;
-(void)setDelegate:(id<PUCropPerspectiveAdjustmentsDataSourceDelegate>)arg1 ;
-(id)_geometryAdjustmentInfos;
-(PICompositionController *)compositionController;
-(void)setCompositionController:(PICompositionController *)arg1 ;
-(void)setOrientation:(long long)arg1 ;
@end
