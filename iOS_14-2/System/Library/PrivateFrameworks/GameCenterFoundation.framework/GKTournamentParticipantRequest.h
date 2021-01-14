/*
* Generated on Thursday, January 14, 2021 at 2:24:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setInternal:(GKTournamentParticipantRequestInternal *)arg1 ;
-(void)setRange:(NSRange)arg1 ;
-(id)init;
-(NSRange)range;
-(void)encodeWithCoder:(id)arg1 ;
-(GKTournamentParticipantRequestInternal *)internal;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(id)initWithInternalRepresentation:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

