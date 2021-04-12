/*
* Generated on Monday, March 1, 2021 at 2:30:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/CABackdropLayerDelegate.h>

@class CABackdropLayer, NSString;

@interface _UIBackdropEffectView : UIView <CABackdropLayerDelegate> {

	CABackdropLayer* _backdropLayer;
	double _zoom;

}

@property (nonatomic,retain) CABackdropLayer * backdropLayer;              //@synthesize backdropLayer=_backdropLayer - In the implementation block
@property (assign,nonatomic) double zoom;                                  //@synthesize zoom=_zoom - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)layerClass;
-(id)init;
-(id)valueForUndefinedKey:(id)arg1 ;
-(CABackdropLayer *)backdropLayer;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(void)setContentScaleFactor:(double)arg1 ;
-(void)setZoom:(double)arg1 ;
-(void)setBackdropLayer:(CABackdropLayer *)arg1 ;
-(double)zoom;
@end

