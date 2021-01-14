/*
* Generated on Thursday, January 14, 2021 at 2:24:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSNumber *)stepValue;
-(NSNumber *)maximumValue;
-(void)setStepValue:(id)arg1;
-(void)setMinimumValue:(id)arg1;
-(NSNumber *)minimumValue;
-(void)setMaximumValue:(id)arg1;
-(NSNumber *)stepperValue;
-(void)setStepperValue:(id)arg1;
-(id<HUStepperCellDelegate>)stepperCellDelegate;
-(void)setStepperCellDelegate:(id)arg1;

@end

