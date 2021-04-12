/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/


@protocol HFIconDescriptor;
@class NSString, NSArray;

@interface HFTriggerUISummary : NSObject {

	NSString* _triggerTitle;
	NSString* _triggerDescription;
	unsigned long long _triggerType;
	id<HFIconDescriptor> _triggerIconDescriptor;
	NSArray* _triggerSummaryIconDescriptors;

}

@property (nonatomic,readonly) NSString * triggerTitle;                                 //@synthesize triggerTitle=_triggerTitle - In the implementation block
@property (nonatomic,readonly) NSString * triggerDescription;                           //@synthesize triggerDescription=_triggerDescription - In the implementation block
@property (nonatomic,readonly) unsigned long long triggerType;                          //@synthesize triggerType=_triggerType - In the implementation block
@property (nonatomic,readonly) id<HFIconDescriptor> triggerIconDescriptor;              //@synthesize triggerIconDescriptor=_triggerIconDescriptor - In the implementation block
@property (nonatomic,readonly) NSArray * triggerSummaryIconDescriptors;                 //@synthesize triggerSummaryIconDescriptors=_triggerSummaryIconDescriptors - In the implementation block
-(unsigned long long)triggerType;
-(id)initWithTrigger:(id)arg1 inHome:(id)arg2 forceDisabled:(BOOL)arg3 ;
-(NSString *)triggerTitle;
-(NSString *)triggerDescription;
-(NSArray *)triggerSummaryIconDescriptors;
-(id<HFIconDescriptor>)triggerIconDescriptor;
-(void)_updateWithTrigger:(id)arg1 inHome:(id)arg2 forceDisabled:(BOOL)arg3 ;
@end

