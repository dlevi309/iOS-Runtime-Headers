/*
* Generated on Thursday, January 14, 2021 at 2:22:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
#import <libobjc.A.dylib/VKCustomFeatureAnnotation.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class VKCustomFeature, MKAnnotationView, NSString;

@interface _MKAnnotationViewCustomFeatureAnnotation : NSObject <VKCustomFeatureAnnotation, NSSecureCoding> {

	VKCustomFeature* _customFeature;
	MKAnnotationView* _annotationView;
	CGSize _coordinate;

}

@property (nonatomic,readonly) VKCustomFeature * feature; 
@property (assign,nonatomic) CGSize coordinate;                                     //@synthesize coordinate=_coordinate - In the implementation block
@property (assign,nonatomic,__weak) MKAnnotationView * annotationView;              //@synthesize annotationView=_annotationView - In the implementation block
@property (assign,nonatomic) double course; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(VKCustomFeature *)feature;
-(CGSize)coordinate;
-(MKAnnotationView *)annotationView;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setCustomFeature:(id)arg1 ;
-(void)setCoordinate:(CGSize)arg1 ;
-(void)setAnnotationView:(MKAnnotationView *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

