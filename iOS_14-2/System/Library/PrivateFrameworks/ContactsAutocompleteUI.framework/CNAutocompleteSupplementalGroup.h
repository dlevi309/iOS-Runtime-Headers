/*
* Generated on Thursday, January 14, 2021 at 2:23:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocompleteUI.framework/ContactsAutocompleteUI
*/


@class NSString, NSArray;

@interface CNAutocompleteSupplementalGroup : NSObject {

	NSString* _identifier;
	NSString* _title;
	NSArray* _groupMembers;

}

@property (copy,readonly) NSString * identifier;               //@synthesize identifier=_identifier - In the implementation block
@property (copy,readonly) NSString * title;                    //@synthesize title=_title - In the implementation block
@property (copy,readonly) NSArray * groupMembers;              //@synthesize groupMembers=_groupMembers - In the implementation block
-(id)initWithIdentifier:(id)arg1 title:(id)arg2 members:(id)arg3 ;
-(NSString *)identifier;
-(NSArray *)groupMembers;
-(NSString *)title;
@end

