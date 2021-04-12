/*
* Generated on Monday, March 1, 2021 at 2:34:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
*/


#import <ToneKit/ToneKit-Structs.h>
@interface TKVibrationRecorderRippleTouchContext : NSObject {

	double _creationTimestamp;
	CGPoint _location;

}

@property (nonatomic,readonly) CGPoint location;              //@synthesize location=_location - In the implementation block
-(id)init;
-(void)reset;
-(CGPoint)location;
-(double)timeIntervalSinceCreation;
-(void)configureWithTimeIntervalSinceCreation:(double)arg1 location:(CGPoint)arg2 ;
@end

