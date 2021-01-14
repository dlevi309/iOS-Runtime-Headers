/*
* Generated on Thursday, January 14, 2021 at 2:20:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@interface _UIVelocityIntegratorDataSample : NSObject {

	double _timestamp;
	CGVector _translation;
	CGPoint _point;

}

@property (assign,nonatomic) double timestamp;                  //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) CGVector translation;              //@synthesize translation=_translation - In the implementation block
@property (assign,nonatomic) CGPoint point;                     //@synthesize point=_point - In the implementation block
-(CGPoint)point;
-(BOOL)isSampleDistinctEnoughFromTouchLocation:(CGPoint)arg1 minimumRequiredMovement:(double)arg2 ;
-(double)timestamp;
-(void)setTranslation:(CGVector)arg1 ;
-(void)updateTimeToNow;
-(id)description;
-(CGVector)translation;
-(void)setPoint:(CGPoint)arg1 ;
-(void)setTimestamp:(double)arg1 ;
@end

