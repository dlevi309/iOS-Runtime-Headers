/*
* Generated on Monday, March 1, 2021 at 2:30:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UILayerHostView.h>

@class _UIHostedWindowHostingHandle;

@interface _UIRemoteView : _UILayerHostView {

	_UIHostedWindowHostingHandle* _hostedWindowHostingHandle;
	/*^block*/id _tintColorDidChangeHandler;

}

@property (nonatomic,copy) id tintColorDidChangeHandler;                                            //@synthesize tintColorDidChangeHandler=_tintColorDidChangeHandler - In the implementation block
@property (assign,setter=_setInheritsSecurity:,nonatomic) BOOL _inheritsSecurity; 
@property (nonatomic,retain) _UIHostedWindowHostingHandle * hostedWindowHostingHandle;              //@synthesize hostedWindowHostingHandle=_hostedWindowHostingHandle - In the implementation block
+(BOOL)_requiresWindowTouches;
+(id)viewWithHostedWindowHostingHandle:(id)arg1 ;
-(void)tintColorDidChange;
-(id)_hitTest:(CGPoint)arg1 withEvent:(id)arg2 windowServerHitTestWindow:(id)arg3 ;
-(id)initWithFrame:(CGRect)arg1 pid:(int)arg2 contextID:(unsigned)arg3 ;
-(void)applyTransformUndoingRemoteRootLayerTransform:(CGAffineTransform)arg1 frame:(CGRect)arg2 ;
-(id)tintColorDidChangeHandler;
-(void)setHostedWindowHostingHandle:(_UIHostedWindowHostingHandle *)arg1 ;
-(void)_setInheritsSecurity:(BOOL)arg1 ;
-(BOOL)_inheritsSecurity;
-(_UIHostedWindowHostingHandle *)hostedWindowHostingHandle;
-(void)setTintColorDidChangeHandler:(id)arg1 ;
@end

