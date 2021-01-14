/*
* Generated on Thursday, January 14, 2021 at 2:24:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

@property (nonatomic,readonly) double position; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) double timestamp;                      //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) double trueHeading;                    //@synthesize trueHeading=_trueHeading - In the implementation block
@property (assign,nonatomic) double magneticHeading;                //@synthesize magneticHeading=_magneticHeading - In the implementation block
@property (assign,nonatomic) double headingAccuracy;                //@synthesize headingAccuracy=_headingAccuracy - In the implementation block
-(double)position;
-(double)timestamp;
-(double)magneticHeading;
-(double)trueHeading;
-(void)setHeadingAccuracy:(double)arg1 ;
-(double)headingAccuracy;
-(void)setTimestamp:(double)arg1 ;
-(void)setTrueHeading:(double)arg1 ;
-(void)setMagneticHeading:(double)arg1 ;
@end

