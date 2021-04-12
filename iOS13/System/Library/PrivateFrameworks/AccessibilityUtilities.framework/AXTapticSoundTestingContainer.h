/*
* Generated on Monday, March 1, 2021 at 2:30:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
*/


@class NSString;

@interface AXTapticSoundTestingContainer : NSObject {

	NSString* _sound;
	double _delay;

}

@property (nonatomic,retain) NSString * sound;              //@synthesize sound=_sound - In the implementation block
@property (assign,nonatomic) double delay;                  //@synthesize delay=_delay - In the implementation block
-(id)description;
-(double)delay;
-(void)setDelay:(double)arg1 ;
-(void)setSound:(NSString *)arg1 ;
-(NSString *)sound;
@end

