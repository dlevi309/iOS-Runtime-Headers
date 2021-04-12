/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <Home/Home-Structs.h>
#import <libobjc.A.dylib/NAEquatable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class HFColorCollection, UIColor, NSString;

@interface HFColorPaletteColor : NSObject <NAEquatable, NSCopying> {

	HFColorCollection* _colorCollection;

}

@property (nonatomic,readonly) HFColorCollection * colorCollection;              //@synthesize colorCollection=_colorCollection - In the implementation block
@property (nonatomic,readonly) UIColor * UIColor; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithRed:(float)arg1 green:(float)arg2 blue:(float)arg3 ;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(id)initWithUIColor:(id)arg1 ;
-(UIColor *)UIColor;
-(id)initWithColorCollection:(id)arg1 ;
-(HFColorCollection *)colorCollection;
-(BOOL)isSimilarToColor:(id)arg1 ;
-(id)dictionaryRepresentationWithPreferredPaletteType:(unsigned long long)arg1 ;
-(id)colorByAdjustingToColorProfile:(id)arg1 ;
-(BOOL)isSimilarToColor:(id)arg1 ignoreTemperature:(BOOL)arg2 ;
@end

