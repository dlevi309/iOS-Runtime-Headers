/*
* Generated on Monday, March 1, 2021 at 2:31:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKitCore/UIView.h>

@class VKMapView;

@interface _MKMuninLayerHostingView : UIView {

	VKMapView* _muninView;

}

@property (nonatomic,retain) VKMapView * muninView;              //@synthesize muninView=_muninView - In the implementation block
+(Class)layerClass;
-(void)dealloc;
-(void)setBounds:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(VKMapView *)muninView;
-(void)setMuninView:(VKMapView *)arg1 ;
@end

