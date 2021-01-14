/*
* Generated on Thursday, January 14, 2021 at 2:22:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXSmartAlbumCondition.h>

@class NSArray, PXLabeledValue;

@interface PXSmartAlbumPhotoCondition : PXSmartAlbumCondition {

	NSArray* _photoTypeValues;

}

@property (nonatomic,readonly) NSArray * photoTypeValues; 
@property (nonatomic,retain) PXLabeledValue * photoTypeValue; 
+(id)defaultSingleQueryForEditingContext:(id)arg1 ;
-(NSArray *)photoTypeValues;
-(PXLabeledValue *)photoTypeValue;
-(void)setPhotoTypeValue:(PXLabeledValue *)arg1 ;
@end

