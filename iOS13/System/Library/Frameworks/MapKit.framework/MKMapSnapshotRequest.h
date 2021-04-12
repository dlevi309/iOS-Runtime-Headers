/*
* Generated on Monday, March 1, 2021 at 2:31:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/


#import <MapKit/MapKit-Structs.h>
@class UIImage, NSString, MKMapSnapshotCreator, VKMapSnapshotCreator;

@interface MKMapSnapshotRequest : NSObject {

	id _requester;
	id _context;
	CLLocationCoordinate2D _coordinate;
	unsigned long long _zoomLevel;
	CGSize _size;
	UIImage* _image;
	NSString* _attributionString;
	MKMapSnapshotCreator* _delegate;
	VKMapSnapshotCreator* _snapshotCreator;

}

@property (nonatomic,retain) id context;                                          //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) id requester;                                        //@synthesize requester=_requester - In the implementation block
@property (nonatomic,retain) NSString * attributionString;                        //@synthesize attributionString=_attributionString - In the implementation block
@property (assign,nonatomic) CLLocationCoordinate2D coordinate;                   //@synthesize coordinate=_coordinate - In the implementation block
@property (assign,nonatomic) unsigned long long zoomLevel;                        //@synthesize zoomLevel=_zoomLevel - In the implementation block
@property (assign,nonatomic) CGSize size;                                         //@synthesize size=_size - In the implementation block
@property (assign,nonatomic,__weak) MKMapSnapshotCreator * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UIImage * image;                                   //@synthesize image=_image - In the implementation block
-(id)description;
-(MKMapSnapshotCreator *)delegate;
-(void)setDelegate:(MKMapSnapshotCreator *)arg1 ;
-(CGSize)size;
-(void)cancel;
-(CLLocationCoordinate2D)coordinate;
-(void)start;
-(id)context;
-(void)setContext:(id)arg1 ;
-(UIImage *)image;
-(void)setSize:(CGSize)arg1 ;
-(void)setCoordinate:(CLLocationCoordinate2D)arg1 ;
-(unsigned long long)zoomLevel;
-(void)setZoomLevel:(unsigned long long)arg1 ;
-(id)requester;
-(NSString *)attributionString;
-(void)setRequester:(id)arg1 ;
-(void)setAttributionString:(NSString *)arg1 ;
@end

