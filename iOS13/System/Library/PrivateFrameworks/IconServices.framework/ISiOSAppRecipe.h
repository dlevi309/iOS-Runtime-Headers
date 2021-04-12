/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IconServices.framework/IconServices
*/

#import <IconServices/IconServices-Structs.h>
#import <libobjc.A.dylib/ISCompositorRecipe.h>

@interface ISiOSAppRecipe : NSObject <ISCompositorRecipe> {

	BOOL _shouldDrawBorder;
	unsigned long long _options;

}

@property (assign,nonatomic) unsigned long long options;              //@synthesize options=_options - In the implementation block
@property (assign) BOOL shouldApplyMask; 
@property (assign) BOOL shouldDrawBorder;                             //@synthesize shouldDrawBorder=_shouldDrawBorder - In the implementation block
-(unsigned long long)options;
-(void)setOptions:(unsigned long long)arg1 ;
-(void)setShouldApplyMask:(BOOL)arg1 ;
-(id)layerTreeForSize:(CGSize)arg1 scale:(double)arg2 ;
-(BOOL)shouldDrawBorder;
-(BOOL)shouldApplyMask;
-(void)setShouldDrawBorder:(BOOL)arg1 ;
@end

