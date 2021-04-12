/*
* Generated on Thursday, January 14, 2021 at 2:28:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
*/

#import <OnBoardingKit/OBSetupAssistantProgressController.h>

@class NSDateComponentsFormatter;

@interface BFFTimeRemainingController : OBSetupAssistantProgressController {

	NSDateComponentsFormatter* _durationFormatter;

}

@property (retain) NSDateComponentsFormatter * durationFormatter;              //@synthesize durationFormatter=_durationFormatter - In the implementation block
-(void)setProgress:(double)arg1 ;
-(id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3 ;
-(NSDateComponentsFormatter *)durationFormatter;
-(void)setDurationFormatter:(NSDateComponentsFormatter *)arg1 ;
-(id)timeRemainingString:(double)arg1 ;
-(void)setTimeRemainingEstimate:(double)arg1 ;
@end

