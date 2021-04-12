/*
* Generated on Monday, March 1, 2021 at 2:35:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/

#import <ProVideo/ProVideo-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface PAEColorSelectionChannelData : NSObject <NSSecureCoding, NSCopying> {

	int _mode;
	int _state;
	int _action;
	int _style;
	double _x;
	double _y;
	double _radius;
	double _radiusScale;
	double _frame;
	int _timeScale;

}

@property (assign) int mode;                        //@synthesize mode=_mode - In the implementation block
@property (assign) int state;                       //@synthesize state=_state - In the implementation block
@property (assign) int action;                      //@synthesize action=_action - In the implementation block
@property (assign) int style;                       //@synthesize style=_style - In the implementation block
@property (x) double x;                             //@synthesize x=_x - In the implementation block
@property (y) double y;                             //@synthesize y=_y - In the implementation block
@property (assign) double radius;                   //@synthesize radius=_radius - In the implementation block
@property (assign) double radiusScale;              //@synthesize radiusScale=_radiusScale - In the implementation block
@property (assign) double frame;                    //@synthesize frame=_frame - In the implementation block
@property (assign) int timeScale;                   //@synthesize timeScale=_timeScale - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setMode:(int)arg1 ;
-(int)state;
-(int)mode;
-(int)style;
-(void)setStyle:(int)arg1 ;
-(int)action;
-(void)setState:(int)arg1 ;
-(double)frame;
-(double)radius;
-(void)setRadius:(double)arg1 ;
-(double)x;
-(double)y;
-(void)setFrame:(double)arg1 ;
-(void)setAction:(int)arg1 ;
-(void)setX:(double)arg1 ;
-(void)setY:(double)arg1 ;
-(int)timeScale;
-(void)setTimeScale:(int)arg1 ;
-(double)radiusScale;
-(void)setRadiusScale:(double)arg1 ;
@end

