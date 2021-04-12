/*
* Generated on Monday, March 1, 2021 at 2:30:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/

#import <Contacts/Contacts-Structs.h>
#import <libobjc.A.dylib/CNObjectValidation.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary;

@interface CNActivityAlert : NSObject <CNObjectValidation, NSCopying, NSSecureCoding> {

	BOOL _ignoreMute;
	NSString* _sound;
	NSString* _vibration;
	NSDictionary* _userInfo;

}

@property (nonatomic,copy) NSString * sound;                        //@synthesize sound=_sound - In the implementation block
@property (nonatomic,copy) NSString * vibration;                    //@synthesize vibration=_vibration - In the implementation block
@property (assign,nonatomic) BOOL ignoreMute;                       //@synthesize ignoreMute=_ignoreMute - In the implementation block
@property (nonatomic,copy) NSDictionary * userInfo;                 //@synthesize userInfo=_userInfo - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSDictionary *)userInfo;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(void)setSound:(NSString *)arg1 ;
-(NSString *)sound;
-(BOOL)isValid:(id*)arg1 ;
-(NSString *)vibration;
-(BOOL)ignoreMute;
-(id)initWithSound:(id)arg1 vibration:(id)arg2 ignoreMute:(BOOL)arg3 userInfo:(id)arg4 ;
-(void)setVibration:(NSString *)arg1 ;
-(void)setIgnoreMute:(BOOL)arg1 ;
-(id)initWithSound:(id)arg1 vibration:(id)arg2 ignoreMute:(BOOL)arg3 ;
@end

