/*
* Generated on Monday, March 1, 2021 at 2:35:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(int)type;
-(void)setType:(int)arg1 ;
-(id)adjustments;
-(int)presetType;
-(void)setPresetType:(int)arg1 ;
-(void)addAdjustment:(id)arg1 ;
@end

