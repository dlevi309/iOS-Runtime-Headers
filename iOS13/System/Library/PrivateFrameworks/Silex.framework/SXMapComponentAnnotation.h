/*
* Generated on Monday, March 1, 2021 at 2:33:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

