/*
* Generated on Thursday, January 14, 2021 at 2:20:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface CNUIFamilyMemberContactItem : NSObject <NSCopying> {

	BOOL _unreachable;
	NSString* _label;
	NSString* _detailLabel;
	NSString* _contactIdentifier;

}

@property (nonatomic,readonly) NSString * contactIdentifier;                       //@synthesize contactIdentifier=_contactIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * label;                                   //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) NSString * detailLabel;                             //@synthesize detailLabel=_detailLabel - In the implementation block
@property (getter=isUnreachable,nonatomic,readonly) BOOL unreachable;              //@synthesize unreachable=_unreachable - In the implementation block
+(id)typeLabelStringFromContactType:(long long)arg1 ;
+(id)familyMemberContactItemFromCoreFamilyMemberContactItem:(id)arg1 ;
-(NSString *)contactIdentifier;
-(id)init;
-(id)initWithLabel:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithLabel:(id)arg1 detailLabel:(id)arg2 unreachable:(BOOL)arg3 ;
-(id)initWithContactIdentifier:(id)arg1 label:(id)arg2 detailLabel:(id)arg3 unreachable:(BOOL)arg4 ;
-(BOOL)isUnreachable;
-(NSString *)detailLabel;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)label;
-(BOOL)isEqual:(id)arg1 ;
@end

