/*
* Generated on Thursday, January 14, 2021 at 2:27:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
*/

#import <CoreThemeDefinition/TDElementProduction.h>
#import <libobjc.A.dylib/TDElementAttributes.h>

@class TDMicaAsset;

@interface TDMicaElementProduction : TDElementProduction <TDElementAttributes>

@property (nonatomic,retain) TDMicaAsset * asset; 
-(id)relativePath;
-(void)dealloc;
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

