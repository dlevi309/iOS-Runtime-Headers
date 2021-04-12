/*
* Generated on Monday, March 1, 2021 at 2:32:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


#import <NewsCore/NewsCore-Structs.h>
@class NSString, NSDate, NSArray;

@interface FCBundleSubscriptionLookUpEntry : NSObject {

	BOOL _hasShownRenewalNotice;
	BOOL _inTrialPeriod;
	BOOL _isPurchaser;
	BOOL _isAmplifyUser;
	NSString* _identifier;
	NSString* _purchaseID;
	NSDate* _dateOfExpiration;
	unsigned long long _purchaseValidationState;
	NSArray* _bundleChannelIDs;

}

@property (assign,nonatomic) unsigned long long purchaseValidationState;              //@synthesize purchaseValidationState=_purchaseValidationState - In the implementation block
@property (nonatomic,copy) NSString * identifier;                                     //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSArray * bundleChannelIDs;                                //@synthesize bundleChannelIDs=_bundleChannelIDs - In the implementation block
@property (nonatomic,copy) NSString * purchaseID;                                     //@synthesize purchaseID=_purchaseID - In the implementation block
@property (nonatomic,copy) NSDate * dateOfExpiration;                                 //@synthesize dateOfExpiration=_dateOfExpiration - In the implementation block
@property (assign,nonatomic) BOOL hasShownRenewalNotice;                              //@synthesize hasShownRenewalNotice=_hasShownRenewalNotice - In the implementation block
@property (assign,nonatomic) BOOL inTrialPeriod;                                      //@synthesize inTrialPeriod=_inTrialPeriod - In the implementation block
@property (assign,nonatomic) BOOL isPurchaser;                                        //@synthesize isPurchaser=_isPurchaser - In the implementation block
@property (assign,nonatomic) BOOL isAmplifyUser;                                      //@synthesize isAmplifyUser=_isAmplifyUser - In the implementation block
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)purchaseID;
-(void)setPurchaseID:(NSString *)arg1 ;
-(BOOL)isPurchaser;
-(id)bundleSubscription;
-(id)initWithEntryID:(id)arg1 dictionaryRepresentation:(id)arg2 ;
-(unsigned long long)purchaseValidationState;
-(void)setPurchaseValidationState:(unsigned long long)arg1 ;
-(void)setHasShownRenewalNotice:(BOOL)arg1 ;
-(void)setDateOfExpiration:(NSDate *)arg1 ;
-(BOOL)hasShownRenewalNotice;
-(NSDate *)dateOfExpiration;
-(NSArray *)bundleChannelIDs;
-(void)setBundleChannelIDs:(NSArray *)arg1 ;
-(BOOL)inTrialPeriod;
-(BOOL)isAmplifyUser;
-(void)setInTrialPeriod:(BOOL)arg1 ;
-(void)setIsPurchaser:(BOOL)arg1 ;
-(id)initWithEntryID:(id)arg1 bundleChannelIDs:(id)arg2 purchaseID:(id)arg3 purchaseValidationState:(unsigned long long)arg4 dateOfExpiration:(id)arg5 hasShownRenewalNotice:(BOOL)arg6 inTrialPeriod:(BOOL)arg7 isPurchaser:(BOOL)arg8 isAmplifyUser:(BOOL)arg9 ;
-(void)setIsAmplifyUser:(BOOL)arg1 ;
@end

