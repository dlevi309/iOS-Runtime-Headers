/*
* Generated on Thursday, January 14, 2021 at 2:26:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WorkflowKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface WFTrigger : NSObject <NSSecureCoding, NSCopying>
+(id)powerLogEventKindForTrigger:(id)arg1 ;
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
+(id)triggerWithSerializedData:(id)arg1 ;
-(id)contextStoreKeyPathForCurrentState;
-(id)contextStorePredicate;
-(unsigned)contextStoreQualityOfService;
-(BOOL)contextStoreRegistrationIsForWatch;
-(BOOL)shouldFireTriggerWithEventInfo:(id)arg1 error:(out id*)arg2 ;
-(BOOL)requiresEventInfoAsInput;
-(Class)viewControllerClassForConfiguration;
-(id)serializedData;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(void)configureWithConfiguration:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)localizedDescriptionWithConfigurationSummary;
-(id)localizedPastTenseDescription;
-(BOOL)hasValidConfiguration;
@end

