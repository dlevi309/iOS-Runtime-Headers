/*
* Generated on Thursday, January 14, 2021 at 2:27:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClipUIServices.framework/ClipUIServices
*/

#import <libobjc.A.dylib/CAAnimationDelegate.h>

@class NSString;

@interface CPSCAAnimationBlockDelegate : NSObject <CAAnimationDelegate> {

	id _referenceToSelf;
	/*^block*/id _didStartHandler;
	/*^block*/id _didStopHandler;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)attachToAnimation:(id)arg1 didStartHandler:(/*^block*/id)arg2 didStopHandler:(/*^block*/id)arg3 ;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(void)animationDidStart:(id)arg1 ;
@end

