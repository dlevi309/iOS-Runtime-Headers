/*
* Generated on Monday, March 1, 2021 at 2:34:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setPredicate:(NSPredicate *)arg1 ;
-(NSPredicate *)predicate;
-(id)initWithPredicate:(id)arg1 ;
@end

