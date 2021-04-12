/*
* Generated on Thursday, January 14, 2021 at 2:22:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
#import <libobjc.A.dylib/MKTransitLineMarker.h>

@protocol GEOTransitLine;
@class NSString;

@interface _GEOTransitLineMarker : NSObject <MKTransitLineMarker> {

	id<GEOTransitLine> _line;
	CLLocationCoordinate2D _locationHint;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)artwork;
-(id)labelText;
-(id)initWithGEOTransitLine:(id)arg1 locationHint:(CLLocationCoordinate2D)arg2 ;
-(id)mapItemIdentifier;
@end

