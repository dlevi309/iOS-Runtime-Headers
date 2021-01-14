/*
* Generated on Thursday, January 14, 2021 at 2:22:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSURLRequest *)urlRequest;
-(void)handleData:(id)arg1 ;
-(NSURL *)url;
-(MKMapItem *)mapItem;
-(void)setMapItem:(MKMapItem *)arg1 ;
@end

