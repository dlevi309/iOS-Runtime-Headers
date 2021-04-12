/*
* Generated on Thursday, January 14, 2021 at 2:24:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
*/


@class GKInviteInternal, GKPlayer, NSString, NSData;

@interface GKInvite : NSObject {

	BOOL _cancelled;
	GKInviteInternal* _internal;
	GKPlayer* _sender;

}

@property (retain) GKInviteInternal * internal;                              //@synthesize internal=_internal - In the implementation block
@property (nonatomic,readonly) NSString * inviteID; 
@property (nonatomic,readonly) NSData * sessionToken; 
@property (nonatomic,readonly) NSString * message; 
@property (nonatomic,readonly) BOOL isNearby; 
@property (assign,getter=isCancelled,nonatomic) BOOL cancelled;              //@synthesize cancelled=_cancelled - In the implementation block
@property (nonatomic,retain,readonly) GKPlayer * sender;                     //@synthesize sender=_sender - In the implementation block
@property (getter=isHosted,nonatomic,readonly) BOOL hosted; 
@property (nonatomic,readonly) unsigned long long playerGroup; 
@property (nonatomic,readonly) unsigned playerAttributes; 
@property (nonatomic,retain,readonly) NSString * inviter; 
+(id)instanceMethodSignatureForSelector:(SEL)arg1 ;
+(BOOL)instancesRespondToSelector:(SEL)arg1 ;
-(void)setInternal:(GKInviteInternal *)arg1 ;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(GKPlayer *)sender;
-(void)setCancelled:(BOOL)arg1 ;
-(id)init;
-(GKInviteInternal *)internal;
-(id)valueForUndefinedKey:(id)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(id)description;
-(NSString *)inviter;
-(id)initWithInternalRepresentation:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)isHosted;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(BOOL)isCancelled;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

