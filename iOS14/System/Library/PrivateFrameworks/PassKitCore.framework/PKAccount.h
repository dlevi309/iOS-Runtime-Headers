/*
* Generated on Thursday, January 14, 2021 at 2:21:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSURL, PKAccountDetails, NSSet, PKAccountAdditionalPushTopics, NSDate, NSArray, PKCreditAccountDetails;

@interface PKAccount : NSObject <NSSecureCoding, NSCopying> {

	BOOL _blockNotifications;
	BOOL _accountStateDirty;
	NSString* _accountIdentifier;
	NSURL* _accountBaseURL;
	unsigned long long _feature;
	unsigned long long _type;
	PKAccountDetails* _details;
	unsigned long long _state;
	unsigned long long _stateReason;
	unsigned long long _accessLevel;
	NSSet* _supportedFeatures;
	PKAccountAdditionalPushTopics* _additionalPushTopics;
	NSDate* _lastUpdated;
	NSArray* _cloudStoreZoneNames;

}

@property (nonatomic,copy) NSString * accountIdentifier;                                        //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
@property (nonatomic,retain) NSURL * accountBaseURL;                                            //@synthesize accountBaseURL=_accountBaseURL - In the implementation block
@property (assign,nonatomic) unsigned long long feature;                                        //@synthesize feature=_feature - In the implementation block
@property (assign,nonatomic) unsigned long long type;                                           //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) PKAccountDetails * details;                                        //@synthesize details=_details - In the implementation block
@property (assign,nonatomic) unsigned long long state;                                          //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) unsigned long long stateReason;                                    //@synthesize stateReason=_stateReason - In the implementation block
@property (assign,nonatomic) unsigned long long accessLevel;                                    //@synthesize accessLevel=_accessLevel - In the implementation block
@property (assign,nonatomic) BOOL blockNotifications;                                           //@synthesize blockNotifications=_blockNotifications - In the implementation block
@property (nonatomic,copy) NSSet * supportedFeatures;                                           //@synthesize supportedFeatures=_supportedFeatures - In the implementation block
@property (nonatomic,retain) PKAccountAdditionalPushTopics * additionalPushTopics;              //@synthesize additionalPushTopics=_additionalPushTopics - In the implementation block
@property (assign,nonatomic) BOOL accountStateDirty;                                            //@synthesize accountStateDirty=_accountStateDirty - In the implementation block
@property (nonatomic,retain) NSDate * lastUpdated;                                              //@synthesize lastUpdated=_lastUpdated - In the implementation block
@property (nonatomic,copy) NSArray * cloudStoreZoneNames;                                       //@synthesize cloudStoreZoneNames=_cloudStoreZoneNames - In the implementation block
@property (nonatomic,readonly) PKCreditAccountDetails * creditDetails; 
+(BOOL)supportsSecureCoding;
-(NSDate *)lastUpdated;
-(void)setDetails:(PKAccountDetails *)arg1 ;
-(unsigned long long)feature;
-(NSString *)accountIdentifier;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)accessLevel;
-(void)setType:(unsigned long long)arg1 ;
-(id)schedulePaymentFeatureDescriptor;
-(id)associatedPassUniqueID;
-(NSURL *)accountBaseURL;
-(PKCreditAccountDetails *)creditDetails;
-(id)initWithDictionary:(id)arg1 ;
-(void)setLastUpdated:(NSDate *)arg1 ;
-(id)description;
-(void)setAccountIdentifier:(NSString *)arg1 ;
-(NSSet *)supportedFeatures;
-(unsigned long long)type;
-(unsigned long long)stateReason;
-(void)setState:(unsigned long long)arg1 ;
-(unsigned long long)hash;
-(NSArray *)cloudStoreZoneNames;
-(BOOL)isContentEqualToAccount:(id)arg1 ;
-(BOOL)supportsExtendedFetch;
-(void)setAccountBaseURL:(NSURL *)arg1 ;
-(void)setStateReason:(unsigned long long)arg1 ;
-(void)setAccessLevel:(unsigned long long)arg1 ;
-(BOOL)blockNotifications;
-(void)setBlockNotifications:(BOOL)arg1 ;
-(void)setSupportedFeatures:(NSSet *)arg1 ;
-(PKAccountAdditionalPushTopics *)additionalPushTopics;
-(void)setAdditionalPushTopics:(PKAccountAdditionalPushTopics *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)accountStateDirty;
-(void)setAccountStateDirty:(BOOL)arg1 ;
-(void)setCloudStoreZoneNames:(NSArray *)arg1 ;
-(id)_featureWithIdentifier:(id)arg1 ;
-(id)scheduleRecurringPaymentsFeatureDescriptor;
-(id)viewStatementFeatureDescriptor;
-(id)requestStatementFeatureDescriptor;
-(id)exportTransactionDataFeatureDescriptor;
-(id)requestPhysicalCardFeatureDescriptor;
-(id)redeemRewardsFeatureDescriptor;
-(id)showNotificationsFeatureDescriptor;
-(unsigned long long)state;
-(id)showAccountSummaryFeatureDescriptor;
-(id)addFundingSourceFeatureDescriptor;
-(id)showVirtualCardFeatureDescriptor;
-(id)provisioningAllowedFeatureDescriptor;
-(BOOL)supportsSchedulePayment;
-(BOOL)supportsScheduleRecurringPayments;
-(BOOL)provisioningAllowed;
-(BOOL)supportsViewStatement;
-(BOOL)supportsRequestStatement;
-(BOOL)supportsExportTransactionData;
-(BOOL)supportsRequestPhysicalCard;
-(BOOL)supportsRedeemRewards;
-(BOOL)supportsShowNotifications;
-(BOOL)supportsShowAccountSummary;
-(BOOL)supportsAddFundingSource;
-(BOOL)supportsShowVirtualCard;
-(PKAccountDetails *)details;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setFeature:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

