/*
* Generated on Thursday, January 14, 2021 at 2:22:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXSmartAlbumCondition.h>

@class NSArray, NSDate, NSNumber, PXLabeledValue;

@interface PXSmartAlbumDateValueCondition : PXSmartAlbumCondition {

	NSArray* _unitValues;

}

@property (nonatomic,retain) NSDate * dateValue; 
@property (nonatomic,retain) NSDate * secondDateValue; 
@property (nonatomic,readonly) BOOL hasNumberOfUnitValue; 
@property (nonatomic,retain) NSNumber * numberOfUnitValue; 
@property (nonatomic,readonly) NSArray * unitValues; 
@property (nonatomic,retain) PXLabeledValue * unitValue; 
-(NSDate *)dateValue;
-(NSDate *)secondDateValue;
-(void)setSecondDateValue:(NSDate *)arg1 ;
-(void)setDateValue:(NSDate *)arg1 ;
-(NSArray *)unitValues;
-(PXLabeledValue *)unitValue;
-(void)setUnitValue:(PXLabeledValue *)arg1 ;
-(void)setComparatorValue:(id)arg1 ;
-(BOOL)hasNumberOfUnitValue;
-(NSNumber *)numberOfUnitValue;
-(void)setNumberOfUnitValue:(NSNumber *)arg1 ;
-(long long)comparatorMode;
@end

