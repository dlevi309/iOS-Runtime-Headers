/*
* Generated on Monday, March 1, 2021 at 2:35:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/EDCollection.h>
#import <libobjc.A.dylib/OADColorPalette.h>

@class NSString;

@interface EDColorsCollection : EDCollection <OADColorPalette> {

	unsigned long long mDefaultColorsCount;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isSystemColorId:(unsigned long long)arg1 ;
+(int)systemColorIdFromIndex:(unsigned long long)arg1 ;
+(unsigned)xlColorIndexFromTCSystemColorIDEnum:(int)arg1 ;
+(int)oadSchemeColorIdFromThemeIndex:(int)arg1 ;
-(NSString *)description;
-(void)setupDefaults;
-(id)colorWithIndex:(unsigned long long)arg1 ;
-(unsigned long long)addOrEquivalentColorExcludingDefaults:(id)arg1 ;
-(const unsigned*)defaultPalette;
-(void)addColors:(const unsigned*)arg1 count:(unsigned)arg2 defaultColors:(const unsigned*)arg3 defaultCount:(unsigned)arg4 ;
-(unsigned long long)defaultColorsCount;
-(void)addDefaultPalette;
-(id)initWithDefaultSetup:(BOOL)arg1 ;
-(void)addPalette:(const unsigned*)arg1 paletteSize:(unsigned)arg2 paletteX:(const unsigned*)arg3 paletteXSize:(unsigned)arg4 ;
@end

