/*
* Generated on Monday, March 1, 2021 at 2:32:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)identifier;
-(NSString *)title;
-(NSArray *)groupMembers;
-(id)initWithIdentifier:(id)arg1 title:(id)arg2 members:(id)arg3 ;
@end

