/*
* Generated on Monday, March 1, 2021 at 2:31:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(unsigned long long)transportType;
-(void)setTransportType:(unsigned long long)arg1 ;
-(id)initWithSource:(id)arg1 destination:(id)arg2 ;
-(id)activityURL;
-(id)activitySourceTitle;
-(MKMapItem *)sourceMapItem;
-(MKMapItem *)destinationMapItem;
-(void)setDestinationMapItem:(MKMapItem *)arg1 ;
-(void)setSourceMapItem:(MKMapItem *)arg1 ;
@end

