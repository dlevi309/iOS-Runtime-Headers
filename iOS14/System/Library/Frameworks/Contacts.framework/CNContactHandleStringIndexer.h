/*
* Generated on Thursday, January 14, 2021 at 2:20:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSDictionary *)index;
-(id)init;
-(id)description;
-(CNCache *)indexImpl;
-(void)indexContact:(id)arg1 ;
-(id)initWithTargetHandleStrings:(id)arg1 ;
-(id)indexWithRawHandles;
-(void)indexPhoneNumbersOnContact:(id)arg1 ;
-(void)indexEmailAddressesOnContact:(id)arg1 ;
-(void)indexContacts:(id)arg1 ;
-(NSArray *)targetHandleStrings;
@end

