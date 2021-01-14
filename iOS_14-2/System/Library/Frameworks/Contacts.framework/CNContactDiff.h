/*
* Generated on Thursday, January 14, 2021 at 2:20:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/


@class NSArray;

@interface CNContactDiff : NSObject {

	NSArray* _updates;

}

@property (copy,readonly) NSArray * updates;              //@synthesize updates=_updates - In the implementation block
+(id)diffContact:(id)arg1 to:(id)arg2 error:(id*)arg3 ;
-(NSArray *)updates;
-(void)applyToMutableContact:(id)arg1 withIdentifierMap:(id)arg2 ;
-(void)applyToMutableContacts:(id)arg1 withIdentifierMap:(id)arg2 ;
-(id)description;
-(id)contactByApplyingUpdatesToContact:(id)arg1 ;
-(id)initWithUpdates:(id)arg1 ;
-(BOOL)applyToABPerson:(void*)arg1 logger:(id)arg2 error:(id*)arg3 ;
@end

