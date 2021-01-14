/*
* Generated on Thursday, January 14, 2021 at 2:25:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableArray, NSDate, NSData;

@interface KTTransparentData : NSObject <NSSecureCoding> {

	NSMutableArray* _accounts;
	NSDate* _currentTreeEpochBeginDate;
	NSData* _inclusionProof;
	NSData* _uriVRFOutput;

}

@property (retain) NSMutableArray * accounts;                       //@synthesize accounts=_accounts - In the implementation block
@property (retain) NSData * uriVRFOutput;                           //@synthesize uriVRFOutput=_uriVRFOutput - In the implementation block
@property (retain) NSData * inclusionProof;                         //@synthesize inclusionProof=_inclusionProof - In the implementation block
@property (retain) NSDate * currentTreeEpochBeginDate;              //@synthesize currentTreeEpochBeginDate=_currentTreeEpochBeginDate - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)filterLoggableDatas:(id)arg1 deviceIdVRFOutput:(id)arg2 ;
+(id)filterLoggableDatas:(id)arg1 clientDataVRFOutput:(id)arg2 ;
-(void)setAccounts:(NSMutableArray *)arg1 ;
-(NSMutableArray *)accounts;
-(id)serialize;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(id)accountForAccountId:(id)arg1 ;
-(id)description;
-(id)copy;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)updateWithMutation:(id)arg1 error:(id*)arg2 ;
-(id)devicesMissingVRFs:(id)arg1 maximum:(long long)arg2 ;
-(id)clientDatasMissingVRFs:(id)arg1 maximum:(long long)arg2 ;
-(NSData *)inclusionProof;
-(id)initWithUriVRFOutput:(id)arg1 mapLeaf:(id)arg2 pendingSMTs:(id)arg3 error:(id*)arg4 ;
-(void)setInclusionProof:(NSData *)arg1 ;
-(void)setCurrentTreeEpochBeginDate:(NSDate *)arg1 ;
-(id)earliestAddedDate:(id)arg1 ;
-(BOOL)validateAndUpdateWithServerLoggableDatas:(id)arg1 accountId:(id)arg2 requestTime:(double)arg3 error:(id*)arg4 ;
-(BOOL)validateOtherAccountIDsInactiveForAccountId:(id)arg1 requestTime:(double)arg2 error:(id*)arg3 ;
-(BOOL)validateActiveClientDatasForAccountId:(id)arg1 error:(id*)arg2 ;
-(BOOL)validateAndUpdateWithSyncedLoggableDatas:(id)arg1 accountId:(id)arg2 error:(id*)arg3 ;
-(NSData *)uriVRFOutput;
-(NSDate *)currentTreeEpochBeginDate;
-(void)setUriVRFOutput:(NSData *)arg1 ;
-(BOOL)updateWithMapLeaf:(id)arg1 error:(id*)arg2 ;
-(BOOL)updateWithSMTs:(id)arg1 error:(id*)arg2 ;
-(void)markAccountsWithMutationMs:(unsigned long long)arg1 ;
-(void)addAccountsObject:(id)arg1 ;
-(void)removeAccountsObject:(id)arg1 ;
-(id)mutationsFromSMTs:(id)arg1 error:(id*)arg2 ;
-(id)sortMutationsByTimestamp:(id)arg1 ;
-(id)initWithUriVRFOutput:(id)arg1 ;
@end

