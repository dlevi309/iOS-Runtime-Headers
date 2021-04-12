/*
* Generated on Monday, March 1, 2021 at 2:31:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/


@interface MKMapViewLabelMarkerState : NSObject {

	BOOL _visible;
	unsigned char _balloonBehavior;

}

@property (assign,getter=isVisible,nonatomic) BOOL visible;              //@synthesize visible=_visible - In the implementation block
@property (assign,nonatomic) unsigned char balloonBehavior;              //@synthesize balloonBehavior=_balloonBehavior - In the implementation block
+(id)stateForLabelMarker:(id)arg1 ;
-(void)setVisible:(BOOL)arg1 ;
-(BOOL)isVisible;
-(void)setBalloonBehavior:(unsigned char)arg1 ;
-(unsigned char)balloonBehavior;
@end

