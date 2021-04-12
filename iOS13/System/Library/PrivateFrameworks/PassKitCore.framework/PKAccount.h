/*
* Generated on Monday, March 1, 2021 at 2:31:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)type;
-(void)setType:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
-(NSString *)accountIdentifier;
-(unsigned long long)feature;
-(void)setFeature:(unsigned long long)arg1 ;
-(PKAccountDetails *)details;
-(void)setDetails:(PKAccountDetails *)arg1 ;
-(void)setAccountIdentifier:(NSString *)arg1 ;
-(NSDate *)lastUpdated;
-(void)setLastUpdated:(NSDate *)arg1 ;
-(NSSet *)supportedFeatures;
-(unsigned long long)accessLevel;
-(id)schedulePaymentFeatureDescriptor;
-(id)associatedPassUniqueID;
-(NSURL *)accountBaseURL;
-(PKCreditAccountDetails *)creditDetails;
-(NSArray *)cloudStoreZoneNames;
-(BOOL)isContentEqualToAccount:(id)arg1 ;
-(BOOL)supportsExtendedFetch;
-(void)setAccountBaseURL:(NSURL *)arg1 ;
-(unsigned long long)stateReason;
-(void)setStateReason:(unsigned long long)arg1 ;
-(void)setAccessLevel:(unsigned long long)arg1 ;
-(BOOL)blockNotifications;
-(void)setBlockNotifications:(BOOL)arg1 ;
-(void)setSupportedFeatures:(NSSet *)arg1 ;
-(PKAccountAdditionalPushTopics *)additionalPushTopics;
-(void)setAdditionalPushTopics:(PKAccountAdditionalPushTopics *)arg1 ;
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
-(id)showAccountSummaryFeatureDescriptor;
-(id)addFundingSourceFeatureDescriptor;
-(id)showVirtualCardFeatureDescriptor;
-(id)provisioningAllowedFeatureDescriptor;
-(BOOL)supportsSchedulePayment;
-(BOOL)supportsScheduleRecurringPayments;
-(BOOL)supportsViewStatement;
-(BOOL)supportsRequestStatement;
-(BOOL)supportsExportTransactionData;
-(BOOL)supportsRequestPhysicalCard;
-(BOOL)supportsRedeemRewards;
-(BOOL)supportsShowNotifications;
-(BOOL)supportsShowAccountSummary;
-(BOOL)supportsAddFundingSource;
-(BOOL)supportsShowVirtualCard;
-(BOOL)provisioningAllowed;
@end

