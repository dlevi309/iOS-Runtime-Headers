/*
* Generated on Thursday, January 14, 2021 at 2:28:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(OADColorScheme *)scheme;
-(id<OADColorPalette>)palette;
-(OADColorMap *)map;
-(unsigned long long)hash;
-(void)setPalette:(id<OADColorPalette>)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithScheme:(id)arg1 map:(id)arg2 palette:(id)arg3 ;
-(void)applyThemeOverrides:(id)arg1 colorMapOverride:(id)arg2 ;
@end

