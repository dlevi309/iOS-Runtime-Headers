/*
* Generated on Thursday, January 14, 2021 at 2:22:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKitCore/UIMotionEffect.h>

@protocol _MKMotionEffectDelegate;
@interface _MKMotionEffect : UIMotionEffect {

	UIOffset _offset;
	BOOL _enabled;
	id<_MKMotionEffectDelegate> _delegate;

}

@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                            //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic,__weak) id<_MKMotionEffectDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<_MKMotionEffectDelegate>)delegate;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setDelegate:(id<_MKMotionEffectDelegate>)arg1 ;
-(UIOffset)offsetWithScale:(UIOffset)arg1 ;
-(CATransform3D)transformWithTranslationScale:(UIOffset)arg1 rotationScale:(UIOffset)arg2 ;
-(id)keyPathsAndRelativeValuesForViewerOffset:(UIOffset)arg1 ;
-(BOOL)isEnabled;
-(UIOffset)rawOffset;
@end

