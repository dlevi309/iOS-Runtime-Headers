/*
* Generated on Monday, March 1, 2021 at 2:31:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSURL, PKFeatureApplicationOfferDetails, PKFeatureApplicationDeclineDetails, NSDate;

@interface PKFeatureApplication : NSObject <NSSecureCoding, NSCopying> {

	BOOL _applicationStateDirty;
	NSString* _applicationIdentifier;
	NSURL* _applicationBaseURL;
	unsigned long long _feature;
	unsigned long long _applicationState;
	unsigned long long _applicationStateReason;
	PKFeatureApplicationOfferDetails* _applicationOfferDetails;
	PKFeatureApplicationDeclineDetails* _declineDetails;
	NSString* _applicationTermsIdentifier;
	NSDate* _lastUpdated;
	NSString* _businessChatIdentifier;
	NSString* _coreIDVServiceProviderName;

}

@property (nonatomic,copy) NSString * applicationIdentifier;                                          //@synthesize applicationIdentifier=_applicationIdentifier - In the implementation block
@property (assign,nonatomic) unsigned long long feature;                                              //@synthesize feature=_feature - In the implementation block
@property (assign,nonatomic) unsigned long long applicationState;                                     //@synthesize applicationState=_applicationState - In the implementation block
@property (assign,nonatomic) unsigned long long applicationStateReason;                               //@synthesize applicationStateReason=_applicationStateReason - In the implementation block
@property (nonatomic,retain) PKFeatureApplicationOfferDetails * applicationOfferDetails;              //@synthesize applicationOfferDetails=_applicationOfferDetails - In the implementation block
@property (nonatomic,retain) PKFeatureApplicationDeclineDetails * declineDetails;                     //@synthesize declineDetails=_declineDetails - In the implementation block
@property (nonatomic,copy) NSString * applicationTermsIdentifier;                                     //@synthesize applicationTermsIdentifier=_applicationTermsIdentifier - In the implementation block
@property (assign,nonatomic) BOOL applicationStateDirty;                                              //@synthesize applicationStateDirty=_applicationStateDirty - In the implementation block
@property (nonatomic,retain) NSDate * lastUpdated;                                                    //@synthesize lastUpdated=_lastUpdated - In the implementation block
@property (nonatomic,copy) NSURL * applicationBaseURL;                                                //@synthesize applicationBaseURL=_applicationBaseURL - In the implementation block
@property (nonatomic,copy) NSString * businessChatIdentifier;                                         //@synthesize businessChatIdentifier=_businessChatIdentifier - In the implementation block
@property (nonatomic,copy) NSString * coreIDVServiceProviderName;                                     //@synthesize coreIDVServiceProviderName=_coreIDVServiceProviderName - In the implementation block
@property (nonatomic,readonly) BOOL isActive; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(BOOL)isActive;
-(NSString *)applicationIdentifier;
-(void)setApplicationIdentifier:(NSString *)arg1 ;
-(unsigned long long)feature;
-(void)setFeature:(unsigned long long)arg1 ;
-(unsigned long long)applicationState;
-(NSDate *)lastUpdated;
-(void)setLastUpdated:(NSDate *)arg1 ;
-(void)setApplicationState:(unsigned long long)arg1 ;
-(NSString *)applicationTermsIdentifier;
-(void)setApplicationTermsIdentifier:(NSString *)arg1 ;
-(void)setBusinessChatIdentifier:(NSString *)arg1 ;
-(NSString *)businessChatIdentifier;
-(NSString *)coreIDVServiceProviderName;
-(BOOL)hasSufficientOTBForInstallmentConfiguration:(id)arg1 ;
-(NSURL *)applicationBaseURL;
-(void)setApplicationBaseURL:(NSURL *)arg1 ;
-(unsigned long long)applicationStateReason;
-(void)setApplicationStateReason:(unsigned long long)arg1 ;
-(PKFeatureApplicationOfferDetails *)applicationOfferDetails;
-(void)setApplicationOfferDetails:(PKFeatureApplicationOfferDetails *)arg1 ;
-(PKFeatureApplicationDeclineDetails *)declineDetails;
-(void)setDeclineDetails:(PKFeatureApplicationDeclineDetails *)arg1 ;
-(BOOL)applicationStateDirty;
-(void)setApplicationStateDirty:(BOOL)arg1 ;
-(void)setCoreIDVServiceProviderName:(NSString *)arg1 ;
@end

