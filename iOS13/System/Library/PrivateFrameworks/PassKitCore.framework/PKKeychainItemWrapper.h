/*
* Generated on Monday, March 1, 2021 at 2:31:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


@class NSMutableDictionary, NSString;

@interface PKKeychainItemWrapper : NSObject {

	NSMutableDictionary* keychainItemData;
	NSMutableDictionary* genericPasswordQuery;
	BOOL _invisible;
	unsigned long long type;
	NSString* _label;

}

@property (assign,nonatomic) unsigned long long type; 
@property (nonatomic,retain) NSMutableDictionary * keychainItemData; 
@property (nonatomic,retain) NSMutableDictionary * genericPasswordQuery; 
@property (nonatomic,copy) NSString * label;                                          //@synthesize label=_label - In the implementation block
-(unsigned long long)type;
-(void)setType:(unsigned long long)arg1 ;
-(id)objectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)label;
-(void)resetKeychainItem;
-(void)resetLocalKeychainItem;
-(id)initWithIdentifier:(id)arg1 accessGroup:(id)arg2 serviceName:(id)arg3 type:(unsigned long long)arg4 invisible:(BOOL)arg5 ;
-(void)applySynchronizableValueToDictionary:(id)arg1 ;
-(id)secItemFormatToDictionary:(id)arg1 ;
-(void)setKeychainItemData:(NSMutableDictionary *)arg1 ;
-(void)writeToKeychain;
-(void)_resetKeychainItem:(BOOL)arg1 ;
-(id)dictionaryToSecItemFormat:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 accessGroup:(id)arg2 serviceName:(id)arg3 ;
-(NSMutableDictionary *)keychainItemData;
-(NSMutableDictionary *)genericPasswordQuery;
-(void)setGenericPasswordQuery:(NSMutableDictionary *)arg1 ;
@end

