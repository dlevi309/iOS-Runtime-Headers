/*
* Generated on Thursday, January 14, 2021 at 2:26:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/AddressBook.framework/AddressBook
*/

#import <AddressBook/AddressBook-Structs.h>
#import <libobjc.A.dylib/ABSRecord.h>

@class NSString, ABSAddressBook, ABSSource, CNMutableContact, NSMutableSet;

@interface ABSPerson : NSObject <ABSRecord> {

	ABSAddressBook* _addressBook;
	ABSSource* _source;
	CNMutableContact* _cnImpl;
	NSString* _revertedRecordIdentifier;
	NSMutableSet* _nonNilSetProperties;

}

@property (nonatomic,retain) NSString * revertedRecordIdentifier;              //@synthesize revertedRecordIdentifier=_revertedRecordIdentifier - In the implementation block
@property (nonatomic,retain) NSMutableSet * nonNilSetProperties;               //@synthesize nonNilSetProperties=_nonNilSetProperties - In the implementation block
@property (nonatomic,readonly) int id; 
@property (nonatomic,readonly) unsigned type; 
@property (assign,nonatomic,__weak) ABSAddressBook * addressBook;              //@synthesize addressBook=_addressBook - In the implementation block
@property (assign,nonatomic,__weak) ABSSource * source;                        //@synthesize source=_source - In the implementation block
@property (nonatomic,readonly) NSString * compositeName; 
@property (nonatomic,retain) CNMutableContact * cnImpl;                        //@synthesize cnImpl=_cnImpl - In the implementation block
@property (nonatomic,readonly) NSString * CNIdentifierString; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(unsigned)sortOrdering;
+(id)defaultKeysToFetch;
+(BOOL)shortNameFormatPrefersNicknames;
+(unsigned)typeForProperty:(int)arg1 ;
+(id)nameForProperty:(int)arg1 ;
+(unsigned)compositeNameFormatForPerson:(id)arg1 ;
+(id)copyCompositeNameDelimiterForPerson:(id)arg1 ;
+(id)localizedNameForProperty:(int)arg1 ;
+(unsigned)compositeNameFormat;
+(void)setCompositeNameFormat:(unsigned)arg1 ;
+(BOOL)shortNameFormatEnabled;
+(id)vCardRepresentationForPeople:(id)arg1 ;
+(id)createPeopleInSource:(id)arg1 withVCardRepresentation:(id)arg2 ;
+(id)propertyKeyForPropertyID:(int)arg1 ;
-(int)id;
-(id)initWithSource:(id)arg1 ;
-(unsigned long long)_cfTypeID;
-(id)init;
-(ABSAddressBook *)addressBook;
-(id)shortName;
-(void)setSource:(ABSSource *)arg1 ;
-(CNMutableContact *)cnImpl;
-(const void*)copyValueForProperty:(int)arg1 ;
-(NSString *)description;
-(id)copyImageData;
-(unsigned)type;
-(NSString *)compositeName;
-(ABSSource *)source;
-(void)setAddressBook:(ABSAddressBook *)arg1 ;
-(BOOL)hasImageData;
-(BOOL)completeCNImplIfNeededWithKeysToFetch:(id)arg1 ;
-(id)initWithMutableContact:(id)arg1 source:(id)arg2 ;
-(NSString *)revertedRecordIdentifier;
-(id)stringFromFormatter:(id)arg1 ;
-(NSMutableSet *)nonNilSetProperties;
-(void)setNonNilSetProperties:(NSMutableSet *)arg1 ;
-(void)setRevertedRecordIdentifier:(NSString *)arg1 ;
-(void)setCnImpl:(CNMutableContact *)arg1 ;
-(unsigned)compositeNameFormat;
-(BOOL)setValue:(void*)arg1 forProperty:(int)arg2 withError:(_CFError*)arg3 ;
-(BOOL)removeProperty:(int)arg1 withError:(id*)arg2 ;
-(void)replaceRecordStorageWithCNObject:(id)arg1 ;
-(NSString *)CNIdentifierString;
-(id)initWithMutableContact:(id)arg1 ;
-(id)compositeNameIgnoringOrganization:(BOOL)arg1 ;
-(id)linkedPeople;
-(id)copyCompositeNameDelimiter;
-(BOOL)setImageData:(id)arg1 withError:(id*)arg2 ;
-(id)copyImageDataWithFormat:(int)arg1 ;
-(BOOL)removeImageDataWithError:(id*)arg1 ;
-(long long)comparePersonByName:(id)arg1 sortOrdering:(unsigned)arg2 ;
-(BOOL)getIdentifier:(int*)arg1 label:(id*)arg2 forMultiValueMatchingValue:(id)arg3 property:(int)arg4 ;
-(id)soundIdentifierForMultivalueIdentifier:(int)arg1 ;
-(void)setValue:(id)arg1 forSoundIdentifier:(int)arg2 ;
@end

