/*
* Generated on Monday, March 1, 2021 at 2:30:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
*/

#import <SpringBoardServices/SpringBoardServices-Structs.h>
#import <libobjc.A.dylib/BSXPCCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, SBSApplicationShortcutIcon, NSData, NSDictionary;

@interface SBSApplicationShortcutItem : NSObject <BSXPCCoding, NSCopying> {

	NSString* _type;
	NSString* _localizedTitle;
	NSString* _localizedSubtitle;
	SBSApplicationShortcutIcon* _icon;
	unsigned long long _activationMode;
	NSString* _bundleIdentifierToLaunch;
	NSString* _targetContentIdentifier;
	NSData* _userInfoData;

}

@property (nonatomic,retain) NSData * userInfoData;                          //@synthesize userInfoData=_userInfoData - In the implementation block
@property (nonatomic,copy) NSString * type;                                  //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSString * localizedTitle;                        //@synthesize localizedTitle=_localizedTitle - In the implementation block
@property (nonatomic,copy) NSString * localizedSubtitle;                     //@synthesize localizedSubtitle=_localizedSubtitle - In the implementation block
@property (nonatomic,copy) SBSApplicationShortcutIcon * icon;                //@synthesize icon=_icon - In the implementation block
@property (nonatomic,copy) NSDictionary * userInfo; 
@property (assign,nonatomic) unsigned long long activationMode;              //@synthesize activationMode=_activationMode - In the implementation block
@property (nonatomic,copy) NSString * bundleIdentifierToLaunch;              //@synthesize bundleIdentifierToLaunch=_bundleIdentifierToLaunch - In the implementation block
@property (nonatomic,copy) NSString * targetContentIdentifier;               //@synthesize targetContentIdentifier=_targetContentIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_staticApplicationShortcutItemsFromInfoPlistEntry:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)type;
-(void)setType:(NSString *)arg1 ;
-(NSDictionary *)userInfo;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(NSString *)targetContentIdentifier;
-(void)setTargetContentIdentifier:(NSString *)arg1 ;
-(NSString *)localizedTitle;
-(void)setLocalizedTitle:(NSString *)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(SBSApplicationShortcutIcon *)icon;
-(NSString *)localizedSubtitle;
-(NSData *)userInfoData;
-(unsigned long long)activationMode;
-(void)setLocalizedSubtitle:(NSString *)arg1 ;
-(void)setIcon:(SBSApplicationShortcutIcon *)arg1 ;
-(void)setActivationMode:(unsigned long long)arg1 ;
-(void)setUserInfoData:(NSData *)arg1 ;
-(NSString *)bundleIdentifierToLaunch;
-(void)setBundleIdentifierToLaunch:(NSString *)arg1 ;
-(void)_localizeWithHandler:(/*^block*/id)arg1 ;
@end

