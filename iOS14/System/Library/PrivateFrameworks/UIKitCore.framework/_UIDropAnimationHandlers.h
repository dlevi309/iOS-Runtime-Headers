/*
* Generated on Thursday, January 14, 2021 at 2:20:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)addAnimations:(/*^block*/id)arg1 ;
-(id)init;
-(void)addCompletion:(/*^block*/id)arg1 ;
-(NSArray *)completionHandlers;
-(NSArray *)alongsideAnimationHandlers;
-(void)invokeAllCompletionHandlers;
-(void)resetAllAnimationHandlers;
@end

