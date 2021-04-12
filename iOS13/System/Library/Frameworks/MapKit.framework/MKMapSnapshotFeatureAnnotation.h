/*
* Generated on Monday, March 1, 2021 at 2:31:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) CGSize coordinate;                       //@synthesize coordinate=_coordinate - In the implementation block
@property (assign,nonatomic) double course; 
@property (nonatomic,readonly) BOOL showsBalloonCallout; 
+(BOOL)supportsSecureCoding;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CGSize)coordinate;
-(id)feature;
-(void)setCoordinate:(CGSize)arg1 ;
-(long long)representation;
-(id)initWithCoordinate:(CLLocationCoordinate2D)arg1 title:(id)arg2 representation:(long long)arg3 ;
-(BOOL)showsBalloonCallout;
-(void)setShowsBalloonCallout:(BOOL)arg1 ;
@end

