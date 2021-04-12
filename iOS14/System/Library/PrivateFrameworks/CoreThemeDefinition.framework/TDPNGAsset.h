/*
* Generated on Thursday, January 14, 2021 at 2:27:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
*/

#import <CoreThemeDefinition/CoreThemeDefinition-Structs.h>
#import <CoreThemeDefinition/TDAsset.h>

@class NSSet;

@interface TDPNGAsset : TDAsset {

	int _exifOrientation;
	unsigned _fileScaleFactor;

}

@property (nonatomic,retain) NSSet * renditions; 
@property (assign,nonatomic) BOOL rawData; 
-(int)exifOrientation;
-(void)_logError:(id)arg1 ;
-(unsigned)fileScaleFactor;
-(CGSize)sourceImageSizeWithDocument:(id)arg1 ;
-(id)sourceImageWithDocument:(id)arg1 ;
-(void)setFileScaleFactor:(unsigned)arg1 ;
-(BOOL)hasCursorProduction;
-(BOOL)hasProduction;
@end

