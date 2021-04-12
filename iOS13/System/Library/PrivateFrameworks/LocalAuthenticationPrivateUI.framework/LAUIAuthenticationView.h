/*
* Generated on Monday, March 1, 2021 at 2:35:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/LocalAuthenticationPrivateUI.framework/LocalAuthenticationPrivateUI
*/

#import <LocalAuthenticationPrivateUI/LocalAuthenticationPrivateUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/LAUIAuthenticationCoreDelegate.h>
#import <libobjc.A.dylib/LAUIAuthentication.h>

@protocol LAUIAuthenticationDelegate;
@class LAUIAuthenticationCore, LAPKGlyphWrapper, NSString;

@interface LAUIAuthenticationView : UIView <LAUIAuthenticationCoreDelegate, LAUIAuthentication> {

	BOOL _idleWhenDone;
	BOOL _fastAnimations;
	id<LAUIAuthenticationDelegate> _delegate;
	long long _glyphStyle;
	long long _style;
	LAUIAuthenticationCore* _authenticationCore;
	LAPKGlyphWrapper* _glyphWrapper;

}

@property (nonatomic,readonly) LAUIAuthenticationCore * authenticationCore;               //@synthesize authenticationCore=_authenticationCore - In the implementation block
@property (nonatomic,readonly) LAPKGlyphWrapper * glyphWrapper;                           //@synthesize glyphWrapper=_glyphWrapper - In the implementation block
@property (assign,nonatomic,__weak) id<LAUIAuthenticationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long glyphStyle;                                        //@synthesize glyphStyle=_glyphStyle - In the implementation block
@property (assign,nonatomic) long long style;                                             //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) BOOL idleWhenDone;                                           //@synthesize idleWhenDone=_idleWhenDone - In the implementation block
@property (assign,nonatomic) BOOL fastAnimations;                                         //@synthesize fastAnimations=_fastAnimations - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CGRect)defaultRect;
-(id)initWithCoder:(id)arg1 ;
-(id<LAUIAuthenticationDelegate>)delegate;
-(void)setDelegate:(id<LAUIAuthenticationDelegate>)arg1 ;
-(long long)style;
-(void)setStyle:(long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)didMoveToSuperview;
-(void)didMoveToWindow;
-(void)willMoveToSuperview:(id)arg1 ;
-(id)localizedCallerName;
-(void)_setupView;
-(BOOL)disableMechanism:(unsigned long long)arg1 error:(id*)arg2 ;
-(BOOL)enableMechanism:(unsigned long long)arg1 error:(id*)arg2 ;
-(id)initWithFrame:(CGRect)arg1 mechanisms:(unsigned long long)arg2 ;
-(void)authenticationResult:(id)arg1 error:(id)arg2 context:(id)arg3 ;
-(void)biometricNoMatch;
-(id)callerIconBundlePath;
-(void)_setupMechanisms:(unsigned long long)arg1 ;
-(id)initWithMechanisms:(unsigned long long)arg1 ;
-(LAUIAuthenticationCore *)authenticationCore;
-(BOOL)isMechanismAvailable:(unsigned long long)arg1 error:(id*)arg2 ;
-(BOOL)isMechanismEnabled:(unsigned long long)arg1 ;
-(BOOL)isMechanismActive:(unsigned long long)arg1 ;
-(BOOL)fastAnimations;
-(void)setFastAnimations:(BOOL)arg1 ;
-(LAPKGlyphWrapper *)glyphWrapper;
-(void)tappedFaceID:(id)arg1 ;
-(BOOL)idleWhenDone;
-(void)notification:(long long)arg1 original:(id)arg2 mechanism:(unsigned long long)arg3 ;
-(void)biometryState:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(long long)glyphStyle;
-(void)setGlyphStyle:(long long)arg1 ;
-(void)setIdleWhenDone:(BOOL)arg1 ;
@end

