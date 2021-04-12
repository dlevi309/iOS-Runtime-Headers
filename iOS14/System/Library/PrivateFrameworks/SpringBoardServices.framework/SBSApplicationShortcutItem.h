/*
* Generated on Thursday, January 14, 2021 at 2:21:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setLocalizedTitle:(NSString *)arg1 ;
-(unsigned long long)activationMode;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(NSString *)targetContentIdentifier;
-(NSString *)localizedTitle;
-(void)setTargetContentIdentifier:(NSString *)arg1 ;
-(NSDictionary *)userInfo;
-(SBSApplicationShortcutIcon *)icon;
-(void)setIcon:(SBSApplicationShortcutIcon *)arg1 ;
-(void)setType:(NSString *)arg1 ;
-(NSString *)localizedSubtitle;
-(void)setLocalizedSubtitle:(NSString *)arg1 ;
-(NSString *)description;
-(void)setActivationMode:(unsigned long long)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(NSData *)userInfoData;
-(NSString *)type;
-(void)setUserInfoData:(NSData *)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(void)_localizeWithHandler:(/*^block*/id)arg1 ;
-(NSString *)bundleIdentifierToLaunch;
-(void)setBundleIdentifierToLaunch:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

