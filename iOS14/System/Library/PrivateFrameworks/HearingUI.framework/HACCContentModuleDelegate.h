/*
* Generated on Thursday, January 14, 2021 at 2:27:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HearingUI.framework/HearingUI
*/


@protocol HACCContentModuleDelegate <NSObject>
@property (nonatomic,readonly) BOOL shouldDisplayOtherDevice; 
@required
-(void)updateView;
-(double)preferredContentWidth;
-(void)controlDidActivate:(id)arg1;
-(id)currentHearingDevice;
-(void)updateViewForProperties:(id)arg1;
-(void)updateViewForModule:(unsigned long long)arg1;
-(BOOL)shouldDisplayOtherDevice;

@end

