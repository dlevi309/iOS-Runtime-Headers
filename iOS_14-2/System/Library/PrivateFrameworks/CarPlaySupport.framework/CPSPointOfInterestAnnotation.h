/*
* Generated on Thursday, January 14, 2021 at 2:27:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
*/

#import <CarPlaySupport/CarPlaySupport-Structs.h>
#import <libobjc.A.dylib/MKAnnotation.h>

@class NSString, CPPointOfInterest;

@interface CPSPointOfInterestAnnotation : NSObject <MKAnnotation> {

	CPPointOfInterest* _pointOfInterest;

}

@property (nonatomic,readonly) CPPointOfInterest * pointOfInterest;              //@synthesize pointOfInterest=_pointOfInterest - In the implementation block
@property (nonatomic,readonly) CLLocationCoordinate2D coordinate; 
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * subtitle; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CLLocationCoordinate2D)coordinate;
-(NSString *)subtitle;
-(CPPointOfInterest *)pointOfInterest;
-(NSString *)description;
-(NSString *)title;
-(id)initWithPointOfInterest:(id)arg1 ;
@end

