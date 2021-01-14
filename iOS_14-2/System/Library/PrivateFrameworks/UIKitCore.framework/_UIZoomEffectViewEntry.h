/*
* Generated on Thursday, January 14, 2021 at 2:20:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UIVisualEffectViewEntry.h>

@interface _UIZoomEffectViewEntry : _UIVisualEffectViewEntry {

	double _zoomAmount;

}

@property (assign,nonatomic) double zoomAmount;              //@synthesize zoomAmount=_zoomAmount - In the implementation block
-(BOOL)canTransitionToEffect:(id)arg1 ;
-(void)convertToIdentity;
-(void)removeEffectFromView:(id)arg1 ;
-(id)description;
-(void)setZoomAmount:(double)arg1 ;
-(double)zoomAmount;
-(void)applyIdentityEffectToView:(id)arg1 ;
-(void)applyRequestedEffectToView:(id)arg1 ;
-(BOOL)shouldAnimateProperty:(id)arg1 ;
@end

