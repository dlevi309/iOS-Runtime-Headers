/*
* Generated on Thursday, January 14, 2021 at 2:26:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WorkflowKit-Structs.h>
#import <WorkflowKit/WFTrigger.h>

@interface WFCarPlayConnectionTrigger : WFTrigger {

	BOOL _onConnect;
	BOOL _onDisconnect;

}

@property (assign,nonatomic) BOOL onConnect;                 //@synthesize onConnect=_onConnect - In the implementation block
@property (assign,nonatomic) BOOL onDisconnect;              //@synthesize onDisconnect=_onDisconnect - In the implementation block
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
-(id)init;
-(BOOL)onConnect;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setOnConnect:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)localizedDescriptionWithConfigurationSummary;
-(BOOL)onDisconnect;
-(id)localizedPastTenseDescription;
-(BOOL)hasValidConfiguration;
-(void)setOnDisconnect:(BOOL)arg1 ;
@end

