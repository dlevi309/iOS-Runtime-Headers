/*
* Generated on Monday, March 1, 2021 at 2:34:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)status;
-(void)setStatus:(id)arg1 ;
-(id)lastPlayedDate;
-(void)setLastPlayedDate:(id)arg1 ;
-(id)lastPlayedGame;
-(int)defaultFamiliarity;
-(BOOL)isFriend;
-(void)setLastPlayedGame:(id)arg1 ;
@end

