/*
* Generated on Thursday, January 14, 2021 at 2:20:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIFocusRegion.h>

@protocol _UIFocusRegionContainer;
@interface _UIFocusPromiseRegion : _UIFocusRegion {

	id<_UIFocusRegionContainer> _contentFocusRegionContainer;
	/*^block*/id _contentFulfillmentHandler;

}

@property (nonatomic,copy) id contentFulfillmentHandler;              //@synthesize contentFulfillmentHandler=_contentFulfillmentHandler - In the implementation block
-(id)_visualRepresentationColor;
-(unsigned long long)_focusableBoundaries;
-(long long)_visualRepresentationPatternType;
-(id)_nextFocusedItemForFocusMovementRequest:(id)arg1 inMap:(id)arg2 ;
-(BOOL)_shouldCropRegionToSearchArea;
-(id)contentFulfillmentHandler;
-(id)_loadContentFocusRegionContainer;
-(void)setContentFulfillmentHandler:(id)arg1 ;
-(BOOL)_shouldDrawDebugQuickLookImageWithInfo:(id)arg1 ;
-(void)_drawDebugQuickLookImageWithInfo:(id)arg1 inContext:(CGContextRef)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

