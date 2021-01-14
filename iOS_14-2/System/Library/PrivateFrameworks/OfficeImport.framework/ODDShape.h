/*
* Generated on Thursday, January 14, 2021 at 2:28:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/ODDLayoutObject.h>

@class NSMutableArray;

@interface ODDShape : ODDLayoutObject {

	int mType;
	int mPresetType;
	NSMutableArray* mAdjustments;

}
-(id)init;
-(void)setType:(int)arg1 ;
-(id)description;
-(int)type;
-(id)adjustments;
-(int)presetType;
-(void)setPresetType:(int)arg1 ;
-(void)addAdjustment:(id)arg1 ;
@end

