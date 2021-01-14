/*
* Generated on Thursday, January 14, 2021 at 2:27:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/LocalAuthenticationPrivateUI.framework/LocalAuthenticationPrivateUI
*/


@protocol GlyphMethods, OS_dispatch_queue;
#import <LocalAuthenticationPrivateUI/LocalAuthenticationPrivateUI-Structs.h>
@class UIView, NSObject;

@interface LAPKGlyphWrapper : NSObject {

	BOOL _fastAnimations;
	BOOL _grayedOut;
	UIView* _view;
	UIView*<GlyphMethods> _glyphView;
	UIView*<GlyphMethods> _idleTouchID;
	NSObject*<OS_dispatch_queue> _glyphQueue;

}

@property (nonatomic,readonly) UIView*<GlyphMethods> glyphView;                      //@synthesize glyphView=_glyphView - In the implementation block
@property (nonatomic,readonly) UIView*<GlyphMethods> idleTouchID;                    //@synthesize idleTouchID=_idleTouchID - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> glyphQueue;              //@synthesize glyphQueue=_glyphQueue - In the implementation block
@property (nonatomic,readonly) UIView * view;                                        //@synthesize view=_view - In the implementation block
@property (assign,nonatomic) BOOL fastAnimations;                                    //@synthesize fastAnimations=_fastAnimations - In the implementation block
@property (assign,nonatomic) BOOL grayedOut;                                         //@synthesize grayedOut=_grayedOut - In the implementation block
+(id)glyphWithStyle:(long long)arg1 frame:(CGRect)arg2 ;
+(Class)_loadClassFromString:(id)arg1 ;
+(void*)_loadPKUI;
-(UIView*<GlyphMethods>)glyphView;
-(UIView *)view;
-(BOOL)fastAnimations;
-(void)setFastAnimations:(BOOL)arg1 ;
-(void)setState:(long long)arg1 idleTouchID:(BOOL)arg2 animated:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)initWithGlyphView:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)glyphQueue;
-(UIView*<GlyphMethods>)idleTouchID;
-(double)_minimumAnimationDurationForState:(long long)arg1 ;
-(void)setGrayedOut:(BOOL)arg1 ;
-(BOOL)grayedOut;
@end

