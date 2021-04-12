/*
* Generated on Monday, March 1, 2021 at 2:31:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setEnabled:(BOOL)arg1 ;
-(id<_MKMotionEffectDelegate>)delegate;
-(void)setDelegate:(id<_MKMotionEffectDelegate>)arg1 ;
-(BOOL)isEnabled;
-(id)keyPathsAndRelativeValuesForViewerOffset:(UIOffset)arg1 ;
-(CATransform3D)transformWithTranslationScale:(UIOffset)arg1 rotationScale:(UIOffset)arg2 ;
-(UIOffset)offsetWithScale:(UIOffset)arg1 ;
-(UIOffset)rawOffset;
@end

