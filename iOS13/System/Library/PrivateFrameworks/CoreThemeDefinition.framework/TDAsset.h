/*
* Generated on Monday, March 1, 2021 at 2:34:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
*/

#import <CoreData/NSManagedObject.h>

@class NSString, TDThemeBitSource, TDTemplateRenderingMode;

@interface TDAsset : NSManagedObject {

	unsigned _scaleFactor;

}

@property (nonatomic,retain) NSString * name; 
@property (nonatomic,retain) NSString * category; 
@property (nonatomic,retain) TDThemeBitSource * source; 
@property (nonatomic,readonly) NSString * baseName; 
@property (nonatomic,retain) TDTemplateRenderingMode * templateRenderingMode; 
+(unsigned)scaleFactorFromImageFilename:(id)arg1 ;
+(id)_filenameRegex;
+(BOOL)isTemplateFromImageFilename:(id)arg1 ;
+(long long)idiomFromImageFilename:(id)arg1 ;
+(long long)subtypeFromImageFilename:(id)arg1 ;
-(unsigned)scaleFactor;
-(void)setScaleFactor:(unsigned)arg1 ;
-(NSString *)baseName;
-(id)fileURLWithDocument:(id)arg1 ;
-(BOOL)hasProduction;
-(id)_sourceRelativePathComponents;
-(id)sourceRelativePath;
-(void)setHasProduction:(id)arg1 ;
@end

