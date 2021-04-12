/*
* Generated on Monday, March 1, 2021 at 2:33:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/

#import <libobjc.A.dylib/MNTracePlayerTimelineStreamObjectType.h>

@class NSString;

@interface MNTraceHeadingDataRow : NSObject <MNTracePlayerTimelineStreamObjectType> {

	double _timestamp;
	double _trueHeading;
	double _magneticHeading;
	double _headingAccuracy;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) double position; 
@property (assign,nonatomic) double timestamp;                      //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) double trueHeading;                    //@synthesize trueHeading=_trueHeading - In the implementation block
@property (assign,nonatomic) double magneticHeading;                //@synthesize magneticHeading=_magneticHeading - In the implementation block
@property (assign,nonatomic) double headingAccuracy;                //@synthesize headingAccuracy=_headingAccuracy - In the implementation block
-(double)timestamp;
-(double)position;
-(void)setTimestamp:(double)arg1 ;
-(double)magneticHeading;
-(double)trueHeading;
-(double)headingAccuracy;
-(void)setHeadingAccuracy:(double)arg1 ;
-(void)setTrueHeading:(double)arg1 ;
-(void)setMagneticHeading:(double)arg1 ;
@end

