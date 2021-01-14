/*
* Generated on Thursday, January 14, 2021 at 2:22:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXSmartAlbumCondition.h>

@class NSArray, PXLabeledValue;

@interface PXSmartAlbumKeywordCondition : PXSmartAlbumCondition {

	NSArray* _keywordValues;

}

@property (nonatomic,readonly) NSArray * keywordValues; 
@property (nonatomic,retain) PXLabeledValue * keywordValue; 
+(id)defaultSingleQueryForEditingContext:(id)arg1 ;
-(NSArray *)keywordValues;
-(PXLabeledValue *)keywordValue;
-(void)setKeywordValue:(PXLabeledValue *)arg1 ;
@end

