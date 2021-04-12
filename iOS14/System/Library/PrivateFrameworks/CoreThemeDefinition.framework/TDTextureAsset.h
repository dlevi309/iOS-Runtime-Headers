/*
* Generated on Thursday, January 14, 2021 at 2:27:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setExifOrientation:(int)arg1 ;
-(int)exifOrientation;
-(void)_logError:(id)arg1 ;
-(CGSize)sourceImageSizeWithDocument:(id)arg1 ;
-(id)sourceImageWithDocument:(id)arg1 ;
@end

