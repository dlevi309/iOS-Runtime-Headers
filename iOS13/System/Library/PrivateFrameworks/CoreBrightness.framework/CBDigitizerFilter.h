/*
* Generated on Monday, March 1, 2021 at 2:32:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
*/

#import <CoreBrightness/CoreBrightness-Structs.h>
#import <CoreBrightness/CBFilter.h>

@class NSMutableArray;

@interface CBDigitizerFilter : CBFilter {

	BOOL _firstDigitizerEvent;
	float _digitizerWidth;
	float _digitizerHeight;
	float _deviceCenterX;
	float _deviceCenterY;
	BOOL _touchEnabled;
	float _touchHotSpotRadiusCM;
	float _touchHotSpotSquared;
	NSMutableArray* _hotspots;
	BOOL _obstructed;
	int _orientation;

}

@property (assign,getter=isObstructed,nonatomic) BOOL obstructed;              //@synthesize obstructed=_obstructed - In the implementation block
@property (assign) int orientation;                                            //@synthesize orientation=_orientation - In the implementation block
-(void)dealloc;
-(BOOL)setProperty:(id)arg1 forKey:(id)arg2 ;
-(int)orientation;
-(void)setOrientation:(int)arg1 ;
-(id)handleALSEvent:(id)arg1 ;
-(void)setObstructed:(BOOL)arg1 ;
-(id)filterEvent:(id)arg1 ;
-(id)initWithOrientation:(int)arg1 ;
-(BOOL)isObstructed;
-(void)initDigitizerProperties;
-(id)handleDigitizerEvent:(id)arg1 ;
-(void)setTriggered:(int)arg1 forHotspot:(id)arg2 ;
-(void)loadTouchProperties:(IOHIDServiceClientRef)arg1 ;
-(id)newHotspotForOrientation:(int)arg1 ;
@end

