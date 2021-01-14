/*
* Generated on Thursday, January 14, 2021 at 2:26:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WorkflowKit-Structs.h>
#import <WorkflowKit/WFTrigger.h>

@class NSArray;

@interface WFAppInFocusTrigger : WFTrigger {

	BOOL _onFocus;
	BOOL _onBackground;
	NSArray* _selectedBundleIdentifiers;

}

@property (nonatomic,copy) NSArray * selectedBundleIdentifiers;              //@synthesize selectedBundleIdentifiers=_selectedBundleIdentifiers - In the implementation block
@property (assign,nonatomic) BOOL onFocus;                                   //@synthesize onFocus=_onFocus - In the implementation block
@property (assign,nonatomic) BOOL onBackground;                              //@synthesize onBackground=_onBackground - In the implementation block
+(id)onIcon;
+(id)onLabel;
+(id)offLabel;
+(id)triggerTypeIcon;
+(id)offIcon;
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
-(id)initWithCoder:(id)arg1 ;
-(BOOL)onFocus;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)localizedDescriptionWithConfigurationSummary;
-(NSArray *)selectedBundleIdentifiers;
-(BOOL)onBackground;
-(id)localizedPastTenseDescription;
-(BOOL)hasValidConfiguration;
-(void)setSelectedBundleIdentifiers:(NSArray *)arg1 ;
-(void)setOnFocus:(BOOL)arg1 ;
-(void)setOnBackground:(BOOL)arg1 ;
@end

