/*
* Generated on Monday, March 1, 2021 at 2:31:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/


@class MKMapItem, NSURLRequest, NSURL;

@interface MKMapItemMetadataRequest : NSObject {

	MKMapItem* _mapItem;

}

@property (nonatomic,readonly) NSURLRequest * urlRequest; 
@property (nonatomic,retain) MKMapItem * mapItem;                      //@synthesize mapItem=_mapItem - In the implementation block
@property (nonatomic,readonly) NSURL * url; 
-(void)handleError:(id)arg1 ;
-(NSURL *)url;
-(void)setMapItem:(MKMapItem *)arg1 ;
-(MKMapItem *)mapItem;
-(NSURLRequest *)urlRequest;
-(void)handleData:(id)arg1 ;
@end

