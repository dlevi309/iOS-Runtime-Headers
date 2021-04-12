/*
* Generated on Monday, March 1, 2021 at 2:34:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <UIKitCore/UITableViewCell.h>
#import <libobjc.A.dylib/HUDisableableCellProtocol.h>

@protocol CNAvatarViewController;
@class NSString, HFUserHandle, UIImageView, HUTitleDescriptionContentView, HULayoutContainerView;

@interface HUPresenceUserCell : UITableViewCell <HUDisableableCellProtocol> {

	BOOL _disabled;
	BOOL _checked;
	BOOL _locationUnavailable;
	NSString* _userName;
	NSString* _deviceName;
	HFUserHandle* _userHandle;
	UIImageView* _checkmarkImageView;
	HUTitleDescriptionContentView* _titleDescriptionView;
	id<CNAvatarViewController> _avatarViewController;
	HULayoutContainerView* _avatarContainerView;

}

@property (nonatomic,readonly) UIImageView * checkmarkImageView;                                  //@synthesize checkmarkImageView=_checkmarkImageView - In the implementation block
@property (nonatomic,readonly) HUTitleDescriptionContentView * titleDescriptionView;              //@synthesize titleDescriptionView=_titleDescriptionView - In the implementation block
@property (nonatomic,readonly) id<CNAvatarViewController> avatarViewController;                   //@synthesize avatarViewController=_avatarViewController - In the implementation block
@property (nonatomic,readonly) HULayoutContainerView * avatarContainerView;                       //@synthesize avatarContainerView=_avatarContainerView - In the implementation block
@property (nonatomic,copy) NSString * userName;                                                   //@synthesize userName=_userName - In the implementation block
@property (nonatomic,copy) NSString * deviceName;                                                 //@synthesize deviceName=_deviceName - In the implementation block
@property (nonatomic,retain) HFUserHandle * userHandle;                                           //@synthesize userHandle=_userHandle - In the implementation block
@property (assign,getter=isChecked,nonatomic) BOOL checked;                                       //@synthesize checked=_checked - In the implementation block
@property (assign,getter=isLocationUnavailable,nonatomic) BOOL locationUnavailable;               //@synthesize locationUnavailable=_locationUnavailable - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,getter=isDisabled,nonatomic) BOOL disabled;                                     //@synthesize disabled=_disabled - In the implementation block
-(NSString *)userName;
-(void)prepareForReuse;
-(void)setDeviceName:(NSString *)arg1 ;
-(NSString *)deviceName;
-(BOOL)isDisabled;
-(void)setDisabled:(BOOL)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setChecked:(BOOL)arg1 ;
-(BOOL)isChecked;
-(id<CNAvatarViewController>)avatarViewController;
-(HULayoutContainerView *)avatarContainerView;
-(void)setUserName:(NSString *)arg1 ;
-(void)_setupConstraints;
-(UIImageView *)checkmarkImageView;
-(HFUserHandle *)userHandle;
-(void)setUserHandle:(HFUserHandle *)arg1 ;
-(HUTitleDescriptionContentView *)titleDescriptionView;
-(void)setLocationUnavailable:(BOOL)arg1 ;
-(void)_updateCustomSeparatorInset;
-(void)_updateDescriptionText;
-(BOOL)isLocationUnavailable;
@end

