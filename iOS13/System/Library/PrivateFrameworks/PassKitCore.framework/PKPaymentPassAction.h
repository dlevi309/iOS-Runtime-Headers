/*
* Generated on Monday, March 1, 2021 at 2:31:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, NSString, PKTransitCommutePlan, NSDate, NSArray, PKEnteredValueActionItem;

@interface PKPaymentPassAction : NSObject <NSSecureCoding> {

	NSDictionary* _rawDictionary;
	NSDictionary* _localizations;
	BOOL _hasRemoteContent;
	BOOL _featured;
	NSString* _identifier;
	unsigned long long _type;
	NSString* _title;
	NSString* _actionDescription;
	NSString* _confirmationTitle;
	NSString* _relevantPropertyIdentifier;
	NSString* _associatedEnteredValueIdentifier;
	NSString* _associatedPlanIdentifier;
	PKTransitCommutePlan* _associatedPlan;
	NSDate* _availableFrom;
	NSDate* _availableUntil;
	NSString* _unavailableBeforeReason;
	NSString* _unavailableAfterReason;
	NSString* _serviceProviderIdentifier;
	NSString* _serviceProviderCountryCode;
	NSArray* _serviceProviderSupportedNetworks;
	unsigned long long _serviceProviderCapabilities;
	PKEnteredValueActionItem* _enteredValueItem;
	NSString* _headerText;
	NSString* _footerText;
	NSArray* _selectedActionItems;

}

@property (nonatomic,copy) NSString * associatedPlanIdentifier;                              //@synthesize associatedPlanIdentifier=_associatedPlanIdentifier - In the implementation block
@property (nonatomic,copy) PKTransitCommutePlan * associatedPlan;                            //@synthesize associatedPlan=_associatedPlan - In the implementation block
@property (nonatomic,copy) NSString * associatedEnteredValueIdentifier;                      //@synthesize associatedEnteredValueIdentifier=_associatedEnteredValueIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;                                   //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) unsigned long long type;                                      //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) BOOL hasRemoteContent;                                        //@synthesize hasRemoteContent=_hasRemoteContent - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                                        //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * actionDescription;                            //@synthesize actionDescription=_actionDescription - In the implementation block
@property (nonatomic,copy,readonly) NSString * confirmationTitle;                            //@synthesize confirmationTitle=_confirmationTitle - In the implementation block
@property (nonatomic,readonly) BOOL featured;                                                //@synthesize featured=_featured - In the implementation block
@property (nonatomic,copy,readonly) NSString * relevantPropertyIdentifier;                   //@synthesize relevantPropertyIdentifier=_relevantPropertyIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSDate * availableFrom;                                  //@synthesize availableFrom=_availableFrom - In the implementation block
@property (nonatomic,copy,readonly) NSDate * availableUntil;                                 //@synthesize availableUntil=_availableUntil - In the implementation block
@property (nonatomic,readonly) BOOL isActionAvailable; 
@property (nonatomic,copy,readonly) NSString * unavailableBeforeReason;                      //@synthesize unavailableBeforeReason=_unavailableBeforeReason - In the implementation block
@property (nonatomic,copy,readonly) NSString * unavailableAfterReason;                       //@synthesize unavailableAfterReason=_unavailableAfterReason - In the implementation block
@property (nonatomic,copy,readonly) NSString * serviceProviderIdentifier;                    //@synthesize serviceProviderIdentifier=_serviceProviderIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * serviceProviderCountryCode;                   //@synthesize serviceProviderCountryCode=_serviceProviderCountryCode - In the implementation block
@property (nonatomic,copy,readonly) NSArray * serviceProviderSupportedNetworks;              //@synthesize serviceProviderSupportedNetworks=_serviceProviderSupportedNetworks - In the implementation block
@property (nonatomic,readonly) unsigned long long serviceProviderCapabilities;               //@synthesize serviceProviderCapabilities=_serviceProviderCapabilities - In the implementation block
@property (nonatomic,readonly) PKEnteredValueActionItem * enteredValueItem;                  //@synthesize enteredValueItem=_enteredValueItem - In the implementation block
@property (nonatomic,copy,readonly) NSString * headerText;                                   //@synthesize headerText=_headerText - In the implementation block
@property (nonatomic,copy,readonly) NSString * footerText;                                   //@synthesize footerText=_footerText - In the implementation block
@property (nonatomic,copy,readonly) NSArray * selectedActionItems;                           //@synthesize selectedActionItems=_selectedActionItems - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(unsigned long long)type;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)identifier;
-(NSString *)title;
-(NSString *)headerText;
-(NSString *)footerText;
-(NSString *)confirmationTitle;
-(NSString *)serviceProviderIdentifier;
-(NSString *)serviceProviderCountryCode;
-(NSArray *)serviceProviderSupportedNetworks;
-(unsigned long long)serviceProviderCapabilities;
-(id)initWithDictionary:(id)arg1 bundle:(id)arg2 ;
-(NSDate *)availableFrom;
-(NSDate *)availableUntil;
-(NSString *)unavailableBeforeReason;
-(NSString *)unavailableAfterReason;
-(void)_processLocalizableStrings:(/*^block*/id)arg1 ;
-(id)_localizableKeys;
-(id)actionUpdatedWithDictionary:(id)arg1 ;
-(BOOL)isActionAvailable;
-(BOOL)hasRemoteContent;
-(NSString *)actionDescription;
-(BOOL)featured;
-(NSString *)relevantPropertyIdentifier;
-(NSString *)associatedEnteredValueIdentifier;
-(void)setAssociatedEnteredValueIdentifier:(NSString *)arg1 ;
-(NSString *)associatedPlanIdentifier;
-(void)setAssociatedPlanIdentifier:(NSString *)arg1 ;
-(PKTransitCommutePlan *)associatedPlan;
-(void)setAssociatedPlan:(PKTransitCommutePlan *)arg1 ;
-(PKEnteredValueActionItem *)enteredValueItem;
-(NSArray *)selectedActionItems;
@end

