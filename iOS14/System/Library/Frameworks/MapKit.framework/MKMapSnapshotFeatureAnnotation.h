/*
* Generated on Thursday, January 14, 2021 at 2:22:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
#import <libobjc.A.dylib/MKCustomFeatureAnnotation.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, VKCustomFeature;

@interface MKMapSnapshotFeatureAnnotation : NSObject <MKCustomFeatureAnnotation, NSSecureCoding> {

	long long _representation;
	NSString* _title;
	VKCustomFeature* _customFeature;
	CGSize _coordinate;

}

@property (nonatomic,readonly) long long representation;              //@synthesize representation=_representation - In the implementation block
@property (nonatomic,readonly) BOOL showsBalloonCallout; 
@property (assign,nonatomic) CGSize coordinate;                       //@synthesize coordinate=_coordinate - In the implementation block
@property (assign,nonatomic) double course; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)feature;
-(CGSize)coordinate;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoordinate:(CLLocationCoordinate2D)arg1 title:(id)arg2 representation:(long long)arg3 ;
-(NSString *)description;
-(void)setCoordinate:(CGSize)arg1 ;
-(BOOL)showsBalloonCallout;
-(id)initWithCoder:(id)arg1 ;
-(long long)representation;
-(void)setShowsBalloonCallout:(BOOL)arg1 ;
@end

