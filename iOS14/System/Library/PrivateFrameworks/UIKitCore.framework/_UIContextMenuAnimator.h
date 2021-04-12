/*
* Generated on Thursday, January 14, 2021 at 2:20:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKit/UIContextMenuInteractionCommitAnimating.h>
#import <UIKit/UIContextMenuInteractionAnimating.h>

@class UIViewController, NSMutableArray, NSString;

@interface _UIContextMenuAnimator : NSObject <UIContextMenuInteractionCommitAnimating, UIContextMenuInteractionAnimating> {

	long long _preferredCommitStyle;
	UIViewController* _previewViewController;
	NSMutableArray* _animations;
	NSMutableArray* _completions;

}

@property (nonatomic,readonly) BOOL hasAnyActions; 
@property (nonatomic,readonly) NSMutableArray * animations;                           //@synthesize animations=_animations - In the implementation block
@property (nonatomic,readonly) NSMutableArray * completions;                          //@synthesize completions=_completions - In the implementation block
@property (assign,nonatomic) long long preferredCommitStyle;                          //@synthesize preferredCommitStyle=_preferredCommitStyle - In the implementation block
@property (nonatomic,readonly) UIViewController * previewViewController;              //@synthesize previewViewController=_previewViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)animatorWithViewController:(id)arg1 ;
-(NSMutableArray *)animations;
-(void)addAnimations:(/*^block*/id)arg1 ;
-(void)addCompletion:(/*^block*/id)arg1 ;
-(long long)preferredCommitStyle;
-(BOOL)hasAnyActions;
-(void)performAllCompletions;
-(void)setPreferredCommitStyle:(long long)arg1 ;
-(UIViewController *)previewViewController;
-(void)performAllAnimations;
-(NSMutableArray *)completions;
@end

