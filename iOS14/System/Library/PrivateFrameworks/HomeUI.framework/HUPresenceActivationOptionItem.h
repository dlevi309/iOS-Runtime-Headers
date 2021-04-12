/*
* Generated on Thursday, January 14, 2021 at 2:24:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <Home/HFItem.h>

@class HMHome, HFSelectedUserCollection;

@interface HUPresenceActivationOptionItem : HFItem {

	BOOL _selected;
	HMHome* _home;
	unsigned long long _activationGranularity;
	unsigned long long _eventType;
	unsigned long long _style;
	HFSelectedUserCollection* _selectedUsers;

}

@property (nonatomic,readonly) HMHome * home;                                         //@synthesize home=_home - In the implementation block
@property (nonatomic,readonly) unsigned long long activationGranularity;              //@synthesize activationGranularity=_activationGranularity - In the implementation block
@property (nonatomic,readonly) unsigned long long eventType;                          //@synthesize eventType=_eventType - In the implementation block
@property (nonatomic,readonly) unsigned long long style;                              //@synthesize style=_style - In the implementation block
@property (assign,getter=isSelected,nonatomic) BOOL selected;                         //@synthesize selected=_selected - In the implementation block
@property (nonatomic,retain) HFSelectedUserCollection * selectedUsers;                //@synthesize selectedUsers=_selectedUsers - In the implementation block
-(unsigned long long)eventType;
-(id)init;
-(BOOL)isSelected;
-(id)_subclass_updateWithOptions:(id)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(unsigned long long)activationGranularity;
-(unsigned long long)style;
-(HMHome *)home;
-(HFSelectedUserCollection *)selectedUsers;
-(void)setSelectedUsers:(HFSelectedUserCollection *)arg1 ;
-(id)initWithEventType:(unsigned long long)arg1 selectedUsers:(id)arg2 activationGranularity:(unsigned long long)arg3 style:(unsigned long long)arg4 home:(id)arg5 ;
-(id)_summaryTitle;
@end

