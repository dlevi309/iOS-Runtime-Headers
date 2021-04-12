/*
* Generated on Monday, March 1, 2021 at 2:34:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <Home/HFItemManager.h>
#import <libobjc.A.dylib/HUUserItemManager.h>

@class HFStaticItem, HMOutgoingHomeInvitation, NSString;

@interface HUEditOutgoingInvitationItemManager : HFItemManager <HUUserItemManager> {

	HFStaticItem* _inviteAgainItem;
	HFStaticItem* _removeItem;

}

@property (nonatomic,retain) HFStaticItem * inviteAgainItem;                               //@synthesize inviteAgainItem=_inviteAgainItem - In the implementation block
@property (nonatomic,retain) HFStaticItem * removeItem;                                    //@synthesize removeItem=_removeItem - In the implementation block
@property (nonatomic,readonly) HMOutgoingHomeInvitation * outgoingInvitation; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setRemoveItem:(HFStaticItem *)arg1 ;
-(HFStaticItem *)removeItem;
-(HMOutgoingHomeInvitation *)outgoingInvitation;
-(id)_buildItemProvidersForHome:(id)arg1 ;
-(id)_buildSectionsWithDisplayedItems:(id)arg1 ;
-(HFStaticItem *)inviteAgainItem;
-(void)setInviteAgainItem:(HFStaticItem *)arg1 ;
-(id)_removeTitleForInvitationState:(long long)arg1 ;
@end

