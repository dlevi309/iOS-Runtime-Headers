/*
* Generated on Thursday, January 14, 2021 at 2:24:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSPredicate;

@interface GKTournamentPredicate : NSObject <NSSecureCoding> {

	NSPredicate* _predicate;

}

@property (nonatomic,retain) NSPredicate * predicate;              //@synthesize predicate=_predicate - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)predicateForAvailableTournaments;
+(id)predicateForAvailableCustomTournaments;
+(id)predicateForAvailableAutoTournaments;
+(id)predicateForAvailableTournamentsPlayerRegisteredIn;
+(id)predicateForPastTournaments;
+(id)predicateForPastAutoTournaments;
+(id)predicateForPastCustomTournaments;
-(id)initWithPredicate:(id)arg1 ;
-(NSPredicate *)predicate;
-(void)setPredicate:(NSPredicate *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

