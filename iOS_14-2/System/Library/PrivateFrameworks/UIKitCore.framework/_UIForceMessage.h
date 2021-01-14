/*
* Generated on Thursday, January 14, 2021 at 2:20:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(double)touchForce;
-(double)timestamp;
-(unsigned long long)stage;
-(void)setStage:(unsigned long long)arg1 ;
-(BOOL)isReset;
-(void)setTimestamp:(double)arg1 ;
-(void)setTouchForce:(double)arg1 ;
@end

