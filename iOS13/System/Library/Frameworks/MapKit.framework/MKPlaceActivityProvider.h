/*
* Generated on Monday, March 1, 2021 at 2:31:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id<MKPlaceActivityProviderDelegate>)delegate;
-(void)setDelegate:(id<MKPlaceActivityProviderDelegate>)arg1 ;
-(void)setMapItem:(MKMapItem *)arg1 ;
-(MKMapItem *)mapItem;
-(id)initWithMapItem:(id)arg1 ;
-(id)activityTitle;
-(id)activityURL;
-(BOOL)shouldUseWebPlaceCardForActivityType:(id)arg1 ;
-(id)webPlaceCardURL;
-(id)activityAnnotationView;
-(id)mapMetadataSpecialization;
@end

