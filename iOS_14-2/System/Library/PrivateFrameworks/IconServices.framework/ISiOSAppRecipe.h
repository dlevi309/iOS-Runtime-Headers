/*
* Generated on Thursday, January 14, 2021 at 2:24:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)shouldDrawBorder;
-(void)setShouldApplyMask:(BOOL)arg1 ;
-(unsigned long long)options;
-(void)setOptions:(unsigned long long)arg1 ;
-(void)setShouldDrawBorder:(BOOL)arg1 ;
-(id)layerTreeForSize:(CGSize)arg1 scale:(double)arg2 ;
-(BOOL)shouldApplyMask;
@end

