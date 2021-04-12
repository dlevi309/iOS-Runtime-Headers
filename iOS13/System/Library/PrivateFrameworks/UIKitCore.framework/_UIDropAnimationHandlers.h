/*
* Generated on Monday, March 1, 2021 at 2:30:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKit/UIDragAnimating.h>

@class NSMutableArray, NSArray, NSString;

@interface _UIDropAnimationHandlers : NSObject <UIDragAnimating> {

	NSMutableArray* _alongsideAnimationHandlers;
	NSMutableArray* _completionHandlers;

}

@property (nonatomic,readonly) NSArray * alongsideAnimationHandlers; 
@property (nonatomic,readonly) NSArray * completionHandlers; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)addAnimations:(/*^block*/id)arg1 ;
-(void)addCompletion:(/*^block*/id)arg1 ;
-(NSArray *)alongsideAnimationHandlers;
-(NSArray *)completionHandlers;
-(void)invokeAllCompletionHandlers;
-(void)resetAllAnimationHandlers;
@end

