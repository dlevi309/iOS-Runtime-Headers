/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/


#import <NewsUI/NewsUI-Structs.h>
@interface NULayoutResolver : NSObject {

	NULayoutOptions _options;

}

@property (nonatomic,readonly) NULayoutOptions options;              //@synthesize options=_options - In the implementation block
-(NULayoutOptions)options;
-(id)initWithOptions:(NULayoutOptions)arg1 ;
-(void)layoutComponents:(id)arg1 inBounds:(CGRect)arg2 originOffset:(CGPoint)arg3 layoutContext:(id)arg4 ;
-(UIEdgeInsets)adjustedEdgeInsetsForOptions:(NULayoutOptions)arg1 ;
-(id)adjustedComponentsForComponents:(id)arg1 options:(NULayoutOptions)arg2 ;
@end

