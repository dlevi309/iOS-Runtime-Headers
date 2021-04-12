/*
* Generated on Monday, March 1, 2021 at 2:32:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(BOOL)supportsSecureCoding;
+(id)localizedDisplayName;
+(BOOL)isSupportedOnThisDevice;
+(BOOL)isAllowedToRunAutomatically;
+(id)localizedDisplayExplanation;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setOnConnect:(BOOL)arg1 ;
-(BOOL)onConnect;
-(BOOL)hasValidConfiguration;
-(id)localizedDescriptionWithConfigurationSummary;
-(id)localizedPastTenseDescription;
-(BOOL)onDisconnect;
-(void)setOnDisconnect:(BOOL)arg1 ;
@end

