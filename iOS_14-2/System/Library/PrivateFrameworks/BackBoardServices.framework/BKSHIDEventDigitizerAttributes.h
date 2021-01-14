/*
* Generated on Thursday, January 14, 2021 at 2:20:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
*/

#import <BackBoardServices/BackBoardServices-Structs.h>
#import <BackBoardServices/BKSHIDEventBaseAttributes.h>

@class NSArray;

@interface BKSHIDEventDigitizerAttributes : BKSHIDEventBaseAttributes {

	unsigned char _touchStreamIdentifier;
	BOOL _systemGesturesPossible;
	BOOL _systemGestureStateChange;
	float _maximumForce;
	double _digitizerSurfaceWidth;
	double _digitizerSurfaceHeight;
	NSArray* _pathAttributes;
	double _initialTouchTimestamp;

}

@property (assign,nonatomic) float maximumForce;                               //@synthesize maximumForce=_maximumForce - In the implementation block
@property (assign,nonatomic) double digitizerSurfaceWidth;                     //@synthesize digitizerSurfaceWidth=_digitizerSurfaceWidth - In the implementation block
@property (assign,nonatomic) double digitizerSurfaceHeight;                    //@synthesize digitizerSurfaceHeight=_digitizerSurfaceHeight - In the implementation block
@property (nonatomic,retain) NSArray * pathAttributes;                         //@synthesize pathAttributes=_pathAttributes - In the implementation block
@property (assign,nonatomic) double initialTouchTimestamp;                     //@synthesize initialTouchTimestamp=_initialTouchTimestamp - In the implementation block
@property (assign,nonatomic) unsigned char touchStreamIdentifier;              //@synthesize touchStreamIdentifier=_touchStreamIdentifier - In the implementation block
@property (assign,nonatomic) BOOL systemGesturesPossible;                      //@synthesize systemGesturesPossible=_systemGesturesPossible - In the implementation block
@property (assign,nonatomic) BOOL systemGestureStateChange;                    //@synthesize systemGestureStateChange=_systemGestureStateChange - In the implementation block
+(id)protobufSchema;
-(void)setDigitizerSurfaceHeight:(double)arg1 ;
-(BOOL)systemGesturesPossible;
-(NSArray *)pathAttributes;
-(void)appendDescriptionToFormatter:(id)arg1 ;
-(unsigned char)touchStreamIdentifier;
-(double)digitizerSurfaceHeight;
-(float)maximumForce;
-(BOOL)systemGestureStateChange;
-(void)setPathAttributes:(NSArray *)arg1 ;
-(void)setSystemGesturesPossible:(BOOL)arg1 ;
-(void)setDigitizerSurfaceWidth:(double)arg1 ;
-(void)setInitialTouchTimestamp:(double)arg1 ;
-(double)digitizerSurfaceWidth;
-(void)setMaximumForce:(float)arg1 ;
-(void)setTouchStreamIdentifier:(unsigned char)arg1 ;
-(double)initialTouchTimestamp;
-(void)setSystemGestureStateChange:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

