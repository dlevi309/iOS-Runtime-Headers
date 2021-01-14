/*
* Generated on Thursday, January 14, 2021 at 2:24:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
*/

#import <GameCenterFoundation/GKFamiliarPlayerInternal.h>

@class NSString, NSDate, GKGameInternal;

@interface GKFriendPlayerInternal : GKFamiliarPlayerInternal {

	NSString* _status;
	NSDate* _lastPlayedDate;
	GKGameInternal* _lastPlayedGame;

}
+(BOOL)supportsSecureCoding;
+(id)secureCodedPropertyKeys;
-(id)lastPlayedDate;
-(void)setLastPlayedDate:(id)arg1 ;
-(void)setStatus:(id)arg1 ;
-(id)lastPlayedGame;
-(BOOL)isFriend;
-(id)status;
-(void)dealloc;
-(int)defaultFamiliarity;
-(void)setLastPlayedGame:(id)arg1 ;
@end

