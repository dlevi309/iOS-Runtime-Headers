/*
* Generated on Thursday, January 14, 2021 at 2:23:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreKnowledge.framework/CoreKnowledge
*/

#import <CoreKnowledge/CoreKnowledge-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface CKAppInteractionsContext : NSObject <NSCopying, NSSecureCoding> {

	 _outOfAppLaunchBoundaryDonationsCountByIntentTypeAndBundleId;
	 numberOfDiscardedDonationsByIntentTypeAndBundleId;

}
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)updateDiscardedDonations:(double)arg1 forIntentType:(id)arg2 andBundleId:(id)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(void*)arg1 ;
@end

