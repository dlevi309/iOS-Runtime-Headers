/*
* Generated on Monday, March 1, 2021 at 2:30:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UIVisualEffectViewEntry.h>

@interface _UIZoomEffectViewEntry : _UIVisualEffectViewEntry {

	double _zoomAmount;

}

@property (assign,nonatomic) double zoomAmount;              //@synthesize zoomAmount=_zoomAmount - In the implementation block
-(id)description;
-(void)applyRequestedEffectToView:(id)arg1 ;
-(void)applyIdentityEffectToView:(id)arg1 ;
-(void)removeEffectFromView:(id)arg1 ;
-(BOOL)canTransitionToEffect:(id)arg1 ;
-(void)setZoomAmount:(double)arg1 ;
-(BOOL)shouldAnimateProperty:(id)arg1 ;
-(void)convertToIdentity;
-(double)zoomAmount;
@end

