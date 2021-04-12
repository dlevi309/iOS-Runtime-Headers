/*
* Generated on Monday, March 1, 2021 at 2:30:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/


@class CNCache, NSArray, NSDictionary;

@interface CNContactHandleStringIndexer : NSObject {

	CNCache* _indexImpl;
	NSArray* _targetHandleStrings;

}

@property (nonatomic,readonly) CNCache * indexImpl;                        //@synthesize indexImpl=_indexImpl - In the implementation block
@property (nonatomic,readonly) NSArray * targetHandleStrings;              //@synthesize targetHandleStrings=_targetHandleStrings - In the implementation block
@property (nonatomic,readonly) NSDictionary * index; 
+(id)indexByMatchingIndexWithRawHandles:(id)arg1 toTargetHandleStrings:(id)arg2 ;
-(id)init;
-(id)description;
-(NSDictionary *)index;
-(id)initWithTargetHandleStrings:(id)arg1 ;
-(id)indexWithRawHandles;
-(void)indexContact:(id)arg1 ;
-(void)indexEmailAddressesOnContact:(id)arg1 ;
-(void)indexPhoneNumbersOnContact:(id)arg1 ;
-(void)indexContacts:(id)arg1 ;
-(CNCache *)indexImpl;
-(NSArray *)targetHandleStrings;
@end

