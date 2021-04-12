/*
* Generated on Monday, March 1, 2021 at 2:33:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSDAbstractLayout.h>
#import <TSReading/TSDAdaptiveLayout.h>

@class TSDLayoutController, TSUPointerKeyDictionary;

@interface TSDRootLayout : TSDAbstractLayout <TSDAdaptiveLayout> {

	TSDLayoutController* mLayoutController;
	BOOL mSupportsAdaptiveLayout;
	TSUPointerKeyDictionary* mShiftedObjects;

}
-(void)dealloc;
-(id)layoutController;
-(BOOL)isRootLayoutForInspectorGeometry;
-(id)initWithLayoutController:(id)arg1 ;
-(id)childLayoutsInRect:(CGRect)arg1 ;
-(BOOL)providesGuidesForChildLayouts;
-(id)layoutsForProvidingGuidesForChildLayouts;
-(id)p_shiftedObjects;
-(void)beginDynamicAdaptiveLayout;
-(void)endDynamicAdaptiveLayout;
-(CGPoint)applyAdaptiveLayoutTo:(id)arg1 info:(id)arg2 offset:(CGPoint)arg3 ;
@end

