/*
* Generated on Monday, March 1, 2021 at 2:34:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
*/

#import <CoreThemeDefinition/CoreThemeDefinition-Structs.h>
#import <CoreThemeDefinition/TDAsset.h>

@class NSSet;

@interface TDTextureAsset : TDAsset {

	int exifOrientation;

}

@property (nonatomic,retain) NSSet * renditions; 
@property (assign,nonatomic) int exifOrientation; 
-(int)exifOrientation;
-(void)setExifOrientation:(int)arg1 ;
-(void)_logError:(id)arg1 ;
-(CGSize)sourceImageSizeWithDocument:(id)arg1 ;
-(id)sourceImageWithDocument:(id)arg1 ;
@end

