/*
* Generated on Thursday, January 14, 2021 at 2:24:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(HMOutgoingHomeInvitation *)outgoingInvitation;
-(id)_buildSectionsWithDisplayedItems:(id)arg1 ;
-(id)_buildItemProvidersForHome:(id)arg1 ;
-(void)setRemoveItem:(HFStaticItem *)arg1 ;
-(HFStaticItem *)removeItem;
-(HFStaticItem *)inviteAgainItem;
-(void)setInviteAgainItem:(HFStaticItem *)arg1 ;
-(id)_removeTitleForInvitationState:(long long)arg1 ;
@end

