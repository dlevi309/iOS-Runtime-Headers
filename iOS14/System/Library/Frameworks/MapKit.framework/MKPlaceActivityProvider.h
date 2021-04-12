/*
* Generated on Thursday, January 14, 2021 at 2:22:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/


@protocol MKPlaceActivityProviderDelegate;
@class MKMapItem;

@interface MKPlaceActivityProvider : NSObject {

	id<MKPlaceActivityProviderDelegate> _delegate;
	MKMapItem* _mapItem;

}

@property (assign,nonatomic,__weak) id<MKPlaceActivityProviderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) MKMapItem * mapItem;                                              //@synthesize mapItem=_mapItem - In the implementation block
-(id)activityURL;
-(id<MKPlaceActivityProviderDelegate>)delegate;
-(BOOL)shouldUseWebPlaceCardForActivityType:(id)arg1 ;
-(id)webPlaceCardURL;
-(id)activityAnnotationView;
-(id)mapMetadataSpecialization;
-(MKMapItem *)mapItem;
-(void)setDelegate:(id<MKPlaceActivityProviderDelegate>)arg1 ;
-(void)setMapItem:(MKMapItem *)arg1 ;
-(id)activityTitle;
-(id)initWithMapItem:(id)arg1 ;
@end

