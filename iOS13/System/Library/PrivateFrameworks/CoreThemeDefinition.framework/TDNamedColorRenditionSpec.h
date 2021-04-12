/*
* Generated on Monday, March 1, 2021 at 2:34:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
*/

#import <CoreThemeDefinition/CoreThemeDefinition-Structs.h>
#import <CoreThemeDefinition/TDRenditionSpec.h>

@class NSString;

@interface TDNamedColorRenditionSpec : TDRenditionSpec

@property (assign,nonatomic) long long colorSpaceID; 
@property (assign,nonatomic) double alpha; 
@property (assign,nonatomic) double red; 
@property (assign,nonatomic) double green; 
@property (assign,nonatomic) double blue; 
@property (nonatomic,retain) NSString * systemColorName; 
-(id)createCSIRepresentationWithCompression:(BOOL)arg1 colorSpaceID:(unsigned long long)arg2 document:(id)arg3 ;
-(void)setColorPropertiesFromCGColor:(CGColorRef)arg1 ;
@end

