/*
* Generated on Thursday, January 14, 2021 at 2:23:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
*/

#import <VoiceMemos/VoiceMemos-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSURL, NSString, NSDictionary, NSUUID;

@interface RCSSavedRecordingAccessToken : NSObject <NSSecureCoding, NSCoding, NSCopying> {

	BOOL _exclusive;
	long long _accessIntent;
	NSURL* _compositionAVURL;
	NSString* _accessName;
	NSDictionary* _userInfo;
	NSUUID* _identifier;

}

@property (nonatomic,copy,readonly) NSUUID * identifier;                       //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) long long accessIntent;                         //@synthesize accessIntent=_accessIntent - In the implementation block
@property (getter=isExclusive,nonatomic,readonly) BOOL exclusive;              //@synthesize exclusive=_exclusive - In the implementation block
@property (nonatomic,readonly) NSURL * compositionAVURL;                       //@synthesize compositionAVURL=_compositionAVURL - In the implementation block
@property (nonatomic,copy,readonly) NSString * accessName;                     //@synthesize accessName=_accessName - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * userInfo;                   //@synthesize userInfo=_userInfo - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)tokenWithName:(id)arg1 accessIntent:(long long)arg2 compositionAVURL:(id)arg3 ;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(NSDictionary *)userInfo;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithName:(id)arg1 accessIntent:(long long)arg2 compositionAVURL:(id)arg3 identifier:(id)arg4 ;
-(long long)accessIntent;
-(NSURL *)compositionAVURL;
-(BOOL)isExclusive;
-(id)description;
-(NSString *)accessName;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

