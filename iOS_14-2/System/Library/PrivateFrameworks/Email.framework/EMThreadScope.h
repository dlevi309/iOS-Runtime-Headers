/*
* Generated on Thursday, January 14, 2021 at 2:23:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
*/

#import <Email/Email-Structs.h>
#import <libobjc.A.dylib/EFCacheable.h>
#import <libobjc.A.dylib/EFPubliclyDescribable.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class EMMailboxScope, NSPredicate, NSString;

@interface EMThreadScope : NSObject <EFCacheable, EFPubliclyDescribable, NSCopying, NSSecureCoding> {

	EMMailboxScope* _mailboxScope;
	NSPredicate* _filterPredicate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) EMMailboxScope * mailboxScope;                     //@synthesize mailboxScope=_mailboxScope - In the implementation block
@property (nonatomic,readonly) NSPredicate * filterPredicate;                     //@synthesize filterPredicate=_filterPredicate - In the implementation block
@property (nonatomic,copy,readonly) NSString * ef_publicDescription; 
+(BOOL)supportsSecureCoding;
-(NSPredicate *)filterPredicate;
-(EMMailboxScope *)mailboxScope;
-(id)initWithMailboxScope:(id)arg1 filterPredicate:(id)arg2 ;
-(NSString *)ef_publicDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)debugDescription;
-(id)cachedSelf;
-(NSString *)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

