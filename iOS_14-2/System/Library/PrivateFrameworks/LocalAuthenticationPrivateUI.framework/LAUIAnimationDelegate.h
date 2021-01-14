/*
* Generated on Thursday, January 14, 2021 at 2:27:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(id)didStartHandler;
-(void)setDidStartHandler:(id)arg1 ;
-(void)animationDidStart:(id)arg1 ;
-(void)dealloc;
-(void)setDidStopHandler:(id)arg1 ;
-(id)didStopHandler;
@end

