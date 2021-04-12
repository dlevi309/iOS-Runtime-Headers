/*
* Generated on Monday, March 1, 2021 at 2:32:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
*/

#import <OnBoardingKit/OBSetupAssistantProgressController.h>

@class NSDateComponentsFormatter;

@interface BFFTimeRemainingController : OBSetupAssistantProgressController {

	NSDateComponentsFormatter* _durationFormatter;

}

@property (retain) NSDateComponentsFormatter * durationFormatter;              //@synthesize durationFormatter=_durationFormatter - In the implementation block
-(id)initWithTitle:(id)arg1 ;
-(id)timeRemainingString:(double)arg1 ;
-(void)setTimeRemainingEstimate:(double)arg1 ;
-(NSDateComponentsFormatter *)durationFormatter;
-(void)setDurationFormatter:(NSDateComponentsFormatter *)arg1 ;
@end

