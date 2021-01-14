/*
* Generated on Thursday, January 14, 2021 at 2:20:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@interface _UIKBRTTouchHistoryInfo : NSObject {

	BOOL _isLeftHand;
	BOOL _isActive;
	BOOL _ignoreForDrift;
	BOOL _ignoreTouch;
	id _touchIdentifier;
	double _touchTime;
	CGPoint _actualLocation;
	CGPoint _errorVector;

}

@property (nonatomic,retain) id touchIdentifier;                  //@synthesize touchIdentifier=_touchIdentifier - In the implementation block
@property (assign,nonatomic) double touchTime;                    //@synthesize touchTime=_touchTime - In the implementation block
@property (assign,nonatomic) CGPoint actualLocation;              //@synthesize actualLocation=_actualLocation - In the implementation block
@property (assign,nonatomic) BOOL isLeftHand;                     //@synthesize isLeftHand=_isLeftHand - In the implementation block
@property (assign,nonatomic) BOOL isActive;                       //@synthesize isActive=_isActive - In the implementation block
@property (assign,nonatomic) BOOL ignoreForDrift;                 //@synthesize ignoreForDrift=_ignoreForDrift - In the implementation block
@property (assign,nonatomic) BOOL ignoreTouch;                    //@synthesize ignoreTouch=_ignoreTouch - In the implementation block
@property (assign,nonatomic) CGPoint errorVector;                 //@synthesize errorVector=_errorVector - In the implementation block
-(id)init;
-(id)touchIdentifier;
-(void)setTouchTime:(double)arg1 ;
-(double)touchTime;
-(void)setActualLocation:(CGPoint)arg1 ;
-(void)setIgnoreTouch:(BOOL)arg1 ;
-(void)setIgnoreForDrift:(BOOL)arg1 ;
-(void)setIsLeftHand:(BOOL)arg1 ;
-(BOOL)ignoreForDrift;
-(void)setErrorVector:(CGPoint)arg1 ;
-(CGPoint)actualLocation;
-(BOOL)isActive;
-(void)setTouchIdentifier:(id)arg1 ;
-(id)description;
-(BOOL)isLeftHand;
-(void)setIsActive:(BOOL)arg1 ;
-(BOOL)ignoreTouch;
-(CGPoint)errorVector;
@end

