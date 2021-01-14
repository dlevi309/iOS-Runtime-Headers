/*
* Generated on Thursday, January 14, 2021 at 2:25:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/

#import <CoreSuggestionsInternals/CoreSuggestionsInternals-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface SGIdentityKey : NSObject <NSCopying> {

	NSString* _content;
	unsigned long long _type;

}

@property (nonatomic,readonly) NSString * externalId; 
@property (nonatomic,readonly) unsigned long long type;              //@synthesize type=_type - In the implementation block
+(id)keyForEmail:(id)arg1 ;
+(unsigned long long)identityTypeForKeyPart:(id)arg1 ;
+(id)keyForSocialProfile:(id)arg1 ;
+(id)keyForNormalizedPhone:(id)arg1 ;
+(id)keyForContactExternalId:(int)arg1 ;
+(id)keyForInstantMessageAddress:(id)arg1 ;
+(id)keyForPersonHandle:(id)arg1 ;
+(BOOL)isSupportedEntityType:(long long)arg1 ;
+(id)keyForNormalizedEmail:(id)arg1 ;
+(id)keyForContactUniqueId:(id)arg1 ;
-(id)identityKey;
-(id)serialize;
-(NSString *)externalId;
-(id)initWithType:(unsigned long long)arg1 content:(id)arg2 ;
-(id)initWithSerialized:(id)arg1 ;
-(id)emailAddress;
-(id)uniqueIdentifier;
-(BOOL)hasEmailAddress;
-(id)phone;
-(BOOL)hasInstantMessageAddress;
-(BOOL)hasSocialProfile;
-(id)description;
-(id)socialProfile;
-(unsigned long long)type;
-(BOOL)hasPhone;
-(unsigned long long)hash;
-(BOOL)isEqualToIdentityKey:(id)arg1 ;
-(id)instantMessageAddress;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

