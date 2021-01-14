/*
* Generated on Thursday, January 14, 2021 at 2:24:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/Silex-Structs.h>
#import <libobjc.A.dylib/SXViewportChangeListener.h>

@class SXViewport, SXViewportDebuggerOverlayView, NSString;

@interface SXViewportDebugger : NSObject <SXViewportChangeListener> {

	SXViewport* _viewport;
	SXViewportDebuggerOverlayView* _dynamicBoundsView;
	SXViewportDebuggerOverlayView* _appearStateIndicator;

}

@property (nonatomic,readonly) SXViewport * viewport;                                             //@synthesize viewport=_viewport - In the implementation block
@property (nonatomic,readonly) SXViewportDebuggerOverlayView * dynamicBoundsView;                 //@synthesize dynamicBoundsView=_dynamicBoundsView - In the implementation block
@property (nonatomic,readonly) SXViewportDebuggerOverlayView * appearStateIndicator;              //@synthesize appearStateIndicator=_appearStateIndicator - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(SXViewport *)viewport;
-(void)viewport:(id)arg1 appearStateChangedFromState:(unsigned long long)arg2 ;
-(void)viewport:(id)arg1 boundsDidChangeFromBounds:(CGRect)arg2 ;
-(void)viewport:(id)arg1 dynamicBoundsDidChangeFromBounds:(CGRect)arg2 ;
-(void)update;
-(void)dealloc;
-(SXViewportDebuggerOverlayView *)dynamicBoundsView;
-(SXViewportDebuggerOverlayView *)appearStateIndicator;
-(id)colorForAppearState:(unsigned long long)arg1 ;
@end

