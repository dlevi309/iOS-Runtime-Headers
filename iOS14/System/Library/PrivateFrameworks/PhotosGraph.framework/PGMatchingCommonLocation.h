/*
* Generated on Thursday, January 14, 2021 at 2:25:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/


#import <PhotosGraph/PhotosGraph-Structs.h>
@class NSString;

@interface PGMatchingCommonLocation : NSObject {

	double _distance;
	NSString* _label;
	CLLocationCoordinate2D _coordinate;
	CLLocationCoordinate2D _addressCoordinate;

}

@property (nonatomic,retain) NSString * label;                                      //@synthesize label=_label - In the implementation block
@property (assign,nonatomic) CLLocationCoordinate2D coordinate;                     //@synthesize coordinate=_coordinate - In the implementation block
@property (assign,nonatomic) CLLocationCoordinate2D addressCoordinate;              //@synthesize addressCoordinate=_addressCoordinate - In the implementation block
+(id)matchingCommonLocationWithLabel:(id)arg1 coordinate:(CLLocationCoordinate2D)arg2 forAddressCoordinate:(CLLocationCoordinate2D)arg3 ;
-(CLLocationCoordinate2D)coordinate;
-(void)setCoordinate:(CLLocationCoordinate2D)arg1 ;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)label;
-(double)distanceBetweenCoordinates;
-(CLLocationCoordinate2D)addressCoordinate;
-(void)setAddressCoordinate:(CLLocationCoordinate2D)arg1 ;
@end

