/*
* Generated on Thursday, January 14, 2021 at 2:22:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOMapItemIdentifier;

@interface MKMapItemIdentifier : NSObject <NSCopying> {

	GEOMapItemIdentifier* _geoMapItemIdentifier;

}
-(id)init;
-(id)initWithMUID:(unsigned long long)arg1 coordinate:(CLLocationCoordinate2D)arg2 ;
-(id)debugDescription;
-(id)initWithMUID:(unsigned long long)arg1 resultProviderID:(int)arg2 coordinate:(CLLocationCoordinate2D)arg3 ;
-(id)initWithMUID:(unsigned long long)arg1 ;
-(id)geoMapItemIdentifier;
-(unsigned long long)hash;
-(unsigned long long)muid;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithGEOMapItemIdentifier:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

