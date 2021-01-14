/*
* Generated on Thursday, January 14, 2021 at 2:26:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WorkflowKit-Structs.h>
#import <WorkflowKit/WFTrigger.h>

@class NSString;

@interface WFNFCTrigger : WFTrigger {

	NSString* _tagIdentifier;
	NSString* _name;

}

@property (nonatomic,copy) NSString * tagIdentifier;              //@synthesize tagIdentifier=_tagIdentifier - In the implementation block
@property (nonatomic,copy) NSString * name;                       //@synthesize name=_name - In the implementation block
+(id)triggerTypeIcon;
+(BOOL)supportsSecureCoding;
+(id)localizedDisplayName;
+(BOOL)isUserInitiated;
+(BOOL)isSupportedOnThisDevice;
+(BOOL)isAllowedToRunAutomatically;
+(id)localizedDisplayExplanation;
-(id)contextStoreKeyPathForCurrentState;
-(id)contextStorePredicate;
-(unsigned)contextStoreQualityOfService;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)name;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)tagIdentifier;
-(void)setTagIdentifier:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)localizedDescriptionWithConfigurationSummary;
-(id)localizedPastTenseDescription;
-(BOOL)hasValidConfiguration;
@end

