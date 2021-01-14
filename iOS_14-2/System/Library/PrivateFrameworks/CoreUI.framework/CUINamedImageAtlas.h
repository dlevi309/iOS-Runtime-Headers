/*
* Generated on Thursday, January 14, 2021 at 2:21:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(double)scale;
-(CGImageRef)image;
-(CFArrayRef)images;
-(void)dealloc;
-(id)initWithName:(id)arg1 usingRenditionKey:(id)arg2 withContents:(id)arg3 contentsFromCatalog:(id)arg4 fromTheme:(unsigned long long)arg5 withSourceThemeRef:(unsigned long long)arg6 ;
-(id)imageWithName:(id)arg1 ;
-(NSArray *)imageNames;
-(BOOL)completeTextureExtrusion;
@end

