/*
* Generated on Thursday, January 14, 2021 at 2:25:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

