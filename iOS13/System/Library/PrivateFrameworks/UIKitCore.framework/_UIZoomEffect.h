/*
* Generated on Monday, March 1, 2021 at 2:30:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIVisualEffect.h>

@interface _UIZoomEffect : UIVisualEffect {

	double _zoomAmount;
	BOOL _isUnderlay;

}
+(BOOL)supportsSecureCoding;
+(id)zoomEffectWithMagnitude:(double)arg1 ;
+(id)_underlayZoomEffectWithMagnitude:(double)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)_updateEffectDescriptor:(id)arg1 forEnvironment:(id)arg2 usage:(long long)arg3 ;
-(id)_viewEntry;
@end

