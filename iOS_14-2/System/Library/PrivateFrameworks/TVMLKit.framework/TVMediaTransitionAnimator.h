/*
* Generated on Thursday, January 14, 2021 at 2:28:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)animateTransition:(id)arg1 ;
-(double)transitionDuration:(id)arg1 ;
-(id<TVMediaControllerHosting>)toHost;
-(void)setFromHost:(id<TVMediaControllerHosting>)arg1 ;
-(void)setToHost:(id<TVMediaControllerHosting>)arg1 ;
-(id<TVMediaControllerHosting>)fromHost;
-(void)migratesMediaControllerFromHost:(id)arg1 toHost:(id)arg2 ;
@end

