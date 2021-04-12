/*
* Generated on Monday, March 1, 2021 at 2:32:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
*/

#import <ContactsUICore/ContactsUICore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSData;

@interface CNUICoreFamilyMemberContactItem : NSObject <NSCopying, NSSecureCoding> {

	BOOL _isUnreachable;
	BOOL _hasBeenPersisted;
	NSString* _contactIdentifier;
	NSString* _formattedName;
	NSData* _imageData;
	long long _contactType;
	long long _whitelistStatus;

}

@property (nonatomic,readonly) NSString * contactIdentifier;              //@synthesize contactIdentifier=_contactIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * formattedName;                  //@synthesize formattedName=_formattedName - In the implementation block
@property (nonatomic,readonly) NSData * imageData;                        //@synthesize imageData=_imageData - In the implementation block
@property (nonatomic,readonly) BOOL isUnreachable;                        //@synthesize isUnreachable=_isUnreachable - In the implementation block
@property (nonatomic,readonly) long long contactType;                     //@synthesize contactType=_contactType - In the implementation block
@property (nonatomic,readonly) long long whitelistStatus;                 //@synthesize whitelistStatus=_whitelistStatus - In the implementation block
@property (nonatomic,readonly) BOOL hasBeenPersisted;                     //@synthesize hasBeenPersisted=_hasBeenPersisted - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)contactIdentifier;
-(NSString *)formattedName;
-(NSData *)imageData;
-(id)initWithContactIdentifier:(id)arg1 ;
-(long long)contactType;
-(BOOL)hasBeenPersisted;
-(BOOL)isUnreachable;
-(id)initWithContactIdentifier:(id)arg1 formattedName:(id)arg2 imageData:(id)arg3 isUnreachable:(BOOL)arg4 contactType:(long long)arg5 whitelistStatus:(long long)arg6 hasBeenPersisted:(BOOL)arg7 ;
-(long long)whitelistStatus;
@end

