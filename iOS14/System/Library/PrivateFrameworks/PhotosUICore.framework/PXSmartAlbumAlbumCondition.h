/*
* Generated on Thursday, January 14, 2021 at 2:22:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXSmartAlbumCondition.h>

@class NSArray, PXLabeledValue;

@interface PXSmartAlbumAlbumCondition : PXSmartAlbumCondition {

	NSArray* _albumValues;

}

@property (nonatomic,retain) PXLabeledValue * albumValue; 
@property (nonatomic,readonly) BOOL albumValueIsOrphaned; 
+(id)anyAlbumValue;
+(id)defaultSingleQueryForEditingContext:(id)arg1 ;
-(id)_albumValues;
-(BOOL)albumValueIsOrphaned;
-(void)setAlbumValue:(PXLabeledValue *)arg1 ;
-(PXLabeledValue *)albumValue;
@end

