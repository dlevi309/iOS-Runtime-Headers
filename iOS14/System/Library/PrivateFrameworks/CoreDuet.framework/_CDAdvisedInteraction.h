/*
* Generated on Thursday, January 14, 2021 at 2:20:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/

#import <CoreDuet/CoreDuet-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableSet, _CDContact, NSString, NSSet;

@interface _CDAdvisedInteraction : NSObject <NSCopying, NSSecureCoding> {

	NSMutableSet* _reasons;
	_CDContact* _contact;
	NSString* _account;
	NSString* _bundleId;
	long long _mechanism;
	double _score;
	long long _similarOutgoingInteractionsCount;
	long long _similarIncomingInteractionsCount;
	long long _similarBidirectionalInteractionsCount;

}

@property (retain) _CDContact * contact;                                         //@synthesize contact=_contact - In the implementation block
@property (retain) NSString * account;                                           //@synthesize account=_account - In the implementation block
@property (retain) NSString * bundleId;                                          //@synthesize bundleId=_bundleId - In the implementation block
@property (assign) long long mechanism;                                          //@synthesize mechanism=_mechanism - In the implementation block
@property (assign) double score;                                                 //@synthesize score=_score - In the implementation block
@property (retain) NSSet * reasons; 
@property (assign) long long similarOutgoingInteractionsCount;                   //@synthesize similarOutgoingInteractionsCount=_similarOutgoingInteractionsCount - In the implementation block
@property (assign) long long similarIncomingInteractionsCount;                   //@synthesize similarIncomingInteractionsCount=_similarIncomingInteractionsCount - In the implementation block
@property (assign) long long similarBidirectionalInteractionsCount;              //@synthesize similarBidirectionalInteractionsCount=_similarBidirectionalInteractionsCount - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)account;
-(_CDContact *)contact;
-(void)setContact:(_CDContact *)arg1 ;
-(void)setAccount:(NSString *)arg1 ;
-(void)setBundleId:(NSString *)arg1 ;
-(double)score;
-(NSString *)bundleId;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setScore:(double)arg1 ;
-(void)setReasons:(NSSet *)arg1 ;
-(void)addReasons:(id)arg1 ;
-(long long)similarOutgoingInteractionsCount;
-(id)description;
-(void)setSimilarOutgoingInteractionsCount:(long long)arg1 ;
-(id)descriptionOfReasons:(id)arg1 ;
-(long long)similarIncomingInteractionsCount;
-(void)setSimilarIncomingInteractionsCount:(long long)arg1 ;
-(long long)similarBidirectionalInteractionsCount;
-(void)setSimilarBidirectionalInteractionsCount:(long long)arg1 ;
-(long long)mechanism;
-(NSSet *)reasons;
-(id)initWithCoder:(id)arg1 ;
-(void)setMechanism:(long long)arg1 ;
-(void)addReason:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

