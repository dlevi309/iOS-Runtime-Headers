/*
* Generated on Thursday, January 14, 2021 at 2:20:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/


@class NSString, CNContactStore, CNContact, CNContactProperty;

@interface CNFavoritesEntry : NSObject {

	NSString* _name;
	BOOL _dirty;
	int _abUid;
	int _abIdentifier;
	int _oldAbUid;
	NSString* _value;
	NSString* _actionType;
	NSString* _bundleIdentifier;
	long long _type;
	CNContactStore* _contactStore;
	NSString* _label;
	NSString* _propertyKey;
	NSString* _abDatabaseUUID;
	NSString* _originalName;
	CNContact* _contact;
	NSString* _labeledValueIdentifier;
	NSString* _actionChannel;

}

@property (assign,nonatomic) int abUid;                                          //@synthesize abUid=_abUid - In the implementation block
@property (assign,nonatomic) int abIdentifier;                                   //@synthesize abIdentifier=_abIdentifier - In the implementation block
@property (nonatomic,retain) NSString * actionChannel;                           //@synthesize actionChannel=_actionChannel - In the implementation block
@property (assign,nonatomic) int oldAbUid;                                       //@synthesize oldAbUid=_oldAbUid - In the implementation block
@property (assign,nonatomic) BOOL dirty;                                         //@synthesize dirty=_dirty - In the implementation block
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,retain) NSString * value;                                   //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) CNContactProperty * contactProperty; 
@property (nonatomic,readonly) NSString * actionType; 
@property (nonatomic,readonly) NSString * bundleIdentifier; 
@property (nonatomic,readonly) long long type; 
+(id)favoritesEntryForUserActionItem:(id)arg1 ;
+(void)initialize;
-(void)performActionWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)performActionWithCompletion:(/*^block*/id)arg1 ;
-(void)performActionWithExtensionContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)dictionaryRepresentation;
-(BOOL)dirty;
-(NSString *)actionType;
-(int)abUid;
-(void)setDirty:(BOOL)arg1 ;
-(id)rematch;
-(int)oldAbUid;
-(void)setOldAbUid:(int)arg1 ;
-(void)setAbIdentifier:(int)arg1 ;
-(int)abIdentifier;
-(void)setActionChannel:(NSString *)arg1 ;
-(void)resetContactMatch;
-(void)applyChangeRecord:(id)arg1 ;
-(id)initWithContact:(id)arg1 propertyKey:(id)arg2 identifier:(id)arg3 type:(long long)arg4 ;
-(id)initWithDictionaryRepresentation:(id)arg1 store:(id)arg2 ;
-(id)initWithContact:(id)arg1 propertyKey:(id)arg2 identifier:(id)arg3 type:(long long)arg4 store:(id)arg5 ;
-(void)dictionaryRepresentation:(id*)arg1 isDirty:(BOOL*)arg2 ;
-(id)initWithContact:(id)arg1 propertyKey:(id)arg2 labeledValueIdentifier:(id)arg3 actionType:(id)arg4 bundleIdentifier:(id)arg5 store:(id)arg6 ;
-(BOOL)rematchWithContacts;
-(BOOL)rematchWithGeminiManager:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(NSString *)name;
-(void)setValue:(NSString *)arg1 ;
-(NSString *)actionChannel;
-(CNContactProperty *)contactProperty;
-(long long)type;
-(void)setAbUid:(int)arg1 ;
-(NSString *)value;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

