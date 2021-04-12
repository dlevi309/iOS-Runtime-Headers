/*
* Generated on Monday, March 1, 2021 at 2:32:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSString *)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSPredicate *)filterPredicate;
-(NSString *)ef_publicDescription;
-(EMMailboxScope *)mailboxScope;
-(id)cachedSelf;
-(id)initWithMailboxScope:(id)arg1 filterPredicate:(id)arg2 ;
@end

