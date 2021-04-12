/*
* Generated on Thursday, January 14, 2021 at 2:26:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/AddressBook.framework/AddressBook
*/

#import <AddressBook/AddressBook-Structs.h>
#import <libobjc.A.dylib/ABSRecord.h>

@class ABSAddressBook, ABSSource, CNMutableGroup, NSString;

@interface ABSGroup : NSObject <ABSRecord> {

	int _revertedRecordID;
	ABSAddressBook* _addressBook;
	ABSSource* _source;
	CNMutableGroup* _cnImpl;

}

@property (assign,nonatomic) int revertedRecordID;                             //@synthesize revertedRecordID=_revertedRecordID - In the implementation block
@property (nonatomic,readonly) int id; 
@property (nonatomic,readonly) unsigned type; 
@property (assign,nonatomic,__weak) ABSAddressBook * addressBook;              //@synthesize addressBook=_addressBook - In the implementation block
@property (assign,nonatomic,__weak) ABSSource * source;                        //@synthesize source=_source - In the implementation block
@property (nonatomic,readonly) NSString * compositeName; 
@property (nonatomic,retain) CNMutableGroup * cnImpl;                          //@synthesize cnImpl=_cnImpl - In the implementation block
@property (nonatomic,readonly) NSString * CNIdentifierString; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)propertyKeyForPropertyID:(int)arg1 ;
-(int)id;
-(id)initWithSource:(id)arg1 ;
-(unsigned long long)_cfTypeID;
-(id)init;
-(ABSAddressBook *)addressBook;
-(void)setSource:(ABSSource *)arg1 ;
-(CNMutableGroup *)cnImpl;
-(const void*)copyValueForProperty:(int)arg1 ;
-(unsigned)type;
-(NSString *)compositeName;
-(ABSSource *)source;
-(void)setAddressBook:(ABSAddressBook *)arg1 ;
-(void)setCnImpl:(CNMutableGroup *)arg1 ;
-(BOOL)setValue:(void*)arg1 forProperty:(int)arg2 withError:(_CFError*)arg3 ;
-(BOOL)removeProperty:(int)arg1 withError:(id*)arg2 ;
-(void)replaceRecordStorageWithCNObject:(id)arg1 ;
-(NSString *)CNIdentifierString;
-(int)revertedRecordID;
-(void)setRevertedRecordID:(int)arg1 ;
-(id)initWithMutableGroup:(id)arg1 ;
-(void)updateAllValuesWithValuesFromGroup:(id)arg1 ;
@end

