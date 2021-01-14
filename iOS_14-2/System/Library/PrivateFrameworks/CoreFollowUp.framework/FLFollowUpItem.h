/*
* Generated on Thursday, January 14, 2021 at 2:24:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreFollowUp.framework/CoreFollowUp
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, FLFollowUpNotification, NSArray, NSDictionary, NSData;

@interface FLFollowUpItem : NSObject <NSSecureCoding> {

	BOOL _showInSettings;
	BOOL _shouldPersistWhenActivated;
	BOOL _shouldPersistWhenDismissed;
	NSString* _uniqueIdentifier;
	NSString* _groupIdentifier;
	FLFollowUpNotification* _notification;
	NSString* _targetBundleIdentifier;
	NSString* _title;
	NSString* _informativeText;
	NSString* _informativeFooterText;
	NSString* _representingBundlePath;
	NSString* _bundleIconName;
	unsigned long long _displayStyle;
	NSString* _categoryIdentifier;
	NSString* _extensionIdentifier;
	NSArray* _actions;
	NSDictionary* _userInfo;
	unsigned long long _sqlID;
	NSString* _clientIdentifier;
	NSString* _delegateMachServiceName;

}

@property (assign,nonatomic) unsigned long long sqlID;                           //@synthesize sqlID=_sqlID - In the implementation block
@property (nonatomic,copy) NSString * clientIdentifier;                          //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (nonatomic,copy) NSString * delegateMachServiceName;                   //@synthesize delegateMachServiceName=_delegateMachServiceName - In the implementation block
@property (nonatomic,retain) NSData * _userInfoData; 
@property (nonatomic,copy) NSString * uniqueIdentifier;                          //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (nonatomic,copy) NSString * groupIdentifier;                           //@synthesize groupIdentifier=_groupIdentifier - In the implementation block
@property (nonatomic,retain) FLFollowUpNotification * notification;              //@synthesize notification=_notification - In the implementation block
@property (assign,nonatomic) BOOL showInSettings;                                //@synthesize showInSettings=_showInSettings - In the implementation block
@property (nonatomic,copy) NSString * targetBundleIdentifier;                    //@synthesize targetBundleIdentifier=_targetBundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * title;                                     //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * informativeText;                           //@synthesize informativeText=_informativeText - In the implementation block
@property (nonatomic,copy) NSString * informativeFooterText;                     //@synthesize informativeFooterText=_informativeFooterText - In the implementation block
@property (nonatomic,copy) NSString * representingBundlePath;                    //@synthesize representingBundlePath=_representingBundlePath - In the implementation block
@property (nonatomic,copy) NSString * bundleIconName;                            //@synthesize bundleIconName=_bundleIconName - In the implementation block
@property (assign) unsigned long long displayStyle;                              //@synthesize displayStyle=_displayStyle - In the implementation block
@property (copy) NSString * categoryIdentifier;                                  //@synthesize categoryIdentifier=_categoryIdentifier - In the implementation block
@property (copy) NSString * extensionIdentifier;                                 //@synthesize extensionIdentifier=_extensionIdentifier - In the implementation block
@property (copy) NSArray * actions;                                              //@synthesize actions=_actions - In the implementation block
@property (copy) NSDictionary * userInfo;                                        //@synthesize userInfo=_userInfo - In the implementation block
@property (assign) BOOL shouldPersistWhenActivated;                              //@synthesize shouldPersistWhenActivated=_shouldPersistWhenActivated - In the implementation block
@property (assign) BOOL shouldPersistWhenDismissed;                              //@synthesize shouldPersistWhenDismissed=_shouldPersistWhenDismissed - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setActions:(NSArray *)arg1 ;
-(void)setGroupIdentifier:(NSString *)arg1 ;
-(void)setCategoryIdentifier:(NSString *)arg1 ;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(void)setUniqueIdentifier:(NSString *)arg1 ;
-(void)setClientIdentifier:(NSString *)arg1 ;
-(NSString *)categoryIdentifier;
-(NSString *)targetBundleIdentifier;
-(NSString *)groupIdentifier;
-(NSDictionary *)userInfo;
-(void)setNotification:(FLFollowUpNotification *)arg1 ;
-(id)init;
-(NSArray *)actions;
-(FLFollowUpNotification *)notification;
-(NSString *)informativeFooterText;
-(unsigned long long)sqlID;
-(void)setInformativeFooterText:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)uniqueIdentifier;
-(void)setRepresentingBundlePath:(NSString *)arg1 ;
-(void)setBundleIconName:(NSString *)arg1 ;
-(NSString *)representingBundlePath;
-(NSString *)bundleIconName;
-(void)setExtensionIdentifier:(NSString *)arg1 ;
-(void)setDisplayStyle:(unsigned long long)arg1 ;
-(id)description;
-(NSData *)_userInfoData;
-(id)initWithCoder:(id)arg1 ;
-(void)setTargetBundleIdentifier:(NSString *)arg1 ;
-(NSString *)extensionIdentifier;
-(NSString *)clientIdentifier;
-(NSString *)informativeText;
-(void)setInformativeText:(NSString *)arg1 ;
-(NSString *)title;
-(unsigned long long)displayStyle;
-(id)initWithoutDefaults;
-(void)setShowInSettings:(BOOL)arg1 ;
-(void)set_userInfoData:(NSData *)arg1 ;
-(BOOL)showInSettings;
-(BOOL)shouldPersistWhenActivated;
-(void)setShouldPersistWhenActivated:(BOOL)arg1 ;
-(BOOL)shouldPersistWhenDismissed;
-(void)setShouldPersistWhenDismissed:(BOOL)arg1 ;
-(void)setSqlID:(unsigned long long)arg1 ;
-(NSString *)delegateMachServiceName;
-(void)setDelegateMachServiceName:(NSString *)arg1 ;
-(BOOL)isHSA2LoginItem;
-(BOOL)isHSA2PasswordResetItem;
@end

