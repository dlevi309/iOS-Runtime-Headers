/*
* Generated on Thursday, January 14, 2021 at 2:22:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PLManagedObject.h>

@class NSNumber, NSString, NSDate, PLAdditionalAssetAttributes;

@interface PLUnmanagedAdjustment : PLManagedObject

@property (nonatomic,retain) NSNumber * adjustmentBaseImageFormat; 
@property (nonatomic,retain) NSString * adjustmentFormatIdentifier; 
@property (nonatomic,retain) NSString * adjustmentFormatVersion; 
@property (nonatomic,retain) NSDate * adjustmentTimestamp; 
@property (nonatomic,retain) NSString * editorLocalizedName; 
@property (nonatomic,retain) NSString * otherAdjustmentsFingerprint; 
@property (nonatomic,retain) NSString * similarToOriginalAdjustmentsFingerprint; 
@property (nonatomic,retain) NSString * uuid; 
@property (nonatomic,retain) PLAdditionalAssetAttributes * assetAttributes; 
@property (assign,nonatomic) unsigned adjustmentRenderTypes; 
+(id)entityName;
+(id)addUnmanagedAdjustmentFromXMPDataIfNeededForAsset:(id)arg1 ;
+(id)_convertRedEyeCorrections:(id)arg1 withOrientation:(long long)arg2 ;
+(id)_convertRedEyeCorrection:(id)arg1 withOrientation:(long long)arg2 ;
+(id)copyUnmanagedAdjustmentFromSourceAsset:(id)arg1 forPlaceholderAsset:(id)arg2 inLibrary:(id)arg3 error:(id*)arg4 ;
-(id)payloadID;
-(BOOL)supportsCloudUpload;
-(id)payloadForChangedKeys:(id)arg1 ;
-(void)awakeFromInsert;
-(void)willSave;
-(BOOL)isSyncableChange;
@end

