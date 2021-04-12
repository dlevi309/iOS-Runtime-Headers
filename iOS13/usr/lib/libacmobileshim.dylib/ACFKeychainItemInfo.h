/*
* Generated on Monday, March 1, 2021 at 2:35:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)type;
-(void)setType:(unsigned long long)arg1 ;
-(NSDictionary *)attributes;
-(void)dump;
-(NSDate *)modificationDate;
-(id)keyType;
-(NSDate *)creationDate;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)label;
-(NSString *)account;
-(void)setAccount:(NSString *)arg1 ;
-(NSMutableDictionary *)attributeDictionary;
-(void)setCreationDate:(NSDate *)arg1 ;
-(NSString *)subject;
-(void)setSubject:(NSString *)arg1 ;
-(NSString *)service;
-(NSString *)comment;
-(id)valueData;
-(id)initWithAttributes:(id)arg1 ;
-(void)setDescription:(NSString *)arg1 ;
-(unsigned long long)creator;
-(void)setCreator:(unsigned long long)arg1 ;
-(BOOL)isInvisible;
-(void)setModificationDate:(NSDate *)arg1 ;
-(void)setComment:(NSString *)arg1 ;
-(void)setService:(NSString *)arg1 ;
-(NSString *)accessGroup;
-(void)setAccessGroup:(NSString *)arg1 ;
-(void*)accessibleType;
-(void)setAccessibleType:(void*)arg1 ;
-(BOOL)isNegative;
-(void)setIsNegative:(BOOL)arg1 ;
-(void)setReturnData:(BOOL)arg1 ;
-(BOOL)returnData;
-(NSData *)generic;
-(void)setGeneric:(NSData *)arg1 ;
-(void)setSynchronizable:(BOOL)arg1 ;
-(void)setValueData:(id)arg1 ;
-(BOOL)synchronizable;
-(void)setValueRef:(id)arg1 ;
-(id)valueRef;
-(void)setClassCode:(id)arg1 ;
-(void)setReturnRef:(BOOL)arg1 ;
-(void)setAttributeDictionary:(NSMutableDictionary *)arg1 ;
-(BOOL)isSynchronizableAttributeAvaiable;
-(void)setApplicationTag:(NSData *)arg1 ;
-(NSData *)applicationTag;
-(id)classCode;
-(void)setIsInvisible:(BOOL)arg1 ;
-(void)setIsPermanent:(BOOL)arg1 ;
-(BOOL)isPermanent;
-(void)setKeyType:(id)arg1 ;
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

