/*
* Generated on Monday, March 1, 2021 at 2:34:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
*/

#import <GameCenterFoundation/GameCenterFoundation-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class GKTournamentParticipantRequestInternal, NSArray;

@interface GKTournamentParticipantRequest : NSObject <NSSecureCoding> {

	GKTournamentParticipantRequestInternal* _internal;

}

@property (retain) GKTournamentParticipantRequestInternal * internal;              //@synthesize internal=_internal - In the implementation block
@property (nonatomic,retain) NSArray * participantStates; 
@property (assign,nonatomic) BOOL friendsOnly; 
@property (assign,nonatomic) NSRange range; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSRange)range;
-(id)initWithInternalRepresentation:(id)arg1 ;
-(GKTournamentParticipantRequestInternal *)internal;
-(void)setInternal:(GKTournamentParticipantRequestInternal *)arg1 ;
-(void)setRange:(NSRange)arg1 ;
@end

