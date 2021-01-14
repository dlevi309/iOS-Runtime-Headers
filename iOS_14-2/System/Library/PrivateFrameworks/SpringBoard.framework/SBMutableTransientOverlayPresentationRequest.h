/*
* Generated on Thursday, January 14, 2021 at 2:25:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBTransientOverlayPresentationRequest.h>

@class SBTransientOverlayViewController;

@interface SBMutableTransientOverlayPresentationRequest : SBTransientOverlayPresentationRequest

@property (assign,getter=isAnimated,nonatomic) BOOL animated; 
@property (nonatomic,copy) id completionHandler; 
@property (assign,nonatomic) BOOL shouldDismissSiri; 
@property (nonatomic,retain) SBTransientOverlayViewController * viewController; 
-(void)setViewController:(SBTransientOverlayViewController *)arg1 ;
-(void)setAnimated:(BOOL)arg1 ;
-(void)setCompletionHandler:(id)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setShouldDismissSiri:(BOOL)arg1 ;
@end

