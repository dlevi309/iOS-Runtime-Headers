/*
* Generated on Monday, March 1, 2021 at 2:30:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)kind;
-(NSArray *)contacts;
-(NSArray *)contactIdentifiers;
-(NSString *)linkIdentifier;
-(id)initWithKind:(long long)arg1 contacts:(id)arg2 linkIdentifier:(id)arg3 ;
@end

