/*
* Generated on Thursday, January 14, 2021 at 2:27:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
*/

#import <CoreThemeDefinition/TDRenditionSpec.h>

@class NSString, TDNamedColorProduction;

@interface TDTextStyleRenditionSpec : TDRenditionSpec

@property (assign,nonatomic) short alignment; 
@property (nonatomic,copy) NSString * fontName; 
@property (assign,nonatomic) float fontSize; 
@property (assign,nonatomic) float maxPointSize; 
@property (assign,nonatomic) float minPointSize; 
@property (assign,nonatomic) short scalingStyle; 
@property (nonatomic,retain) TDNamedColorProduction * backgroundColor; 
@property (nonatomic,retain) TDNamedColorProduction * foregroundColor; 
-(id)createCSIRepresentationWithCompression:(BOOL)arg1 colorSpaceID:(unsigned long long)arg2 document:(id)arg3 ;
@end

