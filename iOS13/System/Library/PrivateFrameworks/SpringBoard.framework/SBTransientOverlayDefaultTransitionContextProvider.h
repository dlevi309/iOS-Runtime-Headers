/*
* Generated on Monday, March 1, 2021 at 2:35:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/SBTransientOverlayTransitionContextProviding.h>

@class NSMutableArray, NSString;

@interface SBTransientOverlayDefaultTransitionContextProvider : NSObject <SBTransientOverlayTransitionContextProviding> {

	BOOL _didPerformAlongsideTransitions;
	BOOL _isCompleted;
	NSMutableArray* _transitionBlocks;
	NSMutableArray* _transitionCompletionBlocks;
	BOOL _transitionCompletedSuccessfully;
	BOOL animated;

}

@property (assign,getter=isAnimated,nonatomic) BOOL animated; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)completeTransition:(BOOL)arg1 ;
-(BOOL)isAnimated;
-(void)setAnimated:(BOOL)arg1 ;
-(void)performAlongsideTransitions;
-(void)transitionAlongsideUsingBlock:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
@end

