/*
* Generated on Monday, March 1, 2021 at 2:31:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
*/

#import <CoreUI/CoreUI-Structs.h>
#import <CoreUI/CUINamedLookup.h>

@class NSDictionary, NSArray;

@interface CUINamedImageAtlas : CUINamedLookup {

	NSDictionary* _images;
	NSArray* _renditions;
	CFArrayRef _atlasImages;

}

@property (nonatomic,readonly) CGImageRef image; 
@property (nonatomic,readonly) CFArrayRef images; 
@property (nonatomic,readonly) double scale; 
@property (nonatomic,readonly) NSArray * imageNames; 
@property (nonatomic,readonly) BOOL completeTextureExtrusion; 
-(void)dealloc;
-(double)scale;
-(CGImageRef)image;
-(CFArrayRef)images;
-(id)_renditionForKey:(id)arg1 inThemeRef:(unsigned long long)arg2 ;
-(BOOL)_dimension1ExistsInKeyFormatForThemeRef:(unsigned long long)arg1 ;
-(id)initWithName:(id)arg1 usingRenditionKey:(id)arg2 withContents:(id)arg3 contentsFromCatalog:(id)arg4 fromTheme:(unsigned long long)arg5 withSourceThemeRef:(unsigned long long)arg6 ;
-(id)imageWithName:(id)arg1 ;
-(NSArray *)imageNames;
-(BOOL)completeTextureExtrusion;
@end

