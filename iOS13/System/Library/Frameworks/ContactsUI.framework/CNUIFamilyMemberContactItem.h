/*
* Generated on Monday, March 1, 2021 at 2:30:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)familyMemberContactItemFromCoreFamilyMemberContactItem:(id)arg1 ;
+(id)typeLabelStringFromContactType:(long long)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)label;
-(NSString *)contactIdentifier;
-(id)initWithLabel:(id)arg1 ;
-(NSString *)detailLabel;
-(id)initWithLabel:(id)arg1 detailLabel:(id)arg2 unreachable:(BOOL)arg3 ;
-(id)initWithContactIdentifier:(id)arg1 label:(id)arg2 detailLabel:(id)arg3 unreachable:(BOOL)arg4 ;
-(BOOL)isUnreachable;
@end

