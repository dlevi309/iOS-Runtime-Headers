/*
* Generated on Monday, March 1, 2021 at 2:31:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/CAAnimationDelegate.h>

@class NSString;

@interface PKUIAnimationDelegate : NSObject <CAAnimationDelegate> {

	/*^block*/id _didStartHandler;
	/*^block*/id _completionHandler;

}

@property (nonatomic,copy) id didStartHandler;                      //@synthesize didStartHandler=_didStartHandler - In the implementation block
@property (nonatomic,copy) id completionHandler;                    //@synthesize completionHandler=_completionHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(void)animationDidStart:(id)arg1 ;
-(id)didStartHandler;
-(void)setDidStartHandler:(id)arg1 ;
@end

