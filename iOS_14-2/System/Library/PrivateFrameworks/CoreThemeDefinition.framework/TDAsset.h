/*
* Generated on Thursday, January 14, 2021 at 2:27:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setScaleFactor:(unsigned)arg1 ;
-(unsigned)scaleFactor;
-(NSString *)baseName;
-(id)fileURLWithDocument:(id)arg1 ;
-(BOOL)hasProduction;
-(id)_sourceRelativePathComponents;
-(id)sourceRelativePath;
-(void)setHasProduction:(id)arg1 ;
@end

