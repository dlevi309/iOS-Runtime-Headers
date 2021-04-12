/*
* Generated on Thursday, January 14, 2021 at 2:27:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
*/


@class NSSet;

@interface CNUICoreContactScratchpad : NSObject {

	NSSet* _edits;

}

@property (nonatomic,readonly) NSSet * edits;                         //@synthesize edits=_edits - In the implementation block
@property (nonatomic,readonly) NSSet * allContacts; 
@property (nonatomic,readonly) NSSet * modifiedContacts; 
+(id)scratchpadBySettingModifiedContact:(id)arg1 onExistingEditInScratchpad:(id)arg2 ;
+(id)scratchpadByAddingUneditedContact:(id)arg1 toScratchpad:(id)arg2 ;
+(id)scratchpadByRemovingModifiedContact:(id)arg1 fromScratchpad:(id)arg2 ;
+(id)editMatchingContact:(id)arg1 inEdits:(id)arg2 ;
+(id)editsByReplacingEdit:(id)arg1 withUpdatedEdit:(id)arg2 inEdits:(id)arg3 ;
+(id)emptyScratchpad;
-(id)init;
-(NSSet *)edits;
-(NSSet *)allContacts;
-(id)description;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)containsContact:(id)arg1 ;
-(id)initWithEdits:(id)arg1 ;
-(id)scratchpadByRemovingContacts:(id)arg1 ;
-(id)scratchpadByAddingContacts:(id)arg1 ;
-(id)modifiedContactForContact:(id)arg1 ;
-(id)scratchpadByKeepingContacts:(id)arg1 ;
-(id)modifiedIfPresentOtherwiseOriginalContactForContact:(id)arg1 ;
-(NSSet *)modifiedContacts;
@end

