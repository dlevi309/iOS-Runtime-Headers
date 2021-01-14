/*
* Generated on Thursday, January 14, 2021 at 2:24:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/


@class HFTransformItemProvider, HUPresenceActivationOptionItem;

@interface HUPresenceActivationOptionState : NSObject {

	BOOL _expanded;
	HFTransformItemProvider* _userOptionItemProvider;
	HUPresenceActivationOptionItem* _activationOptionItem;

}

@property (nonatomic,readonly) HFTransformItemProvider * userOptionItemProvider;                   //@synthesize userOptionItemProvider=_userOptionItemProvider - In the implementation block
@property (nonatomic,readonly) HUPresenceActivationOptionItem * activationOptionItem;              //@synthesize activationOptionItem=_activationOptionItem - In the implementation block
@property (assign,getter=isSelected,nonatomic) BOOL selected; 
@property (assign,getter=isExpanded,nonatomic) BOOL expanded;                                      //@synthesize expanded=_expanded - In the implementation block
@property (nonatomic,readonly) unsigned long long activationGranularity; 
-(void)setExpanded:(BOOL)arg1 ;
-(BOOL)isExpanded;
-(id)init;
-(BOOL)isSelected;
-(void)setSelected:(BOOL)arg1 ;
-(unsigned long long)activationGranularity;
-(HUPresenceActivationOptionItem *)activationOptionItem;
-(HFTransformItemProvider *)userOptionItemProvider;
-(id)initWithUserOptionItemProvider:(id)arg1 activationOptionItem:(id)arg2 ;
@end

