/*
* Generated on Thursday, January 14, 2021 at 2:20:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, NSString;

@interface CNUICoreApplicationAuthorizationItem : NSObject <NSCopying, NSSecureCoding> {

	NSData* _icon;
	NSString* _name;
	NSString* _bundleIdentifier;
	long long _deviceType;
	long long _authorization;
	CNUICoreApplicationAuthorizationItem* _snapshot;

}

@property (nonatomic,readonly) CNUICoreApplicationAuthorizationItem * snapshot;              //@synthesize snapshot=_snapshot - In the implementation block
@property (nonatomic,readonly) NSData * icon;                                                //@synthesize icon=_icon - In the implementation block
@property (nonatomic,readonly) NSString * name;                                              //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSString * bundleIdentifier;                                  //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,readonly) long long deviceType;                                         //@synthesize deviceType=_deviceType - In the implementation block
@property (assign,nonatomic) long long authorization;                                        //@synthesize authorization=_authorization - In the implementation block
@property (nonatomic,readonly) BOOL hasChanges; 
+(BOOL)supportsSecureCoding;
-(CNUICoreApplicationAuthorizationItem *)snapshot;
-(long long)deviceType;
-(long long)authorization;
-(id)init;
-(NSData *)icon;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(NSString *)name;
-(id)description;
-(void)setAuthorization:(long long)arg1 ;
-(BOOL)hasChanges;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithIcon:(id)arg1 name:(id)arg2 bundleIdentifier:(id)arg3 deviceType:(long long)arg4 authorization:(long long)arg5 ;
-(id)itemBySettingIcon:(id)arg1 ;
-(id)initWithIcon:(id)arg1 name:(id)arg2 bundleIdentifier:(id)arg3 deviceType:(long long)arg4 authorization:(long long)arg5 shouldTakeSnapshot:(BOOL)arg6 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

