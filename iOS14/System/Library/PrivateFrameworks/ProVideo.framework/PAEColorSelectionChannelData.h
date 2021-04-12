/*
* Generated on Thursday, January 14, 2021 at 2:28:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(double)x;
-(int)mode;
-(void)setX:(double)arg1 ;
-(void)setRadius:(double)arg1 ;
-(void)setY:(double)arg1 ;
-(double)y;
-(void)encodeWithCoder:(id)arg1 ;
-(double)frame;
-(int)timeScale;
-(void)setTimeScale:(int)arg1 ;
-(int)action;
-(void)setAction:(int)arg1 ;
-(void)setMode:(int)arg1 ;
-(double)radius;
-(id)description;
-(void)setFrame:(double)arg1 ;
-(void)setState:(int)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(int)state;
-(void)setStyle:(int)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)style;
-(double)radiusScale;
-(void)setRadiusScale:(double)arg1 ;
@end

