/*
* Generated on Thursday, January 14, 2021 at 2:22:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXSmartAlbumCondition.h>

@class NSArray, PXLabeledValue;

@interface PXSmartAlbumFlashCondition : PXSmartAlbumCondition {

	NSArray* _flashFiredValues;

}

@property (nonatomic,readonly) NSArray * flashFiredValues; 
@property (nonatomic,retain) PXLabeledValue * flashFiredValue; 
+(id)defaultSingleQueryForEditingContext:(id)arg1 ;
-(NSArray *)flashFiredValues;
-(PXLabeledValue *)flashFiredValue;
-(void)setFlashFiredValue:(PXLabeledValue *)arg1 ;
@end

