/*
* Generated on Thursday, January 14, 2021 at 2:21:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSSet, NSDate;

@interface PKPeerPaymentAssociatedAccountInformation : NSObject <NSSecureCoding> {

	BOOL _associatedAccountStateDirty;
	NSSet* _associatedAccounts;
	NSSet* _associatedAccountInvitations;
	NSSet* _associatedAccountRemovalRecords;
	double _proactiveAssociatedAccountFetchPeriod;
	NSDate* _lastUpdated;
	NSDate* _nextPossibleFetchDate;
	long long _backoffRetryLevel;

}

@property (nonatomic,copy) NSSet * associatedAccounts;                                                           //@synthesize associatedAccounts=_associatedAccounts - In the implementation block
@property (nonatomic,copy) NSSet * associatedAccountInvitations;                                                 //@synthesize associatedAccountInvitations=_associatedAccountInvitations - In the implementation block
@property (nonatomic,copy) NSSet * associatedAccountRemovalRecords;                                              //@synthesize associatedAccountRemovalRecords=_associatedAccountRemovalRecords - In the implementation block
@property (assign,nonatomic) double proactiveAssociatedAccountFetchPeriod;                                       //@synthesize proactiveAssociatedAccountFetchPeriod=_proactiveAssociatedAccountFetchPeriod - In the implementation block
@property (nonatomic,copy) NSDate * lastUpdated;                                                                 //@synthesize lastUpdated=_lastUpdated - In the implementation block
@property (nonatomic,retain) NSDate * nextPossibleFetchDate;                                                     //@synthesize nextPossibleFetchDate=_nextPossibleFetchDate - In the implementation block
@property (assign,nonatomic) long long backoffRetryLevel;                                                        //@synthesize backoffRetryLevel=_backoffRetryLevel - In the implementation block
@property (assign,getter=isAssociatedAccountStateDirty,nonatomic) BOOL associatedAccountStateDirty;              //@synthesize associatedAccountStateDirty=_associatedAccountStateDirty - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSDate *)lastUpdated;
-(void)markAssociatedAccountActiveWithAltDSID:(id)arg1 hasPresentedNotification:(BOOL)arg2 ;
-(NSSet *)associatedAccountInvitations;
-(void)setAssociatedAccountInvitations:(NSSet *)arg1 ;
-(void)setAssociatedAccountRemovalRecords:(NSSet *)arg1 ;
-(void)setProactiveAssociatedAccountFetchPeriod:(double)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isAssociatedAccountStateDirty;
-(void)setAssociatedAccountStateDirty:(BOOL)arg1 ;
-(void)setLastUpdated:(NSDate *)arg1 ;
-(id)description;
-(long long)backoffRetryLevel;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 lastUpdated:(id)arg2 ;
-(void)enumerateAssociatedAccountsUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateAccountInvitationsUsingBlock:(/*^block*/id)arg1 ;
-(double)proactiveAssociatedAccountFetchPeriod;
-(NSSet *)associatedAccountRemovalRecords;
-(void)markAssociatedAccountRemovalRecordWithAltDSID:(id)arg1 hasPresentedNotification:(BOOL)arg2 ;
-(NSDate *)nextPossibleFetchDate;
-(void)setNextPossibleFetchDate:(NSDate *)arg1 ;
-(void)setBackoffRetryLevel:(long long)arg1 ;
-(NSSet *)associatedAccounts;
-(void)setAssociatedAccounts:(NSSet *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

