/*
* Generated on Monday, March 1, 2021 at 2:31:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Pegasus.framework/Pegasus
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface PGPlaybackProgress : NSObject <NSSecureCoding> {

	double _anchorProgress;
	double _anchorTimestamp;
	double _rate;

}

@property (nonatomic,readonly) double anchorProgress; 
@property (nonatomic,readonly) double anchorTimestamp; 
@property (nonatomic,readonly) double rate; 
@property (nonatomic,readonly) double currentProgress; 
+(BOOL)supportsSecureCoding;
+(double)currentTimestamp;
+(id)playbackProgressWithAnchorProgress:(double)arg1 anchorTimestamp:(double)arg2 rate:(double)arg3 ;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)currentProgress;
-(double)rate;
-(id)initWithAnchorProgress:(double)arg1 anchorTimestamp:(double)arg2 rate:(double)arg3 ;
-(double)progressForTimestamp:(double)arg1 ;
-(double)anchorProgress;
-(double)anchorTimestamp;
@end

