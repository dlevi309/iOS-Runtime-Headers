/*
* Generated on Monday, March 1, 2021 at 2:30:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UIForceObservationMessageConstructing.h>

@class NSString;

@interface _UIForceMessage : NSObject <_UIForceObservationMessageConstructing> {

	BOOL _reset;
	double touchForce;
	unsigned long long stage;
	double timestamp;

}

@property (assign,nonatomic) double touchForce; 
@property (assign,nonatomic) unsigned long long stage; 
@property (assign,nonatomic) double timestamp; 
@property (getter=isReset,nonatomic,readonly) BOOL reset;              //@synthesize reset=_reset - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)reset;
+(id)observe:(/*^block*/id)arg1 ;
-(double)timestamp;
-(BOOL)isReset;
-(void)setTimestamp:(double)arg1 ;
-(double)touchForce;
-(void)setTouchForce:(double)arg1 ;
-(unsigned long long)stage;
-(void)setStage:(unsigned long long)arg1 ;
@end

