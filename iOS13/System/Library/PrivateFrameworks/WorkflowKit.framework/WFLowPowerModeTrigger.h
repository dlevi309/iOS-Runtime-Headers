/*
* Generated on Monday, March 1, 2021 at 2:32:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WorkflowKit-Structs.h>
#import <WorkflowKit/WFTrigger.h>

@interface WFLowPowerModeTrigger : WFTrigger {

	BOOL _onEnable;
	BOOL _onDisable;

}

@property (assign,nonatomic) BOOL onEnable;               //@synthesize onEnable=_onEnable - In the implementation block
@property (assign,nonatomic) BOOL onDisable;              //@synthesize onDisable=_onDisable - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)localizedDisplayName;
+(BOOL)isSupportedOnThisDevice;
+(BOOL)isAllowedToRunAutomatically;
+(id)localizedDisplayExplanation;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)hasValidConfiguration;
-(id)localizedDescriptionWithConfigurationSummary;
-(id)localizedPastTenseDescription;
-(BOOL)onEnable;
-(void)setOnEnable:(BOOL)arg1 ;
-(BOOL)onDisable;
-(void)setOnDisable:(BOOL)arg1 ;
@end

