/*
* Generated on Thursday, January 14, 2021 at 2:26:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/WFSerializableContent.h>

@class NSArray, NSString;

@interface WFContentAttributionSet : NSObject <NSSecureCoding, WFSerializableContent> {

	NSArray* _attributions;

}

@property (nonatomic,copy,readonly) NSArray * attributions;                            //@synthesize attributions=_attributions - In the implementation block
@property (nonatomic,readonly) unsigned long long derivedDisclosureLevel; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)attributionSetByMergingAttributionSets:(id)arg1 ;
+(id)attributionSetWithBundleIdentifier:(id)arg1 disclosureLevel:(unsigned long long)arg2 ;
+(id)objectWithWFSerializedRepresentation:(id)arg1 ;
+(id)attributionSetWithDisclosureLevel:(unsigned long long)arg1 managedLevel:(unsigned long long)arg2 ;
+(id)shortcutsAppAttributionSetWithDisclosureLevel:(unsigned long long)arg1 ;
+(id)attributionSetWithAccountBasedBundleIdentifier:(id)arg1 accountIdentifier:(id)arg2 disclosureLevel:(unsigned long long)arg3 ;
+(id)attributionSetWithBundleIdentifier:(id)arg1 accountIdentifier:(id)arg2 disclosureLevel:(unsigned long long)arg3 managedLevel:(unsigned long long)arg4 ;
+(id)attributionSetWithAttributions:(id)arg1 ;
+(id)shortcutsAppAttributionSet;
+(id)combiningAttributions:(id)arg1 withAttributions:(id)arg2 ;
+(id)reducedAttributionsFrom:(id)arg1 ;
-(NSArray *)attributions;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithAttribution:(id)arg1 ;
-(id)wfSerializedRepresentation;
-(BOOL)isAllowedToBeSentToDestinationWithManagedLevel:(unsigned long long)arg1 ;
-(unsigned long long)derivedDisclosureLevel;
-(BOOL)isSupersetOfAttributionSet:(id)arg1 ;
-(BOOL)isMoreRestrictiveThan:(id)arg1 ;
-(BOOL)isEligibleToShareWithResultManagedLevel:(unsigned long long*)arg1 ;
-(BOOL)isEligibleToShareWithResultManagedLevel:(unsigned long long*)arg1 usingManagedConfigurationManager:(id)arg2 ;
-(id)attributionSetByAddingAttribution:(id)arg1 ;
-(id)initWithAttributions:(id)arg1 ;
@end

