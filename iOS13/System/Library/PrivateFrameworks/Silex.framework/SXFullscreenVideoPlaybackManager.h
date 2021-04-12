/*
* Generated on Monday, March 1, 2021 at 2:33:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/


#import <Silex/Silex-Structs.h>
@class NSHashTable;

@interface SXFullscreenVideoPlaybackManager : NSObject {

	BOOL _transitionInProgress;
	BOOL _layoutInProgress;
	NSHashTable* _candidates;

}

@property (nonatomic,readonly) NSHashTable * candidates;              //@synthesize candidates=_candidates - In the implementation block
@property (assign,nonatomic) BOOL transitionInProgress;               //@synthesize transitionInProgress=_transitionInProgress - In the implementation block
@property (assign,nonatomic) BOOL layoutInProgress;                   //@synthesize layoutInProgress=_layoutInProgress - In the implementation block
-(id)init;
-(NSHashTable *)candidates;
-(BOOL)transitionInProgress;
-(void)addCandidate:(id)arg1 ;
-(void)setLayoutInProgress:(BOOL)arg1 ;
-(void)setTransitionInProgress:(BOOL)arg1 ;
-(BOOL)layoutInProgress;
-(void)enterFullscreenIfNeeded;
-(void)removeCandidate:(id)arg1 ;
-(void)willLayoutAndTransitionToSize:(CGSize)arg1 ;
-(void)didTransitionToSize:(CGSize)arg1 ;
-(void)didLayoutForSize:(CGSize)arg1 ;
@end

