/*
* Generated on Thursday, January 14, 2021 at 2:24:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
*/

#import <GameCenterFoundation/GKPlayerInternal.h>

@class GKPlayerInternal, NSString;

@interface GKAnonymousGuestPlayerInternal : GKPlayerInternal {

	GKPlayerInternal* _hostPlayerInternal;
	NSString* _guestIdentifier;

}

@property (nonatomic,retain) GKPlayerInternal * hostPlayerInternal;              //@synthesize hostPlayerInternal=_hostPlayerInternal - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)secureCodedPropertyKeys;
-(id)playerID;
-(BOOL)isGuestPlayer;
-(void)dealloc;
-(id)initWithHostPlayerInternal:(id)arg1 guestIdentifier:(id)arg2 ;
-(GKPlayerInternal *)hostPlayerInternal;
-(id)guestIdentifier;
-(void)setHostPlayerInternal:(GKPlayerInternal *)arg1 ;
-(void)setGuestIdentifier:(id)arg1 ;
@end

