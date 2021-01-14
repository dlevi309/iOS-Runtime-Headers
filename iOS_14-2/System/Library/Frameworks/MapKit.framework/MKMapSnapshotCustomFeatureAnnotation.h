/*
* Generated on Thursday, January 14, 2021 at 2:22:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
#import <libobjc.A.dylib/MKCustomFeatureAnnotation.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class _MKAnnotationViewCustomFeatureAnnotation, NSString;

@interface MKMapSnapshotCustomFeatureAnnotation : NSObject <MKCustomFeatureAnnotation, NSSecureCoding> {

	_MKAnnotationViewCustomFeatureAnnotation* _internalCustomFeatureAnnotation;

}

@property (nonatomic,retain) _MKAnnotationViewCustomFeatureAnnotation * internalCustomFeatureAnnotation;              //@synthesize internalCustomFeatureAnnotation=_internalCustomFeatureAnnotation - In the implementation block
@property (nonatomic,readonly) BOOL showsBalloonCallout; 
@property (assign,nonatomic) CGSize coordinate; 
@property (assign,nonatomic) double course; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)customFeatureAnnotationForMapItem:(id)arg1 styleAttributes:(id)arg2 ;
+(id)customFeatureAnnotationForMapItem:(id)arg1 ;
-(id)feature;
-(CGSize)coordinate;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setCoordinate:(CGSize)arg1 ;
-(_MKAnnotationViewCustomFeatureAnnotation *)internalCustomFeatureAnnotation;
-(BOOL)showsBalloonCallout;
-(id)initWithCustomFeature:(id)arg1 coordinate:(CGSize)arg2 ;
-(void)setInternalCustomFeatureAnnotation:(_MKAnnotationViewCustomFeatureAnnotation *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

