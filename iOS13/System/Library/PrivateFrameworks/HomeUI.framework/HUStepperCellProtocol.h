/*
* Generated on Monday, March 1, 2021 at 2:34:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

@class NSNumber;


@protocol HUStepperCellProtocol <NSObject>
@property (assign,nonatomic,__weak) id<HUStepperCellDelegate> stepperCellDelegate; 
@property (nonatomic,copy) NSNumber * minimumValue; 
@property (nonatomic,copy) NSNumber * maximumValue; 
@property (nonatomic,copy) NSNumber * stepValue; 
@property (nonatomic,copy) NSNumber * stepperValue; 
@required
-(void)setMinimumValue:(id)arg1;
-(void)setMaximumValue:(id)arg1;
-(NSNumber *)minimumValue;
-(NSNumber *)maximumValue;
-(void)setStepValue:(id)arg1;
-(NSNumber *)stepValue;
-(NSNumber *)stepperValue;
-(void)setStepperValue:(id)arg1;
-(id<HUStepperCellDelegate>)stepperCellDelegate;
-(void)setStepperCellDelegate:(id)arg1;

@end

