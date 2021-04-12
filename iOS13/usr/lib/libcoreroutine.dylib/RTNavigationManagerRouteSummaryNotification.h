/*
* Generated on Monday, March 1, 2021 at 2:34:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libcoreroutine.dylib
*/

#import <libcoreroutine.dylib/RTNotification.h>

@class NSString;

@interface RTNavigationManagerRouteSummaryNotification : RTNotification {

	double _originLatitude;
	double _originLongitude;
	NSString* _destinationName;
	double _destinationLatitude;
	double _destinationLongitude;

}

@property (assign,nonatomic) double originLatitude;                    //@synthesize originLatitude=_originLatitude - In the implementation block
@property (assign,nonatomic) double originLongitude;                   //@synthesize originLongitude=_originLongitude - In the implementation block
@property (nonatomic,retain) NSString * destinationName;               //@synthesize destinationName=_destinationName - In the implementation block
@property (assign,nonatomic) double destinationLatitude;               //@synthesize destinationLatitude=_destinationLatitude - In the implementation block
@property (assign,nonatomic) double destinationLongitude;              //@synthesize destinationLongitude=_destinationLongitude - In the implementation block
-(NSString *)destinationName;
-(void)setDestinationName:(NSString *)arg1 ;
-(double)destinationLatitude;
-(double)destinationLongitude;
-(id)initWithRouteSummary:(id)arg1 ;
-(double)originLatitude;
-(void)setOriginLatitude:(double)arg1 ;
-(double)originLongitude;
-(void)setOriginLongitude:(double)arg1 ;
-(void)setDestinationLatitude:(double)arg1 ;
-(void)setDestinationLongitude:(double)arg1 ;
@end

