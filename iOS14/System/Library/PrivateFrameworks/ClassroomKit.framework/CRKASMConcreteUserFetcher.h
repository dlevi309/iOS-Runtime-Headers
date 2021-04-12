/*
* Generated on Thursday, January 14, 2021 at 2:27:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <libobjc.A.dylib/CRKASMUserFetching.h>

@protocol CRKClassKitRosterRequirements;
@interface CRKASMConcreteUserFetcher : NSObject <CRKASMUserFetching> {

	id<CRKClassKitRosterRequirements> _rosterRequirements;

}

@property (nonatomic,readonly) id<CRKClassKitRosterRequirements> rosterRequirements;              //@synthesize rosterRequirements=_rosterRequirements - In the implementation block
-(id<CRKClassKitRosterRequirements>)rosterRequirements;
-(void)fetchASMUsersWithIdentifiers:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithRosterRequirements:(id)arg1 ;
@end

