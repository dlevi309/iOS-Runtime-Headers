/*
* Generated on Thursday, January 14, 2021 at 2:26:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WorkflowKit-Structs.h>
#import <WorkflowKit/WFTrigger.h>

@class NSArray;

@interface WFWorkoutTrigger : WFTrigger {

	BOOL _onStart;
	BOOL _onEnd;
	unsigned long long _selection;
	NSArray* _selectedWorkoutTypes;

}

@property (assign,nonatomic) unsigned long long selection;              //@synthesize selection=_selection - In the implementation block
@property (nonatomic,copy) NSArray * selectedWorkoutTypes;              //@synthesize selectedWorkoutTypes=_selectedWorkoutTypes - In the implementation block
@property (assign,nonatomic) BOOL onStart;                              //@synthesize onStart=_onStart - In the implementation block
@property (assign,nonatomic) BOOL onEnd;                                //@synthesize onEnd=_onEnd - In the implementation block
+(id)onIcon;
+(id)onLabel;
+(id)offLabel;
+(id)triggerTypeIcon;
+(id)offIcon;
+(BOOL)supportsSecureCoding;
+(id)localizedDisplayName;
+(BOOL)isUserInitiated;
+(BOOL)isSupportedOnThisDevice;
+(BOOL)isAllowedToRunAutomatically;
+(id)localizedDisplayExplanation;
-(id)contextStoreKeyPathForCurrentState;
-(id)contextStorePredicate;
-(unsigned)contextStoreQualityOfService;
-(unsigned long long)contextStoreRegistrationIsForWatch;
-(id)init;
-(void)setSelection:(unsigned long long)arg1 ;
-(BOOL)onEnd;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)selection;
-(BOOL)onStart;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)localizedDescriptionWithConfigurationSummary;
-(NSArray *)selectedWorkoutTypes;
-(id)localizedPastTenseDescription;
-(BOOL)hasValidConfiguration;
-(void)setSelectedWorkoutTypes:(NSArray *)arg1 ;
-(void)setOnStart:(BOOL)arg1 ;
-(void)setOnEnd:(BOOL)arg1 ;
@end

