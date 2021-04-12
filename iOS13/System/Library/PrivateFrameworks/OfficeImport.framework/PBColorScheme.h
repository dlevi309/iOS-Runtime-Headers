/*
* Generated on Monday, March 1, 2021 at 2:35:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface PBColorScheme : NSObject
+(int)oadSchemeColorValueForEshSchemeColorIndex:(unsigned short)arg1 ;
+(void)addColorWithIndex:(int)arg1 fromScheme:(PptColorSchemeAtom*)arg2 colorTransform:(/*function pointer*/void*)arg3 atIndex:(int)arg4 inScheme:(id)arg5 ;
+(void)addColorWithIndex:(int)arg1 fromScheme:(PptColorSchemeAtom*)arg2 atIndex:(int)arg3 inScheme:(id)arg4 ;
+(unsigned short)eshSchemeColorIndexForOADSchemeColorValue:(int)arg1 ;
+(void)readFromColorScheme:(PptColorSchemeAtom*)arg1 toColorScheme:(id)arg2 colorMap:(id)arg3 state:(id)arg4 ;
@end

