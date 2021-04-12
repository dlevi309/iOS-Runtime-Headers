/*
* Generated on Thursday, January 14, 2021 at 2:27:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
*/


@class VSKeychainEditingContext, VSKeychainItemKind, NSMutableDictionary, NSData;

@interface VSKeychainItem : NSObject {

	BOOL _inserted;
	BOOL _updated;
	BOOL _deleted;
	BOOL _hasFaultForData;
	VSKeychainEditingContext* _editingContext;
	VSKeychainItemKind* _itemKind;
	NSMutableDictionary* _committedValues;
	NSMutableDictionary* _primitiveValues;

}

@property (nonatomic,retain) NSMutableDictionary * committedValues;                         //@synthesize committedValues=_committedValues - In the implementation block
@property (assign,nonatomic,__weak) VSKeychainEditingContext * editingContext;              //@synthesize editingContext=_editingContext - In the implementation block
@property (assign,getter=isInserted,nonatomic) BOOL inserted;                               //@synthesize inserted=_inserted - In the implementation block
@property (assign,getter=isUpdated,nonatomic) BOOL updated;                                 //@synthesize updated=_updated - In the implementation block
@property (assign,getter=isDeleted,nonatomic) BOOL deleted;                                 //@synthesize deleted=_deleted - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * primitiveValues;                         //@synthesize primitiveValues=_primitiveValues - In the implementation block
@property (assign,nonatomic) BOOL hasFaultForData;                                          //@synthesize hasFaultForData=_hasFaultForData - In the implementation block
@property (nonatomic,copy,readonly) VSKeychainItemKind * itemKind;                          //@synthesize itemKind=_itemKind - In the implementation block
@property (nonatomic,readonly) BOOL hasChanges; 
@property (nonatomic,readonly) BOOL hasPersistentChangedValues; 
@property (nonatomic,copy) NSData * data; 
-(void)willChangeValueForKey:(id)arg1 ;
-(id)init;
-(VSKeychainItemKind *)itemKind;
-(void)setData:(NSData *)arg1 ;
-(BOOL)isDeleted;
-(id)description;
-(void)setInserted:(BOOL)arg1 ;
-(NSData *)data;
-(void)setUpdated:(BOOL)arg1 ;
-(BOOL)isUpdated;
-(BOOL)hasChanges;
-(id)committedValueForKey:(id)arg1 ;
-(id)primitiveValueForKey:(id)arg1 ;
-(void)willAccessValueForKey:(id)arg1 ;
-(BOOL)isInserted;
-(void)didAccessValueForKey:(id)arg1 ;
-(id)changedValues;
-(void)setPrimitiveValue:(id)arg1 forKey:(id)arg2 ;
-(id)committedValuesForKeys:(id)arg1 ;
-(BOOL)hasPersistentChangedValues;
-(void)setDeleted:(BOOL)arg1 ;
-(VSKeychainEditingContext *)editingContext;
-(id)initWithItemKind:(id)arg1 insertIntoEditingContext:(id)arg2 ;
-(void)_setCommittedValues:(id)arg1 registeringUndo:(BOOL)arg2 ;
-(NSMutableDictionary *)primitiveValues;
-(NSMutableDictionary *)committedValues;
-(BOOL)hasFaultForData;
-(void)setPrimitiveValues:(NSMutableDictionary *)arg1 ;
-(void)setEditingContext:(VSKeychainEditingContext *)arg1 ;
-(void)setCommittedValues:(NSMutableDictionary *)arg1 ;
-(void)setHasFaultForData:(BOOL)arg1 ;
@end

