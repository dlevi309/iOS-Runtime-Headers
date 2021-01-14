/*
* Generated on Thursday, January 14, 2021 at 2:24:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <MapKit/MKPointAnnotation.h>

@class SXMapItem;

@interface SXMapComponentAnnotation : MKPointAnnotation {

	SXMapItem* _mapItem;

}

@property (nonatomic,readonly) SXMapItem * mapItem;              //@synthesize mapItem=_mapItem - In the implementation block
-(SXMapItem *)mapItem;
-(id)initWithMapItem:(id)arg1 ;
@end

