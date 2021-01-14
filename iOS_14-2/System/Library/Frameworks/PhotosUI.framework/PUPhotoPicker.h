/*
* Generated on Thursday, January 14, 2021 at 2:22:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

@class NSArray, NSDictionary;


@protocol PUPhotoPicker <NSObject>
@property (nonatomic,readonly) unsigned long long savingOptions; 
@property (nonatomic,readonly) NSArray * mediaTypes; 
@property (nonatomic,readonly) BOOL allowsMultipleSelection; 
@property (nonatomic,readonly) unsigned long long multipleSelectionLimit; 
@property (nonatomic,readonly) BOOL requiresPickingConfirmation; 
@property (nonatomic,readonly) BOOL showsFileSizePicker; 
@property (nonatomic,readonly) BOOL showsPrompt; 
@property (nonatomic,readonly) BOOL convertAutoloopsToGIF; 
@property (nonatomic,readonly) NSDictionary * properties; 
@required
-(BOOL)allowsMultipleSelection;
-(NSDictionary *)properties;
-(BOOL)showsFileSizePicker;
-(BOOL)requiresPickingConfirmation;
-(void)presentViewController:(id)arg1;
-(void)performTraitCollectionUpdateUsingData:(id)arg1 completion:(/*^block*/id)arg2;
-(unsigned long long)savingOptions;
-(void)performPhotosSelection;
-(BOOL)convertAutoloopsToGIF;
-(void)didSelectMultipleMediaItemsWithInfoDictionaries:(id)arg1;
-(BOOL)showsPrompt;
-(NSArray *)mediaTypes;
-(void)cancelPhotoPicker;
-(void)didDisplayPhotoPickerSourceType:(long long)arg1;
-(void)didDisplayPhotoPickerPreview;
-(unsigned long long)multipleSelectionLimit;
-(void)didSelectMediaWithInfoDictionary:(id)arg1 allowedHandler:(/*^block*/id)arg2;

@end

