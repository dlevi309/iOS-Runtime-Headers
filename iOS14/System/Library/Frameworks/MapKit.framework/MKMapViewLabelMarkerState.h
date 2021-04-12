/*
* Generated on Thursday, January 14, 2021 at 2:22:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/


@interface MKMapViewLabelMarkerState : NSObject {

	BOOL _visible;
	unsigned char _balloonBehavior;

}

@property (assign,getter=isVisible,nonatomic) BOOL visible;              //@synthesize visible=_visible - In the implementation block
@property (assign,nonatomic) unsigned char balloonBehavior;              //@synthesize balloonBehavior=_balloonBehavior - In the implementation block
+(id)stateForLabelMarker:(id)arg1 ;
-(void)setBalloonBehavior:(unsigned char)arg1 ;
-(unsigned char)balloonBehavior;
-(void)setVisible:(BOOL)arg1 ;
-(BOOL)isVisible;
@end

