/*
* Generated on Monday, March 1, 2021 at 2:33:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(void)update;
-(SXViewport *)viewport;
-(id)initWithViewport:(id)arg1 ;
-(void)presentOnView:(id)arg1 ;
-(void)viewport:(id)arg1 dynamicBoundsDidChangeFromBounds:(CGRect)arg2 ;
-(void)viewport:(id)arg1 boundsDidChangeFromBounds:(CGRect)arg2 ;
-(void)viewport:(id)arg1 appearStateChangedFromState:(unsigned long long)arg2 ;
-(SXViewportDebuggerOverlayView *)dynamicBoundsView;
-(SXViewportDebuggerOverlayView *)appearStateIndicator;
-(id)colorForAppearState:(unsigned long long)arg1 ;
@end

