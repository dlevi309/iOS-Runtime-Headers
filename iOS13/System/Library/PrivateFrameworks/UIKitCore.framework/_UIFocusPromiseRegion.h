/*
* Generated on Monday, March 1, 2021 at 2:30:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setContentFulfillmentHandler:(id)arg1 ;
-(BOOL)_shouldDrawDebugQuickLookImageWithInfo:(id)arg1 ;
-(void)_drawDebugQuickLookImageWithInfo:(id)arg1 inContext:(CGContextRef)arg2 ;
-(id)_visualRepresentationColor;
-(unsigned long long)_focusableBoundaries;
-(long long)_visualRepresentationPatternType;
-(id)_nextFocusedItemForFocusMovementRequest:(id)arg1 inMap:(id)arg2 ;
-(BOOL)_shouldCropRegionToSearchArea;
-(id)contentFulfillmentHandler;
-(id)_loadContentFocusRegionContainer;
@end

