/*
* Generated on Thursday, January 14, 2021 at 2:20:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setZoom:(double)arg1 ;
-(double)zoom;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(id)init;
-(void)setBackdropLayer:(CABackdropLayer *)arg1 ;
-(id)valueForUndefinedKey:(id)arg1 ;
-(void)setContentScaleFactor:(double)arg1 ;
-(CABackdropLayer *)backdropLayer;
@end

