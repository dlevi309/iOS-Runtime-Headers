/*
* Generated on Thursday, January 14, 2021 at 2:29:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libacmobileshim.dylib
*/

#import <libacmobileshim.dylib/libacmobileshim.dylib-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSDictionary, NSString, NSDate, NSData;

@interface ACFKeychainItemInfo : NSObject <NSCopying> {

	NSMutableDictionary* _attributeDictionary;

}

@property (nonatomic,retain) NSMutableDictionary * attributeDictionary;              //@synthesize attributeDictionary=_attributeDictionary - In the implementation block
@property (nonatomic,readonly) NSDictionary * attributes; 
@property (nonatomic,retain) id classCode; 
@property (nonatomic,retain) NSString * accessGroup; 
@property (nonatomic,retain) NSDate * creationDate; 
@property (nonatomic,retain) NSDate * modificationDate; 
@property (nonatomic,retain) NSString * description; 
@property (nonatomic,retain) NSString * comment; 
@property (assign,nonatomic) unsigned long long creator; 
@property (assign,nonatomic) unsigned long long type; 
@property (nonatomic,retain) NSString * label; 
@property (nonatomic,retain) NSString * subject; 
@property (assign,nonatomic) BOOL isInvisible; 
@property (assign,nonatomic) BOOL isNegative; 
@property (nonatomic,retain) NSString * account; 
@property (nonatomic,retain) NSString * service; 
@property (nonatomic,retain) NSData * generic; 
@property (nonatomic,retain) id valueRef; 
@property (nonatomic,retain) id valueData; 
@property (nonatomic,retain) id valuePersistentRef; 
@property (assign,nonatomic) BOOL isPermanent; 
@property (nonatomic,retain) id keyType; 
@property (nonatomic,retain) NSData * applicationTag; 
@property (nonatomic,copy) NSString * applicationTagString; 
@property (assign,nonatomic) void* accessibleType; 
@property (assign,nonatomic) BOOL synchronizable; 
@property (retain) NSString * genericString; 
@property (assign) BOOL returnData; 
@property (assign) BOOL returnAttributes; 
@property (assign) BOOL returnRef; 
@property (assign) BOOL returnPersistentRef; 
@property (assign) unsigned long long returnLimit; 
+(id)keychainItemInfo;
+(id)keychainItemInfoWithAttributes:(id)arg1 ;
-(NSDate *)modificationDate;
-(BOOL)isNegative;
-(NSString *)account;
-(NSString *)comment;
-(NSString *)subject;
-(void)dump;
-(void)setComment:(NSString *)arg1 ;
-(void)setAccount:(NSString *)arg1 ;
-(id)init;
-(void)setCreationDate:(NSDate *)arg1 ;
-(void)setType:(unsigned long long)arg1 ;
-(unsigned long long)creator;
-(id)initWithAttributes:(id)arg1 ;
-(NSDictionary *)attributes;
-(BOOL)isInvisible;
-(void)setIsNegative:(BOOL)arg1 ;
-(NSString *)description;
-(NSDate *)creationDate;
-(id)keyType;
-(void)setService:(NSString *)arg1 ;
-(unsigned long long)type;
-(void)setModificationDate:(NSDate *)arg1 ;
-(void)setCreator:(unsigned long long)arg1 ;
-(NSMutableDictionary *)attributeDictionary;
-(NSData *)applicationTag;
-(void)setKeyType:(id)arg1 ;
-(void)setApplicationTag:(NSData *)arg1 ;
-(id)valueData;
-(void)setLabel:(NSString *)arg1 ;
-(void)setDescription:(NSString *)arg1 ;
-(NSData *)generic;
-(NSString *)accessGroup;
-(void)setAccessGroup:(NSString *)arg1 ;
-(void*)accessibleType;
-(void)setAccessibleType:(void*)arg1 ;
-(void)setSubject:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)label;
-(NSString *)service;
-(void)dealloc;
-(BOOL)synchronizable;
-(void)setSynchronizable:(BOOL)arg1 ;
-(void)setReturnData:(BOOL)arg1 ;
-(BOOL)returnData;
-(void)setGeneric:(NSData *)arg1 ;
-(void)setValueData:(id)arg1 ;
-(void)setValueRef:(id)arg1 ;
-(id)valueRef;
-(void)setClassCode:(id)arg1 ;
-(void)setReturnRef:(BOOL)arg1 ;
-(void)setAttributeDictionary:(NSMutableDictionary *)arg1 ;
-(BOOL)isSynchronizableAttributeAvaiable;
-(id)classCode;
-(void)setIsInvisible:(BOOL)arg1 ;
-(void)setIsPermanent:(BOOL)arg1 ;
-(BOOL)isPermanent;
-(void)setApplicationTagString:(NSString *)arg1 ;
-(NSString *)applicationTagString;
-(void)setGenericString:(NSString *)arg1 ;
-(NSString *)genericString;
-(void)setValuePersistentRef:(id)arg1 ;
-(id)valuePersistentRef;
-(BOOL)returnAttributes;
-(BOOL)returnRef;
-(void)setReturnPersistentRef:(BOOL)arg1 ;
-(BOOL)returnPersistentRef;
-(unsigned long long)returnLimit;
-(void)setReturnLimit:(unsigned long long)arg1 ;
-(void)setReturnAttributes:(BOOL)arg1 ;
@end

