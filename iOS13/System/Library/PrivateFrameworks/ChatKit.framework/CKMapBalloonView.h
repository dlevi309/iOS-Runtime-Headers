/*
* Generated on Monday, March 1, 2021 at 2:31:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)layoutSubviews;
-(MKMarkerAnnotationView *)annotationView;
-(void)setAnnotationView:(MKMarkerAnnotationView *)arg1 ;
@end

