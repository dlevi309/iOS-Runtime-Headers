/*
* Generated on Thursday, January 14, 2021 at 2:27:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)setProperty:(id)arg1 forKey:(id)arg2 ;
-(id)initWithOrientation:(int)arg1 ;
-(id)filterEvent:(id)arg1 ;
-(int)orientation;
-(id)handleALSEvent:(id)arg1 ;
-(void)dealloc;
-(void)setOrientation:(int)arg1 ;
-(void)setObstructed:(BOOL)arg1 ;
-(BOOL)isObstructed;
-(void)initDigitizerProperties;
-(id)handleDigitizerEvent:(id)arg1 ;
-(void)setTriggered:(int)arg1 forHotspot:(id)arg2 ;
-(void)loadTouchProperties:(IOHIDServiceClientRef)arg1 ;
-(id)newHotspotForOrientation:(int)arg1 ;
@end

