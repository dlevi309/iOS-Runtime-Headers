/*
* Generated on Thursday, January 14, 2021 at 2:24:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
*/

#import <AssistantUI/AssistantUI-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, AFAccount, NSNumber;

@interface AFUISiriSessionInfo : NSObject <NSSecureCoding, NSCopying> {

	NSString* _identifier;
	NSString* _assistantVersion;
	AFAccount* _activeAccount;
	NSNumber* _userAccountCount;

}

@property (nonatomic,copy) NSString * assistantVersion;                 //@synthesize assistantVersion=_assistantVersion - In the implementation block
@property (nonatomic,copy) AFAccount * activeAccount;                   //@synthesize activeAccount=_activeAccount - In the implementation block
@property (nonatomic,copy) NSNumber * userAccountCount;                 //@synthesize userAccountCount=_userAccountCount - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(AFAccount *)activeAccount;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)_initWithIdentifier:(id)arg1 ;
-(id)description;
-(void)setActiveAccount:(AFAccount *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)setAssistantVersionAndGenerateLightweightInfo:(id)arg1 ;
-(id)setActiveAccountAndGenerateLightweightInfo:(id)arg1 ;
-(id)setUserAccountCountGenerateLightweightInfo:(long long)arg1 ;
-(void)setAssistantVersion:(NSString *)arg1 ;
-(id)_setPropertyValue:(id)arg1 withSelector:(SEL)arg2 ;
-(void)setUserAccountCount:(NSNumber *)arg1 ;
-(id)_strippedInfo;
-(BOOL)applyInfo:(id)arg1 ;
-(NSString *)assistantVersion;
-(NSNumber *)userAccountCount;
@end

