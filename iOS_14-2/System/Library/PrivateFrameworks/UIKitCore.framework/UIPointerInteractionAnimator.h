/*
* Generated on Thursday, January 14, 2021 at 2:20:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKit/UIPointerInteractionAnimating.h>

@class NSString, NSMutableArray;

@interface UIPointerInteractionAnimator : NSObject <UIPointerInteractionAnimating> {

	NSString* _debugName;
	NSMutableArray* _animations;
	NSMutableArray* _completions;

}

@property (nonatomic,copy) NSString * debugName;                        //@synthesize debugName=_debugName - In the implementation block
@property (nonatomic,retain) NSMutableArray * animations;               //@synthesize animations=_animations - In the implementation block
@property (nonatomic,retain) NSMutableArray * completions;              //@synthesize completions=_completions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSMutableArray *)animations;
-(void)setDebugName:(NSString *)arg1 ;
-(void)addAnimations:(/*^block*/id)arg1 ;
-(void)addCompletion:(/*^block*/id)arg1 ;
-(void)setAnimations:(NSMutableArray *)arg1 ;
-(void)performAllCompletions:(BOOL)arg1 ;
-(void)performAllAnimations;
-(NSMutableArray *)completions;
-(NSString *)debugName;
-(void)setCompletions:(NSMutableArray *)arg1 ;
@end

