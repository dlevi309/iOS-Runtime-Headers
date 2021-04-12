/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IconServices.framework/IconServices
*/


#import <IconServices/IconServices-Structs.h>
@class NSMutableArray;

@interface ISCompositor : NSObject {

	unsigned long long _renderingMode;
	NSMutableArray* _elements;

}

@property (retain) id<ISCompositorRecipe> recipe; 
@property (retain) NSMutableArray * elements;                     //@synthesize elements=_elements - In the implementation block
@property (readonly) BOOL canUseCoreImage; 
@property (assign) unsigned long long renderingMode;              //@synthesize renderingMode=_renderingMode - In the implementation block
+(id)iosmacAppIconRecipe;
+(id)macosIconRecipe;
+(id)iosAppIconRecipe;
+(id)watchAppIconRecipe;
+(id)messagesAppIconRecipeWithBorder:(BOOL)arg1 ;
+(id)macosDocumentRecipe;
+(id)iosmacDocumentRecipe;
+(id)iosAppBadgeDocumentRecipe;
+(id)iosGlyphBadgeDocumentRecipe;
-(id)init;
-(void)reset;
-(NSMutableArray *)elements;
-(unsigned long long)renderingMode;
-(void)addElement:(id)arg1 ;
-(void)drawInContext:(id)arg1 ;
-(void)setRenderingMode:(unsigned long long)arg1 ;
-(void)setElements:(NSMutableArray *)arg1 ;
-(void)clearResources;
-(id<ISCompositorRecipe>)recipe;
-(void)setRecipe:(id<ISCompositorRecipe>)arg1 ;
-(id)imageForSize:(CGSize)arg1 scale:(double)arg2 ;
-(void)addResourcesFromDictionary:(id)arg1 ;
-(void)addElementWithRecipe:(id)arg1 resources:(id)arg2 ;
-(id)initWithRecipe:(id)arg1 ;
-(void)setResource:(id)arg1 named:(id)arg2 ;
-(void)drawElement:(id)arg1 inContext:(id)arg2 ;
-(id)filterForLayer:(id)arg1 scale:(double)arg2 resourceProvider:(id)arg3 ;
-(BOOL)canUseCoreImage;
-(void)drawLayer:(id)arg1 resourceProvider:(id)arg2 inContext:(id)arg3 ;
-(id)maskImageForLayer:(id)arg1 size:(CGSize)arg2 scale:(double)arg3 resourceProvider:(id)arg4 ;
-(id)scaledImageFromContent:(id)arg1 size:(CGSize)arg2 scale:(double)arg3 ;
@end

