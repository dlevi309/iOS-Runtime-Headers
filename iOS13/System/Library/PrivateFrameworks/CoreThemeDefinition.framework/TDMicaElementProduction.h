/*
* Generated on Monday, March 1, 2021 at 2:34:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
*/

#import <CoreThemeDefinition/TDElementProduction.h>
#import <libobjc.A.dylib/TDElementAttributes.h>

@class TDMicaAsset;

@interface TDMicaElementProduction : TDElementProduction <TDElementAttributes>

@property (nonatomic,retain) TDMicaAsset * asset; 
-(void)dealloc;
-(id)relativePath;
-(void)copyAttributesInto:(id)arg1 ;
-(id)copyDataFromAttributes;
-(void)setAttributesFromCopyData:(id)arg1 ;
-(id)baseKeySpec;
-(id)dataFromAttributes;
-(void)setAttributesFromData:(id)arg1 ;
-(id)associatedFileURLWithDocument:(id)arg1 ;
-(BOOL)generateRenditionsWithEntityName:(id)arg1 document:(id)arg2 errorDescription:(id*)arg3 ;
-(void)deleteRenditionsInDocument:(id)arg1 shouldDeleteAssetFiles:(BOOL)arg2 ;
@end

