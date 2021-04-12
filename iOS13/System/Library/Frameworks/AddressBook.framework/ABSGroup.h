/*
* Generated on Monday, March 1, 2021 at 2:32:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * CNIdentifierString; 
+(void)initialize;
+(id)propertyKeyForPropertyID:(int)arg1 ;
-(id)init;
-(unsigned)type;
-(unsigned long long)_cfTypeID;
-(void)setSource:(ABSSource *)arg1 ;
-(ABSSource *)source;
-(id)initWithSource:(id)arg1 ;
-(ABSAddressBook *)addressBook;
-(void)setAddressBook:(ABSAddressBook *)arg1 ;
-(const void*)copyValueForProperty:(int)arg1 ;
-(NSString *)compositeName;
-(int)id;
-(CNMutableGroup *)cnImpl;
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

