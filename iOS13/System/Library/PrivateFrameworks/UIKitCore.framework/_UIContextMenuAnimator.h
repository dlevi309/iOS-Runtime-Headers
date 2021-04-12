/*
* Generated on Monday, March 1, 2021 at 2:30:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (nonatomic,retain) NSMutableArray * animations;                             //@synthesize animations=_animations - In the implementation block
@property (nonatomic,retain) NSMutableArray * completions;                            //@synthesize completions=_completions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIViewController * previewViewController;              //@synthesize previewViewController=_previewViewController - In the implementation block
@property (assign,nonatomic) long long preferredCommitStyle;                          //@synthesize preferredCommitStyle=_preferredCommitStyle - In the implementation block
+(id)animatorWithViewController:(id)arg1 ;
-(NSMutableArray *)animations;
-(void)setAnimations:(NSMutableArray *)arg1 ;
-(NSMutableArray *)completions;
-(void)setCompletions:(NSMutableArray *)arg1 ;
-(void)addAnimations:(/*^block*/id)arg1 ;
-(void)addCompletion:(/*^block*/id)arg1 ;
-(void)performAllAnimations;
-(void)performAllCompletions;
-(UIViewController *)previewViewController;
-(void)setPreferredCommitStyle:(long long)arg1 ;
-(long long)preferredCommitStyle;
-(BOOL)hasAnyActions;
@end

