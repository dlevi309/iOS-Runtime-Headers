/*
* Generated on Thursday, January 14, 2021 at 2:22:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXSmartAlbumEXIFCondition.h>

@class NSArray, PXLabeledValue;

@interface PXSmartAlbumISOCondition : PXSmartAlbumEXIFCondition {

	NSArray* _ISOValues;

}

@property (nonatomic,readonly) NSArray * ISOValues; 
@property (nonatomic,retain) PXLabeledValue * ISOValue; 
@property (nonatomic,retain) PXLabeledValue * secondISOValue; 
+(id)formatter;
+(id)defaultSingleQueryForEditingContext:(id)arg1 ;
-(PXLabeledValue *)ISOValue;
-(NSArray *)ISOValues;
-(void)setISOValue:(PXLabeledValue *)arg1 ;
-(PXLabeledValue *)secondISOValue;
-(void)setSecondISOValue:(PXLabeledValue *)arg1 ;
@end

