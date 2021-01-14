/*
* Generated on Thursday, January 14, 2021 at 2:27:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreChart.framework/CoreChart
*/

#import <CoreChart/CoreChart-Structs.h>
#import <libobjc.A.dylib/CCVegaJSMouseEventInterface.h>

@interface CCVegaJSMouseEvent : NSObject <CCVegaJSMouseEventInterface> {

	BOOL propagationStopped;
	BOOL defaultPrevented;
	BOOL isConsumed;
	double clientX;
	double clientY;
	double movementX;
	double movementY;

}

@property (assign,nonatomic) double clientX; 
@property (assign,nonatomic) double clientY; 
@property (assign,nonatomic) double movementX; 
@property (assign,nonatomic) double movementY; 
@property (assign,nonatomic) BOOL propagationStopped; 
@property (assign,nonatomic) BOOL defaultPrevented; 
@property (assign,nonatomic) BOOL isConsumed; 
-(void)setDefaultPrevented:(BOOL)arg1 ;
-(void)stopPropagation;
-(void)preventDefault;
-(double)clientX;
-(double)clientY;
-(BOOL)isConsumed;
-(BOOL)defaultPrevented;
-(id)initWithLocation:(CGPoint)arg1 movement:(CGPoint)arg2 ;
-(void)setPropagationStopped:(BOOL)arg1 ;
-(BOOL)propagationStopped;
-(void)setIsConsumed:(BOOL)arg1 ;
-(void)setClientX:(double)arg1 ;
-(void)setClientY:(double)arg1 ;
-(void)setMovementX:(double)arg1 ;
-(void)setMovementY:(double)arg1 ;
-(double)movementX;
-(double)movementY;
@end

