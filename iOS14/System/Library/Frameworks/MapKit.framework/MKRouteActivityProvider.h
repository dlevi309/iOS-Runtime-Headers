/*
* Generated on Thursday, January 14, 2021 at 2:22:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MKPlaceActivityProvider.h>

@class MKMapItem;

@interface MKRouteActivityProvider : MKPlaceActivityProvider {

	MKMapItem* _sourceMapItem;
	unsigned long long _transportType;

}

@property (nonatomic,retain) MKMapItem * destinationMapItem; 
@property (nonatomic,retain) MKMapItem * sourceMapItem;                     //@synthesize sourceMapItem=_sourceMapItem - In the implementation block
@property (assign,nonatomic) unsigned long long transportType;              //@synthesize transportType=_transportType - In the implementation block
-(id)activityURL;
-(id)activitySourceTitle;
-(MKMapItem *)sourceMapItem;
-(MKMapItem *)destinationMapItem;
-(void)setSourceMapItem:(MKMapItem *)arg1 ;
-(void)setDestinationMapItem:(MKMapItem *)arg1 ;
-(void)setTransportType:(unsigned long long)arg1 ;
-(unsigned long long)transportType;
-(id)initWithSource:(id)arg1 destination:(id)arg2 ;
@end

