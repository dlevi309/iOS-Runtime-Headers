/*
* Generated on Thursday, January 14, 2021 at 2:22:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXSmartAlbumEXIFCondition.h>

@class NSArray, PXLabeledValue;

@interface PXSmartAlbumApertureCondition : PXSmartAlbumEXIFCondition {

	NSArray* _apertureValues;

}

@property (nonatomic,readonly) NSArray * apertureValues; 
@property (nonatomic,retain) PXLabeledValue * apertureValue; 
@property (nonatomic,retain) PXLabeledValue * secondApertureValue; 
+(id)formatter;
+(id)defaultSingleQueryForEditingContext:(id)arg1 ;
-(PXLabeledValue *)apertureValue;
-(void)setApertureValue:(PXLabeledValue *)arg1 ;
-(NSArray *)apertureValues;
-(PXLabeledValue *)secondApertureValue;
-(void)setSecondApertureValue:(PXLabeledValue *)arg1 ;
@end

