/*
* Generated on Monday, March 1, 2021 at 2:33:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/


#import <TSReading/TSReading-Structs.h>
@class TSDRep, CALayer, TSDBezierPath, CAShapeLayer;

@interface TSDKnob : NSObject {

	int mType;
	CGPoint mPosition;
	BOOL mOffsetValid;
	CGPoint mOffset;
	double mRadius;
	unsigned long long mTag;
	TSDRep* mRep;
	BOOL mWorksWhenRepLocked;
	BOOL mWorksWhenInVersionBrowsingMode;
	BOOL mShouldDisplayDirectlyOverRep;
	CALayer* mLayer;
	TSDBezierPath* mHitRegionPath;
	CAShapeLayer* mHitRegionLayer;

}

@property (assign,nonatomic) int type; 
@property (assign,nonatomic) CGPoint position; 
@property (assign,nonatomic) BOOL offsetValid; 
@property (assign,nonatomic) CGPoint offset; 
@property (assign,nonatomic) double radius; 
@property (assign,nonatomic) unsigned long long tag; 
@property (nonatomic,readonly) CALayer * layer; 
@property (nonatomic,copy) TSDBezierPath * hitRegionPath; 
@property (nonatomic,readonly) TSDRep * rep; 
@property (assign,nonatomic) BOOL worksWhenRepLocked; 
@property (assign,nonatomic) BOOL worksWhenInVersionBrowsingMode; 
@property (assign,nonatomic) BOOL shouldDisplayDirectlyOverRep; 
-(id)init;
-(void)dealloc;
-(id)description;
-(int)type;
-(void)setType:(int)arg1 ;
-(CGPoint)position;
-(unsigned long long)tag;
-(void)setOffset:(CGPoint)arg1 ;
-(double)radius;
-(void)setRadius:(double)arg1 ;
-(CGPoint)offset;
-(void)setPosition:(CGPoint)arg1 ;
-(CALayer *)layer;
-(void)setTag:(unsigned long long)arg1 ;
-(id)knobImage;
-(TSDRep *)rep;
-(BOOL)overlapsWithKnob:(id)arg1 ;
-(BOOL)obscuresKnob:(id)arg1 ;
-(BOOL)isHitByUnscaledPoint:(CGPoint)arg1 andRep:(id)arg2 returningDistance:(double*)arg3 ;
-(id)initWithType:(int)arg1 position:(CGPoint)arg2 radius:(double)arg3 tag:(unsigned long long)arg4 onRep:(id)arg5 ;
-(BOOL)shouldDisplayDirectlyOverRep;
-(void)updateHitRegionPathForRep:(id)arg1 ;
-(BOOL)offsetValid;
-(void)setOffsetValid:(BOOL)arg1 ;
-(BOOL)worksWhenRepLocked;
-(BOOL)worksWhenInVersionBrowsingMode;
-(double)i_rotationInDegreesForKnobOnRep:(id)arg1 ;
-(BOOL)isHitByUnscaledPoint:(CGPoint)arg1 andRep:(id)arg2 ;
-(int)dragType;
-(id)hitRegionLayerForRep:(id)arg1 ;
-(CGRect)boundingBoxOfHitRegionForRep:(id)arg1 scale:(double)arg2 ;
-(void)setWorksWhenRepLocked:(BOOL)arg1 ;
-(void)setWorksWhenInVersionBrowsingMode:(BOOL)arg1 ;
-(void)setShouldDisplayDirectlyOverRep:(BOOL)arg1 ;
-(TSDBezierPath *)hitRegionPath;
-(void)setHitRegionPath:(TSDBezierPath *)arg1 ;
@end

