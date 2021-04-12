/*
* Generated on Thursday, January 14, 2021 at 2:21:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKTitledImageBalloonView.h>

@class MKMarkerAnnotationView;

@interface CKMapBalloonView : CKTitledImageBalloonView {

	MKMarkerAnnotationView* _annotationView;

}

@property (nonatomic,retain) MKMarkerAnnotationView * annotationView;              //@synthesize annotationView=_annotationView - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(MKMarkerAnnotationView *)annotationView;
-(void)layoutSubviews;
-(void)setAnnotationView:(MKMarkerAnnotationView *)arg1 ;
@end

