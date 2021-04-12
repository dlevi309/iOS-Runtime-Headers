/*
* Generated on Monday, March 1, 2021 at 2:35:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@protocol OADColorPalette;
@class OADColorScheme, OADColorMap;

@interface OADColorContext : NSObject {

	OADColorScheme* mScheme;
	OADColorMap* mMap;
	id<OADColorPalette> mPalette;

}

@property (nonatomic,readonly) OADColorScheme * scheme; 
@property (nonatomic,readonly) OADColorMap * map; 
@property (nonatomic,retain) id<OADColorPalette> palette; 
+(id)colorContextWithScheme:(id)arg1 map:(id)arg2 palette:(id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(OADColorScheme *)scheme;
-(OADColorMap *)map;
-(id<OADColorPalette>)palette;
-(void)setPalette:(id<OADColorPalette>)arg1 ;
-(id)initWithScheme:(id)arg1 map:(id)arg2 palette:(id)arg3 ;
-(void)applyThemeOverrides:(id)arg1 colorMapOverride:(id)arg2 ;
@end

