/*
* Generated on Monday, March 1, 2021 at 2:34:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/


@interface HUPresenceUserOptionState : NSObject {

	BOOL _selected;
	BOOL _locationAvailable;
	unsigned long long _activationGranularity;

}

@property (nonatomic,readonly) unsigned long long activationGranularity;                       //@synthesize activationGranularity=_activationGranularity - In the implementation block
@property (getter=isSelected,nonatomic,readonly) BOOL selected;                                //@synthesize selected=_selected - In the implementation block
@property (getter=isLocationAvailable,nonatomic,readonly) BOOL locationAvailable;              //@synthesize locationAvailable=_locationAvailable - In the implementation block
-(id)init;
-(BOOL)isSelected;
-(unsigned long long)activationGranularity;
-(id)initWithActivationGranularity:(unsigned long long)arg1 selected:(BOOL)arg2 locationAvailable:(BOOL)arg3 ;
-(BOOL)isLocationAvailable;
@end

