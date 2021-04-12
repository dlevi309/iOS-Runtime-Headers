/*
* Generated on Monday, March 1, 2021 at 2:34:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

