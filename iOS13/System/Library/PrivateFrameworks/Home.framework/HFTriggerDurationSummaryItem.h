/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <Home/HFItem.h>

@class HFTriggerBuilder;

@interface HFTriggerDurationSummaryItem : HFItem {

	HFTriggerBuilder* _triggerBuilder;

}

@property (nonatomic,readonly) HFTriggerBuilder * triggerBuilder;              //@synthesize triggerBuilder=_triggerBuilder - In the implementation block
+(id)formattedStringForDuration:(id)arg1 style:(unsigned long long)arg2 ;
-(id)_subclass_updateWithOptions:(id)arg1 ;
-(HFTriggerBuilder *)triggerBuilder;
-(id)initWithTriggerBuilder:(id)arg1 ;
@end

