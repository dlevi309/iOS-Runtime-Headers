/*
* Generated on Thursday, January 14, 2021 at 2:26:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(int)id;
-(ABSAddressBook *)addressBook;
-(void)setSource:(id)arg1;
-(id<ABSCNImplementation>)cnImpl;
-(const void*)copyValueForProperty:(int)arg1;
-(unsigned)type;
-(NSString *)compositeName;
-(ABSSource *)source;
-(void)setAddressBook:(id)arg1;
-(void)setCnImpl:(id)arg1;
-(BOOL)setValue:(const void*)arg1 forProperty:(int)arg2 withError:(*)arg3;
-(BOOL)removeProperty:(int)arg1 withError:(id*)arg2;
-(void)replaceRecordStorageWithCNObject:(id)arg1;
-(NSString *)CNIdentifierString;

@end

