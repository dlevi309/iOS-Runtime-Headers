/*
* Generated on Thursday, January 14, 2021 at 2:21:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(void)setCompletionHandler:(id)arg1 ;
-(id)didStartHandler;
-(void)setDidStartHandler:(id)arg1 ;
-(id)completionHandler;
-(void)animationDidStart:(id)arg1 ;
-(void)dealloc;
@end

