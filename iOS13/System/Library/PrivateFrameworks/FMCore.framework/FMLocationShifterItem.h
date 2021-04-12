/*
* Generated on Monday, March 1, 2021 at 2:32:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FMCore.framework/FMCore
*/


#import <FMCore/FMCore-Structs.h>
@class NSDate, NSError;

@interface FMLocationShifterItem : NSObject {

	BOOL _shifted;
	double _accuracy;
	NSDate* _timestamp;
	id _context;
	NSError* _error;
	CLLocationCoordinate2D _coordinate;

}

@property (assign,nonatomic) CLLocationCoordinate2D coordinate;              //@synthesize coordinate=_coordinate - In the implementation block
@property (assign,nonatomic) double accuracy;                                //@synthesize accuracy=_accuracy - In the implementation block
@property (assign,nonatomic) BOOL shifted;                                   //@synthesize shifted=_shifted - In the implementation block
@property (nonatomic,retain) NSError * error;                                //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) NSDate * timestamp;                           //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) id context;                                   //@synthesize context=_context - In the implementation block
-(id)init;
-(id)description;
-(NSError *)error;
-(CLLocationCoordinate2D)coordinate;
-(void)setError:(NSError *)arg1 ;
-(id)context;
-(NSDate *)timestamp;
-(double)accuracy;
-(void)setCoordinate:(CLLocationCoordinate2D)arg1 ;
-(void)setAccuracy:(double)arg1 ;
-(BOOL)shifted;
-(id)initWithCoordinate:(CLLocationCoordinate2D)arg1 accuracy:(double)arg2 timestamp:(id)arg3 context:(id)arg4 ;
-(void)setShifted:(BOOL)arg1 ;
@end

