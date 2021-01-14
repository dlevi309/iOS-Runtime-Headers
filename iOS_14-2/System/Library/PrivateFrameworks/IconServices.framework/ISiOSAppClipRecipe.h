/*
* Generated on Thursday, January 14, 2021 at 2:24:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IconServices.framework/IconServices
*/

#import <IconServices/IconServices-Structs.h>
#import <libobjc.A.dylib/ISCompositorRecipe.h>

@interface ISiOSAppClipRecipe : NSObject <ISCompositorRecipe> {

	BOOL _shouldOnlyDrawBorder;
	BOOL _shouldDrawPlaceholder;

}

@property (assign) BOOL shouldOnlyDrawBorder;               //@synthesize shouldOnlyDrawBorder=_shouldOnlyDrawBorder - In the implementation block
@property (assign) BOOL shouldDrawPlaceholder;              //@synthesize shouldDrawPlaceholder=_shouldDrawPlaceholder - In the implementation block
-(id)blurRadius;
-(id)layerTreeForSize:(CGSize)arg1 scale:(double)arg2 ;
-(id)appRect;
-(BOOL)shouldOnlyDrawBorder;
-(void)setShouldOnlyDrawBorder:(BOOL)arg1 ;
-(BOOL)shouldDrawPlaceholder;
-(void)setShouldDrawPlaceholder:(BOOL)arg1 ;
@end

