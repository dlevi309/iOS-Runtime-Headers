/*
* Generated on Monday, March 1, 2021 at 2:30:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/


@class NSString, CNContactStore, CNContact, CNContactProperty;

@interface CNFavoritesEntry : NSObject {

	NSString* _name;
	BOOL _dirty;
	int _abUid;
	int _abIdentifier;
	int _oldAbUid;
	NSString* _actionType;
	NSString* _bundleIdentifier;
	long long _type;
	CNContactStore* _contactStore;
	NSString* _label;
	NSString* _value;
	NSString* _propertyKey;
	NSString* _abDatabaseUUID;
	NSString* _originalName;
	CNContact* _contact;
	NSString* _labeledValueIdentifier;
	NSString* _actionChannel;

}

@property (nonatomic,retain) CNContactStore * contactStore;                      //@synthesize contactStore=_contactStore - In the implementation block
@property (nonatomic,retain) NSString * label;                                   //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) NSString * value;                                   //@synthesize value=_value - In the implementation block
@property (nonatomic,retain) NSString * propertyKey;                             //@synthesize propertyKey=_propertyKey - In the implementation block
@property (nonatomic,retain) NSString * abDatabaseUUID;                          //@synthesize abDatabaseUUID=_abDatabaseUUID - In the implementation block
@property (nonatomic,retain) NSString * actionType;                              //@synthesize actionType=_actionType - In the implementation block
@property (nonatomic,retain) NSString * bundleIdentifier;                        //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * originalName;                              //@synthesize originalName=_originalName - In the implementation block
@property (assign,nonatomic) long long type;                                     //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) CNContact * contact;                                //@synthesize contact=_contact - In the implementation block
@property (nonatomic,retain) NSString * labeledValueIdentifier;                  //@synthesize labeledValueIdentifier=_labeledValueIdentifier - In the implementation block
@property (assign,nonatomic) int abUid;                                          //@synthesize abUid=_abUid - In the implementation block
@property (assign,nonatomic) int abIdentifier;                                   //@synthesize abIdentifier=_abIdentifier - In the implementation block
@property (nonatomic,retain) NSString * actionChannel;                           //@synthesize actionChannel=_actionChannel - In the implementation block
@property (assign,nonatomic) int oldAbUid;                                       //@synthesize oldAbUid=_oldAbUid - In the implementation block
@property (assign,nonatomic) BOOL dirty;                                         //@synthesize dirty=_dirty - In the implementation block
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) CNContactProperty * contactProperty; 
+(void)initialize;
+(id)contactFormatter;
+(id)valueStringFromSocialProfile:(id)arg1 ;
+(id)valueStringFromInstantMessageAddress:(id)arg1 ;
+(id)socialProfileForFavoritesEntryValue:(id)arg1 ;
+(id)instantMessageAddressForFavoritesEntryValue:(id)arg1 ;
+(id)labeledValueValueForFavoritesEntryValue:(id)arg1 propertyKey:(id)arg2 ;
+(id)favoritesEntryValueForLabeledValueValue:(id)arg1 propertyKey:(id)arg2 ;
+(id)descriptorsForRequiredKeysForPropertyKey:(id)arg1 ;
+(id)createLabeledValueForFavoritesEntryValue:(id)arg1 label:(id)arg2 iOSLegacyIdentifier:(int)arg3 propertyKey:(id)arg4 ;
+(BOOL)favoritesEntryValueForLabeledValueValue:(id)arg1 propertyKey:(id)arg2 isEqualToValue:(id)arg3 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)name;
-(void)setDirty:(BOOL)arg1 ;
-(long long)type;
-(void)setType:(long long)arg1 ;
-(NSString *)value;
-(NSString *)bundleIdentifier;
-(void)setValue:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)label;
-(CNContact *)contact;
-(void)setContact:(CNContact *)arg1 ;
-(CNContactProperty *)contactProperty;
-(CNContactStore *)contactStore;
-(void)setContactStore:(CNContactStore *)arg1 ;
-(NSString *)actionType;
-(void)setActionType:(NSString *)arg1 ;
-(NSString *)originalName;
-(void)setOriginalName:(NSString *)arg1 ;
-(NSString *)actionChannel;
-(NSString *)abDatabaseUUID;
-(id)_initWithContact:(id)arg1 propertyKey:(id)arg2 labeledValueIdentifier:(id)arg3 entryType:(long long)arg4 actionType:(id)arg5 bundleIdentifier:(id)arg6 store:(id)arg7 ;
-(void)_convertFromEntryType:(long long)arg1 toActionType:(id*)arg2 bundleIdentifier:(id*)arg3 ;
-(int)_entryTypeForActionType:(id)arg1 bundleIdentifier:(id)arg2 ;
-(void)setPropertyKey:(NSString *)arg1 ;
-(void)setLabeledValueIdentifier:(NSString *)arg1 ;
-(void)setAbUid:(int)arg1 ;
-(void)setOldAbUid:(int)arg1 ;
-(void)setAbIdentifier:(int)arg1 ;
-(void)setAbDatabaseUUID:(NSString *)arg1 ;
-(NSString *)propertyKey;
-(int)abUid;
-(NSString *)labeledValueIdentifier;
-(int)abIdentifier;
-(void)setActionChannel:(NSString *)arg1 ;
-(BOOL)dirty;
-(id)rematch;
-(void)resetContactMatch;
-(void)applyChangeRecord:(id)arg1 ;
-(id)initWithContact:(id)arg1 propertyKey:(id)arg2 identifier:(id)arg3 type:(long long)arg4 ;
-(id)initWithContact:(id)arg1 propertyKey:(id)arg2 identifier:(id)arg3 type:(long long)arg4 store:(id)arg5 ;
-(id)initWithContact:(id)arg1 propertyKey:(id)arg2 labeledValueIdentifier:(id)arg3 actionType:(id)arg4 bundleIdentifier:(id)arg5 store:(id)arg6 ;
-(id)initWithDictionaryRepresentation:(id)arg1 store:(id)arg2 ;
-(void)dictionaryRepresentation:(id*)arg1 isDirty:(BOOL*)arg2 ;
-(BOOL)rematchWithContacts;
-(BOOL)rematchWithGeminiManager:(id)arg1 ;
-(int)oldAbUid;
@end

