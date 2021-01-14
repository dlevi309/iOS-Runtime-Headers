/*
* Generated on Thursday, January 14, 2021 at 2:22:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXSmartAlbumEXIFCondition.h>

@class NSArray, PXLabeledValue;

@interface PXSmartAlbumFocalLengthCondition : PXSmartAlbumEXIFCondition {

	NSArray* _focalLengthValues;

}

@property (nonatomic,readonly) NSArray * focalLengthValues; 
@property (nonatomic,retain) PXLabeledValue * focalLengthValue; 
@property (nonatomic,retain) PXLabeledValue * secondFocalLengthValue; 
+(id)formatter;
+(id)defaultSingleQueryForEditingContext:(id)arg1 ;
-(NSArray *)focalLengthValues;
-(PXLabeledValue *)focalLengthValue;
-(void)setFocalLengthValue:(PXLabeledValue *)arg1 ;
-(PXLabeledValue *)secondFocalLengthValue;
-(void)setSecondFocalLengthValue:(PXLabeledValue *)arg1 ;
@end

