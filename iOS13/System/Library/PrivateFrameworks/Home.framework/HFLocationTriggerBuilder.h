/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <Home/HFTriggerBuilder.h>

@protocol HFLocationEventBuilder;
@class HFEventBuilder, NSSet;

@interface HFLocationTriggerBuilder : HFTriggerBuilder {

	HFEventBuilder*<HFLocationEventBuilder> _eventBuilder;
	NSSet* _stagedEvents;

}

@property (nonatomic,retain) NSSet * stagedEvents;                                              //@synthesize stagedEvents=_stagedEvents - In the implementation block
@property (nonatomic,retain) HFEventBuilder*<HFLocationEventBuilder> eventBuilder;              //@synthesize eventBuilder=_eventBuilder - In the implementation block
@property (nonatomic,readonly) BOOL isCustomLocationTrigger; 
@property (nonatomic,readonly) BOOL locationCanBeEdited; 
+(Class)homeKitRepresentationClass;
-(id)initWithExistingObject:(id)arg1 inHome:(id)arg2 context:(id)arg3 ;
-(id)_performValidation;
-(id)_updateEvents;
-(BOOL)supportsConditions;
-(BOOL)supportsEndEvents;
-(id)commitCreateTrigger;
-(id)commitEditTrigger;
-(id)naturalLanguageNameOfType:(unsigned long long)arg1 ;
-(HFEventBuilder*<HFLocationEventBuilder>)eventBuilder;
-(void)setEventBuilder:(HFEventBuilder*<HFLocationEventBuilder>)arg1 ;
-(void)setStagedEvents:(NSSet *)arg1 ;
-(NSSet *)stagedEvents;
-(id)_allActionSets;
-(BOOL)requiresConfirmationToRun;
-(BOOL)secureActionsRequireConfirmationToRun;
-(BOOL)requiresLocationServicesAuthorization;
-(BOOL)requiresFMFDeviceToRun;
-(BOOL)isCustomLocationTrigger;
-(BOOL)locationCanBeEdited;
@end

