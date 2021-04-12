/*
* Generated on Monday, March 1, 2021 at 2:30:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/


@class NSArray;

@interface CNContactDiff : NSObject {

	NSArray* _updates;

}

@property (copy,readonly) NSArray * updates;              //@synthesize updates=_updates - In the implementation block
+(id)diffContact:(id)arg1 to:(id)arg2 error:(id*)arg3 ;
-(id)description;
-(NSArray *)updates;
-(id)initWithUpdates:(id)arg1 ;
-(BOOL)applyToABPerson:(void*)arg1 logger:(id)arg2 error:(id*)arg3 ;
-(void)applyToMutableContact:(id)arg1 withIdentifierMap:(id)arg2 ;
-(id)contactByApplyingUpdatesToContact:(id)arg1 ;
-(void)applyToMutableContacts:(id)arg1 withIdentifierMap:(id)arg2 ;
@end

