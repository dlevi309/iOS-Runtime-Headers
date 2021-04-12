/*
* Generated on Monday, March 1, 2021 at 2:31:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <libobjc.A.dylib/CAAnimationDelegate.h>

@class NSString;

@interface MKCALayerCompletionDelegate : NSObject <CAAnimationDelegate> {

	/*^block*/id _completion;

}

@property (nonatomic,copy) id completion;                           //@synthesize completion=_completion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)delegateWithCompletion:(/*^block*/id)arg1 ;
-(void)setCompletion:(id)arg1 ;
-(id)completion;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
@end

