/*
* Generated on Monday, March 1, 2021 at 2:32:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(BOOL)supportsSecureCoding;
+(id)localizedDisplayName;
+(BOOL)isSupportedOnThisDevice;
+(BOOL)isAllowedToRunAutomatically;
+(id)localizedDisplayExplanation;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)selection;
-(void)setSelection:(unsigned long long)arg1 ;
-(BOOL)hasValidConfiguration;
-(id)localizedDescriptionWithConfigurationSummary;
-(id)localizedPastTenseDescription;
-(NSArray *)selectedWorkoutTypes;
-(void)setSelectedWorkoutTypes:(NSArray *)arg1 ;
-(BOOL)onStart;
-(void)setOnStart:(BOOL)arg1 ;
-(BOOL)onEnd;
-(void)setOnEnd:(BOOL)arg1 ;
@end

