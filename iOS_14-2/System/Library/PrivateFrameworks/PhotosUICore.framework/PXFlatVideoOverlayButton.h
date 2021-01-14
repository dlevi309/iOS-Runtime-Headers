/*
* Generated on Thursday, January 14, 2021 at 2:22:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <UIKitCore/UIButton.h>
#import <libobjc.A.dylib/PXVideoOverlayButton.h>

@interface PXFlatVideoOverlayButton : UIButton <PXVideoOverlayButton> {

	long long _style;
	id _target;
	SEL _action;
	BOOL _showAsPause;
	BOOL __didConfigureForPause;

}

@property (assign,setter=_setDidConfigureForPause:,nonatomic) BOOL _didConfigureForPause;              //@synthesize _didConfigureForPause=__didConfigureForPause - In the implementation block
@property (assign,nonatomic) BOOL showAsPause;                                                         //@synthesize showAsPause=_showAsPause - In the implementation block
-(id)initWithStyle:(long long)arg1 ;
-(void)setShowAsPause:(BOOL)arg1 ;
-(BOOL)_didConfigureForPause;
-(BOOL)showAsPause;
-(void)_handleTap:(id)arg1 ;
-(void)setTarget:(id)arg1 action:(SEL)arg2 ;
-(void)_setDidConfigureForPause:(BOOL)arg1 ;
-(long long)style;
@end

