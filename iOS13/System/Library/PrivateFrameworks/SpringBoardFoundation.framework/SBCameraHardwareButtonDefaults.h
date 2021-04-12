/*
* Generated on Monday, March 1, 2021 at 2:32:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
*/

#import <SpringBoardFoundation/SBAbstractSpringBoardDefaultDomain.h>

@interface SBCameraHardwareButtonDefaults : SBAbstractSpringBoardDefaultDomain

@property (nonatomic,readonly) double shutterButtonLongPressTimeout; 
@property (nonatomic,readonly) double shutterButtonLongPressCancellationTimeout; 
@property (nonatomic,readonly) BOOL shutterButtonShouldUsePocketDetection; 
-(void)setShutterButtonLongPressTimeout:(double)arg1 ;
-(double)shutterButtonLongPressTimeout;
-(void)setShutterButtonLongPressCancellationTimeout:(double)arg1 ;
-(double)shutterButtonLongPressCancellationTimeout;
-(void)setShutterButtonShouldUsePocketDetection:(BOOL)arg1 ;
-(BOOL)shutterButtonShouldUsePocketDetection;
-(void)_bindAndRegisterDefaults;
@end

