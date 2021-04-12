/*
* Generated on Thursday, January 14, 2021 at 2:22:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(VKMapView *)muninView;
-(void)setMuninView:(VKMapView *)arg1 ;
-(void)dealloc;
@end

