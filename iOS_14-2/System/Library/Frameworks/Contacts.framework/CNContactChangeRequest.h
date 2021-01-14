/*
* Generated on Thursday, January 14, 2021 at 2:20:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSString;

@interface CNContactChangeRequest : NSObject <NSSecureCoding> {

	NSArray* _contacts;
	long long _kind;
	NSString* _linkIdentifier;

}

@property (nonatomic,copy,readonly) NSArray * contacts;                        //@synthesize contacts=_contacts - In the implementation block
@property (nonatomic,copy,readonly) NSArray * contactIdentifiers; 
@property (nonatomic,readonly) long long kind;                                 //@synthesize kind=_kind - In the implementation block
@property (nonatomic,copy,readonly) NSString * linkIdentifier;                 //@synthesize linkIdentifier=_linkIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)contactChangeRequestWithKind:(long long)arg1 contacts:(id)arg2 linkIdentifier:(id)arg3 ;
-(NSArray *)contacts;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)kind;
-(NSString *)linkIdentifier;
-(id)initWithKind:(long long)arg1 contacts:(id)arg2 linkIdentifier:(id)arg3 ;
-(NSArray *)contactIdentifiers;
-(id)initWithCoder:(id)arg1 ;
@end

