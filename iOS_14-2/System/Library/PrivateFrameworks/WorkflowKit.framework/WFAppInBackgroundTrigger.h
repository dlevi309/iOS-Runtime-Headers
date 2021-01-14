/*
* Generated on Thursday, January 14, 2021 at 2:26:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WorkflowKit-Structs.h>
#import <WorkflowKit/WFTrigger.h>

@class NSArray;

@interface WFAppInBackgroundTrigger : WFTrigger {

	NSArray* _selectedBundleIdentifiers;

}

@property (nonatomic,copy) NSArray * selectedBundleIdentifiers;              //@synthesize selectedBundleIdentifiers=_selectedBundleIdentifiers - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)localizedDisplayName;
+(BOOL)isUserInitiated;
+(BOOL)isAllowedToRunAutomatically;
+(id)localizedDisplayExplanation;
-(id)contextStoreKeyPathForCurrentState;
-(id)contextStorePredicate;
-(unsigned)contextStoreQualityOfService;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)awakeAfterUsingCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)localizedDescriptionWithConfigurationSummary;
-(NSArray *)selectedBundleIdentifiers;
-(id)localizedPastTenseDescription;
-(BOOL)hasValidConfiguration;
-(void)setSelectedBundleIdentifiers:(NSArray *)arg1 ;
@end

