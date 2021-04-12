/*
* Generated on Monday, March 1, 2021 at 2:30:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/


#import <Vision/Vision-Structs.h>
@interface VNEspressoDetectedObject : NSObject {

	CGRect _bounds;
	float _confidence;
	long long _objectType;

}

@property (assign) long long objectType;              //@synthesize objectType=_objectType - In the implementation block
@property (assign) CGRect bounds;                     //@synthesize bounds=_bounds - In the implementation block
@property (readonly) CGPoint center; 
@property (assign) float confidence;                  //@synthesize confidence=_confidence - In the implementation block
-(float)confidence;
-(CGRect)bounds;
-(void)setBounds:(CGRect)arg1 ;
-(CGPoint)center;
-(long long)objectType;
-(void)setConfidence:(float)arg1 ;
-(void)setObjectType:(long long)arg1 ;
-(id)initWithObjectType:(long long)arg1 boundingBox:(CGRect)arg2 confidence:(float)arg3 ;
@end

