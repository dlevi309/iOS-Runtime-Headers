/*
* Generated on Thursday, January 14, 2021 at 2:28:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/


@protocol WFCompactPlatterPresentation <NSObject>
@property (assign,nonatomic,__weak) id<WFCompactPlatterContentContainer> platterContentContainer; 
@property (assign,nonatomic) BOOL platterHeightAnimationsDisabled; 
@optional
-(BOOL)platterHeightAnimationsDisabled;
-(void)setPlatterHeightAnimationsDisabled:(BOOL)arg1;

@required
-(double)platterHeightForWidth:(double)arg1 withMaximumHeight:(double)arg2;
-(id<WFCompactPlatterContentContainer>)platterContentContainer;
-(void)setPlatterContentContainer:(id)arg1;

@end

