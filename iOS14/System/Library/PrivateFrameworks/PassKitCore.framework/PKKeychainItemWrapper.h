/*
* Generated on Thursday, January 14, 2021 at 2:21:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


@class NSMutableDictionary, NSString;

@interface PKKeychainItemWrapper : NSObject {

	NSMutableDictionary* keychainItemData;
	NSMutableDictionary* genericPasswordQuery;
	BOOL _invisible;
	unsigned long long type;
	NSString* _label;
	unsigned long long _accessibility;

}

@property (assign,nonatomic) unsigned long long type; 
@property (assign,nonatomic) unsigned long long accessibility;                        //@synthesize accessibility=_accessibility - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * keychainItemData; 
@property (nonatomic,retain) NSMutableDictionary * genericPasswordQuery; 
@property (nonatomic,copy) NSString * label;                                          //@synthesize label=_label - In the implementation block
-(void)resetKeychainItem;
-(id)initWithIdentifier:(id)arg1 accessGroup:(id)arg2 serviceName:(id)arg3 type:(unsigned long long)arg4 invisible:(BOOL)arg5 accessibility:(unsigned long long)arg6 ;
-(void)setType:(unsigned long long)arg1 ;
-(void)resetLocalKeychainItem;
-(id)objectForKey:(id)arg1 ;
-(unsigned long long)type;
-(id)initWithIdentifier:(id)arg1 accessGroup:(id)arg2 serviceName:(id)arg3 type:(unsigned long long)arg4 invisible:(BOOL)arg5 ;
-(void)setAccessibility:(unsigned long long)arg1 ;
-(void)setLabel:(NSString *)arg1 ;
-(void)applySynchronizableValueToDictionary:(id)arg1 ;
-(id)secItemFormatToDictionary:(id)arg1 ;
-(void)setKeychainItemData:(NSMutableDictionary *)arg1 ;
-(void)writeToKeychain;
-(void)_resetKeychainItem:(BOOL)arg1 ;
-(id)dictionaryToSecItemFormat:(id)arg1 ;
-(void)applyAccessibilityValueToDictionary:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 accessGroup:(id)arg2 serviceName:(id)arg3 ;
-(NSMutableDictionary *)keychainItemData;
-(NSString *)label;
-(NSMutableDictionary *)genericPasswordQuery;
-(void)setGenericPasswordQuery:(NSMutableDictionary *)arg1 ;
-(unsigned long long)accessibility;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
@end

