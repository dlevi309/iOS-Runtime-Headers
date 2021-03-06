/*
* Generated on Thursday, January 14, 2021 at 2:27:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSDate, NSNumber, NSArray;

@interface VSPersistentSubscription : NSManagedObject

@property (nonatomic,copy) NSString * derivedSubscriptionInfo; 
@property (nonatomic,copy) NSDate * creationDate; 
@property (nonatomic,copy) NSDate * mostRecentSaveDate; 
@property (nonatomic,copy) NSNumber * sourceKind; 
@property (nonatomic,copy) NSString * sourceIdentifier; 
@property (nonatomic,copy) NSDate * expirationDate; 
@property (nonatomic,copy) NSNumber * accessLevel; 
@property (nonatomic,copy) NSArray * tierIdentifiers; 
@property (nonatomic,copy) NSString * subscriberIdentifierHash; 
@property (nonatomic,copy) NSString * billingIdentifier; 
@property (nonatomic,copy) NSString * providedSubscriptionInfo; 
+(id)keyPathsForValuesAffectingDerivedSubscriptionInfo;
-(void)awakeFromFetch;
-(void)awakeFromInsert;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(void)didChangeValueForKey:(id)arg1 ;
-(void)setCreationDate:(NSDate *)arg1 ;
-(void)setAccessLevel:(NSNumber *)arg1 ;
-(void)_setNullResettableValue:(id)arg1 forKey:(id)arg2 ;
-(void)_deriveValuesFromProvidedInfo:(id)arg1 ;
-(void)setTierIdentifiers:(NSArray *)arg1 ;
-(void)setSubscriberIdentifierHash:(NSString *)arg1 ;
-(void)setBillingIdentifier:(NSString *)arg1 ;
-(void)_updateDerivedSubscriptionInfo;
-(BOOL)_validateNullableValue:(id*)arg1 forKey:(id)arg2 error:(id*)arg3 ;
-(void)setProvidedSubscriptionInfo:(NSString *)arg1 ;
-(void)setMostRecentSaveDate:(NSDate *)arg1 ;
-(BOOL)validateAccessLevel:(id*)arg1 error:(id*)arg2 ;
-(BOOL)validateCreationDate:(id*)arg1 error:(id*)arg2 ;
-(BOOL)validateModificationDate:(id*)arg1 error:(id*)arg2 ;
-(BOOL)validateExpirationDate:(id*)arg1 error:(id*)arg2 ;
-(BOOL)validateSubscriberIdentifierHash:(id*)arg1 error:(id*)arg2 ;
-(BOOL)validateTierIdentifiers:(id*)arg1 error:(id*)arg2 ;
-(BOOL)validateBillingIdentifier:(id*)arg1 error:(id*)arg2 ;
@end

