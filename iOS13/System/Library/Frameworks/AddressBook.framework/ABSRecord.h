/*
* Generated on Monday, March 1, 2021 at 2:32:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AddressBook.framework/AddressBook
*/

@class NSString, ABSAddressBook, ABSSource;


@protocol ABSRecord <NSObject>
@property (nonatomic,readonly) int id; 
@property (nonatomic,readonly) NSString * CNIdentifierString; 
@property (nonatomic,readonly) unsigned type; 
@property (assign,nonatomic,__weak) ABSAddressBook * addressBook; 
@property (assign,nonatomic,__weak) ABSSource * source; 
@property (nonatomic,readonly) NSString * compositeName; 
@property (nonatomic,retain) id<ABSCNImplementation> cnImpl; 
@required
-(unsigned)type;
-(void)setSource:(id)arg1;
-(ABSSource *)source;
-(ABSAddressBook *)addressBook;
-(void)setAddressBook:(id)arg1;
-(const void*)copyValueForProperty:(int)arg1;
-(NSString *)compositeName;
-(int)id;
-(id<ABSCNImplementation>)cnImpl;
-(void)setCnImpl:(id)arg1;
-(BOOL)setValue:(const void*)arg1 forProperty:(int)arg2 withError:(*)arg3;
-(BOOL)removeProperty:(int)arg1 withError:(id*)arg2;
-(void)replaceRecordStorageWithCNObject:(id)arg1;
-(NSString *)CNIdentifierString;

@end

