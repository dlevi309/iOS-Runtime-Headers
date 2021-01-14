/*
* Generated on Thursday, January 14, 2021 at 2:23:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
*/


#import <AXMediaUtilities/AXMediaUtilities-Structs.h>
@class NSString;

@interface AXShotflowFaceDetection : NSObject {

	float _area;
	BOOL _hasPose;
	BOOL _hasLabel;
	float _confidence;
	int _mergesCount;
	int _scale;
	float _rotationAngle;
	float _yawAngle;
	int _label;
	NSString* _labelName;
	CGRect _box;
	CGRect _defaultBox;

}

@property (assign,nonatomic) CGRect box;                                //@synthesize box=_box - In the implementation block
@property (assign,nonatomic) CGRect defaultBox;                         //@synthesize defaultBox=_defaultBox - In the implementation block
@property (assign,nonatomic) float confidence;                          //@synthesize confidence=_confidence - In the implementation block
@property (assign,nonatomic) int scale;                                 //@synthesize scale=_scale - In the implementation block
@property (assign,nonatomic) int mergesCount;                           //@synthesize mergesCount=_mergesCount - In the implementation block
@property (assign,nonatomic) float rotationAngle;                       //@synthesize rotationAngle=_rotationAngle - In the implementation block
@property (assign,nonatomic) float yawAngle;                            //@synthesize yawAngle=_yawAngle - In the implementation block
@property (assign,nonatomic) BOOL hasPose;                              //@synthesize hasPose=_hasPose - In the implementation block
@property (assign,nonatomic) BOOL hasLabel;                             //@synthesize hasLabel=_hasLabel - In the implementation block
@property (assign,nonatomic) int label;                                 //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) NSString * labelName;                      //@synthesize labelName=_labelName - In the implementation block
@property (nonatomic,readonly) CGPoint boxCenter; 
@property (nonatomic,readonly) float distanceToDefaultBox; 
@property (nonatomic,readonly) float smartDistance; 
-(float)confidence;
-(float)rotationAngle;
-(BOOL)isOverlappingSmallFace:(id)arg1 withOverlapThreshold:(float)arg2 withSizeRatio:(float)arg3 ;
-(void)setRotationAngle:(float)arg1 ;
-(void)setMergesCount:(int)arg1 ;
-(float)iOa:(id)arg1 ;
-(BOOL)hasLabel;
-(void)setBox:(CGRect)arg1 ;
-(int)scale;
-(float)yawAngle;
-(id)initWithBox:(CGRect)arg1 defaultBox:(CGRect)arg2 confidence:(float)arg3 scale:(int)arg4 rotationAngle:(float)arg5 yawAngle:(float)arg6 mergesCount:(int)arg7 hasPose:(BOOL)arg8 ;
-(id)initWithBox:(CGRect)arg1 defaultBox:(CGRect)arg2 confidence:(float)arg3 scale:(int)arg4 rotationAngle:(float)arg5 yawAngle:(float)arg6 mergesCount:(int)arg7 hasPose:(BOOL)arg8 hasLabel:(BOOL)arg9 label:(int)arg10 ;
-(id)initWithBox:(CGRect)arg1 defaultBox:(CGRect)arg2 confidence:(float)arg3 scale:(int)arg4 rotationAngle:(float)arg5 yawAngle:(float)arg6 hasPose:(BOOL)arg7 ;
-(void)setLabelName:(NSString *)arg1 ;
-(id)initWithBox:(CGRect)arg1 defaultBox:(CGRect)arg2 confidence:(float)arg3 scale:(int)arg4 rotationAngle:(float)arg5 yawAngle:(float)arg6 mergesCount:(int)arg7 hasPose:(BOOL)arg8 hasLabel:(BOOL)arg9 label:(int)arg10 labelName:(id)arg11 ;
-(id)initWithBox:(CGRect)arg1 defaultBox:(CGRect)arg2 confidence:(float)arg3 scale:(int)arg4 rotationAngle:(float)arg5 yawAngle:(float)arg6 hasPose:(BOOL)arg7 hasLabel:(BOOL)arg8 label:(int)arg9 ;
-(id)initWithBox:(CGRect)arg1 defaultBox:(CGRect)arg2 confidence:(float)arg3 scale:(int)arg4 rotationAngle:(float)arg5 yawAngle:(float)arg6 hasPose:(BOOL)arg7 hasLabel:(BOOL)arg8 label:(int)arg9 labelName:(id)arg10 ;
-(void)setHasPose:(BOOL)arg1 ;
-(float)distanceToDefaultBox;
-(float)smartDistance;
-(BOOL)hasPose;
-(CGPoint)boxCenter;
-(CGRect)defaultBox;
-(void)setConfidence:(float)arg1 ;
-(void)setScale:(int)arg1 ;
-(void)setHasLabel:(BOOL)arg1 ;
-(void)setYawAngle:(float)arg1 ;
-(int)mergesCount;
-(void)setLabel:(int)arg1 ;
-(NSString *)labelName;
-(void)setDefaultBox:(CGRect)arg1 ;
-(CGRect)box;
-(float)overlap:(id)arg1 ;
-(int)label;
-(BOOL)isOverlappingLowMergeDet:(id)arg1 withOverlapThreshold:(float)arg2 withMergeCountDelta:(int)arg3 ;
@end

