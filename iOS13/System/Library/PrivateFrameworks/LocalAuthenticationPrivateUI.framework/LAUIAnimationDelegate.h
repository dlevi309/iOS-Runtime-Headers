/*
* Generated on Monday, March 1, 2021 at 2:35:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/LocalAuthenticationPrivateUI.framework/LocalAuthenticationPrivateUI
*/

#import <libobjc.A.dylib/CAAnimationDelegate.h>

@class NSString;

@interface LAUIAnimationDelegate : NSObject <CAAnimationDelegate> {

	/*^block*/id _didStartHandler;
	/*^block*/id _didStopHandler;

}

@property (nonatomic,copy) id didStartHandler;                      //@synthesize didStartHandler=_didStartHandler - In the implementation block
@property (nonatomic,copy) id didStopHandler;                       //@synthesize didStopHandler=_didStopHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(void)animationDidStart:(id)arg1 ;
-(id)didStartHandler;
-(void)setDidStartHandler:(id)arg1 ;
-(void)setDidStopHandler:(id)arg1 ;
-(id)didStopHandler;
@end

