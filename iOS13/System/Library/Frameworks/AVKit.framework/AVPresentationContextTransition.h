/*
* Generated on Monday, March 1, 2021 at 2:31:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
*/


#import <AVKit/AVKit-Structs.h>
@interface AVPresentationContextTransition : NSObject {

	BOOL _wasInitiallyInteractive;
	BOOL _hasAVKitAnimator;
	BOOL _wasCancelledWithInactiveScene;
	unsigned long long _presenterSupportedOrientations;
	long long _initialInterfaceOrientation;
	long long _finalInterfaceOrientation;

}

@property (assign,nonatomic) BOOL wasInitiallyInteractive;                                   //@synthesize wasInitiallyInteractive=_wasInitiallyInteractive - In the implementation block
@property (assign,nonatomic) BOOL hasAVKitAnimator;                                          //@synthesize hasAVKitAnimator=_hasAVKitAnimator - In the implementation block
@property (assign,nonatomic) BOOL wasCancelledWithInactiveScene;                             //@synthesize wasCancelledWithInactiveScene=_wasCancelledWithInactiveScene - In the implementation block
@property (assign,nonatomic) unsigned long long presenterSupportedOrientations;              //@synthesize presenterSupportedOrientations=_presenterSupportedOrientations - In the implementation block
@property (assign,nonatomic) long long initialInterfaceOrientation;                          //@synthesize initialInterfaceOrientation=_initialInterfaceOrientation - In the implementation block
@property (assign,nonatomic) long long finalInterfaceOrientation;                            //@synthesize finalInterfaceOrientation=_finalInterfaceOrientation - In the implementation block
@property (nonatomic,readonly) BOOL isRotated; 
@property (nonatomic,readonly) long long interfaceRotation; 
@property (nonatomic,readonly) CGAffineTransform rotationTransform; 
@property (nonatomic,readonly) CGAffineTransform counterRotationTransform; 
-(BOOL)isRotated;
-(long long)initialInterfaceOrientation;
-(void)setInitialInterfaceOrientation:(long long)arg1 ;
-(BOOL)wasInitiallyInteractive;
-(CGAffineTransform)rotationTransform;
-(CGAffineTransform)counterRotationTransform;
-(long long)interfaceRotation;
-(BOOL)presenterSupportsOrientation:(long long)arg1 ;
-(void)setWasInitiallyInteractive:(BOOL)arg1 ;
-(BOOL)hasAVKitAnimator;
-(void)setHasAVKitAnimator:(BOOL)arg1 ;
-(BOOL)wasCancelledWithInactiveScene;
-(void)setWasCancelledWithInactiveScene:(BOOL)arg1 ;
-(unsigned long long)presenterSupportedOrientations;
-(void)setPresenterSupportedOrientations:(unsigned long long)arg1 ;
-(long long)finalInterfaceOrientation;
-(void)setFinalInterfaceOrientation:(long long)arg1 ;
@end

