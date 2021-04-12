/*
* Generated on Thursday, January 14, 2021 at 2:22:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXSmartAlbumEXIFCondition.h>

@class NSArray, PXLabeledValue;

@interface PXSmartAlbumShutterSpeedCondition : PXSmartAlbumEXIFCondition {

	NSArray* _shutterSpeedValues;

}

@property (nonatomic,readonly) NSArray * shutterSpeedValues; 
@property (nonatomic,retain) PXLabeledValue * shutterSpeedValue; 
@property (nonatomic,retain) PXLabeledValue * secondShutterSpeedValue; 
+(id)formatter;
+(id)defaultSingleQueryForEditingContext:(id)arg1 ;
-(NSArray *)shutterSpeedValues;
-(PXLabeledValue *)shutterSpeedValue;
-(void)setShutterSpeedValue:(PXLabeledValue *)arg1 ;
-(PXLabeledValue *)secondShutterSpeedValue;
-(void)setSecondShutterSpeedValue:(PXLabeledValue *)arg1 ;
@end

