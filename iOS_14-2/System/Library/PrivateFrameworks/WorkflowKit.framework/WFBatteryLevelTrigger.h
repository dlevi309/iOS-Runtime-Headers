/*
* Generated on Thursday, January 14, 2021 at 2:26:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WorkflowKit-Structs.h>
#import <WorkflowKit/WFTrigger.h>

@interface WFBatteryLevelTrigger : WFTrigger {

	unsigned long long _level;
	unsigned long long _selection;

}

@property (assign,nonatomic) unsigned long long level;                  //@synthesize level=_level - In the implementation block
@property (assign,nonatomic) unsigned long long selection;              //@synthesize selection=_selection - In the implementation block
+(id)triggerTypeIcon;
+(BOOL)supportsSecureCoding;
+(id)localizedDisplayName;
+(BOOL)isAllowedToRunAutomatically;
+(id)localizedDisplayExplanation;
-(id)contextStoreKeyPathForCurrentState;
-(id)contextStorePredicate;
-(unsigned)contextStoreQualityOfService;
-(id)init;
-(void)setSelection:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)level;
-(unsigned long long)selection;
-(id)initWithCoder:(id)arg1 ;
-(void)setLevel:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)localizedDescriptionWithConfigurationSummary;
-(id)localizedPastTenseDescription;
-(BOOL)hasValidConfiguration;
@end

