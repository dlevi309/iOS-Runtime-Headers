/*
* Generated on Thursday, January 14, 2021 at 2:23:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(CGPoint)center;
-(id)initWithObjectType:(long long)arg1 boundingBox:(CGRect)arg2 confidence:(float)arg3 ;
-(long long)objectType;
-(void)setObjectType:(long long)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(id)description;
-(void)setConfidence:(float)arg1 ;
@end

