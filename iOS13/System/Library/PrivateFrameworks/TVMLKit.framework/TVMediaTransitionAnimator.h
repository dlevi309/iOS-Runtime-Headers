/*
* Generated on Monday, March 1, 2021 at 2:35:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
*/

#import <UIKit/UIViewControllerAnimatedTransitioning.h>

@protocol TVMediaControllerHosting;
@class NSString;

@interface TVMediaTransitionAnimator : NSObject <UIViewControllerAnimatedTransitioning> {

	BOOL _migrates;
	id<TVMediaControllerHosting> _fromHost;
	id<TVMediaControllerHosting> _toHost;

}

@property (nonatomic,retain) id<TVMediaControllerHosting> fromHost;              //@synthesize fromHost=_fromHost - In the implementation block
@property (nonatomic,retain) id<TVMediaControllerHosting> toHost;                //@synthesize toHost=_toHost - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)transitionDuration:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(void)setFromHost:(id<TVMediaControllerHosting>)arg1 ;
-(void)setToHost:(id<TVMediaControllerHosting>)arg1 ;
-(id<TVMediaControllerHosting>)fromHost;
-(id<TVMediaControllerHosting>)toHost;
-(void)migratesMediaControllerFromHost:(id)arg1 toHost:(id)arg2 ;
@end

