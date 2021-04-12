/*
* Generated on Thursday, January 14, 2021 at 2:20:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSString, UIApplicationShortcutIcon, NSData, SBSApplicationShortcutItem, NSDictionary;

@interface UIApplicationShortcutItem : NSObject <NSCopying, NSMutableCopying> {

	NSString* _type;
	NSString* _localizedTitle;
	NSString* _localizedSubtitle;
	UIApplicationShortcutIcon* _icon;
	id _targetContentIdentifier;
	unsigned long long _activationMode;
	NSData* _userInfoData;

}

@property (nonatomic,copy,readonly) SBSApplicationShortcutItem * sbsShortcutItem; 
@property (nonatomic,readonly) unsigned long long activationMode; 
@property (nonatomic,copy) NSString * type;                                                    //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSString * localizedTitle;                                          //@synthesize localizedTitle=_localizedTitle - In the implementation block
@property (nonatomic,copy) NSString * localizedSubtitle;                                       //@synthesize localizedSubtitle=_localizedSubtitle - In the implementation block
@property (nonatomic,copy) UIApplicationShortcutIcon * icon;                                   //@synthesize icon=_icon - In the implementation block
@property (nonatomic,copy) NSDictionary * userInfo; 
@property (assign,nonatomic) unsigned long long activationMode;                                //@synthesize activationMode=_activationMode - In the implementation block
@property (nonatomic,copy) NSData * userInfoData;                                              //@synthesize userInfoData=_userInfoData - In the implementation block
@property (nonatomic,copy) id targetContentIdentifier;                                         //@synthesize targetContentIdentifier=_targetContentIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
+(unsigned long long)_uiActivationModeFromSBSActivationMode:(unsigned long long)arg1 ;
+(unsigned long long)_sbsActivationModeFromUIActivationMode:(unsigned long long)arg1 ;
-(void)setLocalizedTitle:(NSString *)arg1 ;
-(unsigned long long)activationMode;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(id)targetContentIdentifier;
-(NSString *)localizedTitle;
-(void)setTargetContentIdentifier:(id)arg1 ;
-(SBSApplicationShortcutItem *)sbsShortcutItem;
-(NSDictionary *)userInfo;
-(id)init;
-(UIApplicationShortcutIcon *)icon;
-(void)setIcon:(UIApplicationShortcutIcon *)arg1 ;
-(void)setType:(NSString *)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSString *)localizedSubtitle;
-(void)setLocalizedSubtitle:(NSString *)arg1 ;
-(id)description;
-(void)setActivationMode:(unsigned long long)arg1 ;
-(NSData *)userInfoData;
-(id)initWithType:(id)arg1 localizedTitle:(id)arg2 localizedSubtitle:(id)arg3 icon:(id)arg4 userInfo:(id)arg5 ;
-(NSString *)type;
-(void)setUserInfoData:(NSData *)arg1 ;
-(unsigned long long)hash;
-(id)_initWithType:(id)arg1 localizedTitle:(id)arg2 localizedSubtitle:(id)arg3 icon:(id)arg4 userInfoData:(id)arg5 activationMode:(unsigned long long)arg6 targetContentIdentifier:(id)arg7 ;
-(id)initWithType:(id)arg1 localizedTitle:(id)arg2 ;
-(id)initWithSBSApplicationShortcutItem:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

