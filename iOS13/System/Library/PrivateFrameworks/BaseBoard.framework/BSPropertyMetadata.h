/*
* Generated on Monday, March 1, 2021 at 2:30:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
*/


@class NSString;

@interface BSPropertyMetadata : NSObject {

	char _type;
	NSString* _typeString;
	Class _classType;
	NSString* _getterName;
	NSString* _setterName;
	NSString* _name;
	NSString* _defaultKey;
	id _defaultValue;
	unsigned long long _options;

}

@property (assign,nonatomic) char type;                                       //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSString * typeString;                             //@synthesize typeString=_typeString - In the implementation block
@property (getter=isNumber,nonatomic,readonly) BOOL number; 
@property (nonatomic,retain) Class classType;                                 //@synthesize classType=_classType - In the implementation block
@property (nonatomic,copy) NSString * getterName;                             //@synthesize getterName=_getterName - In the implementation block
@property (nonatomic,copy) NSString * setterName;                             //@synthesize setterName=_setterName - In the implementation block
@property (nonatomic,copy) NSString * name;                                   //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * defaultKey;                             //@synthesize defaultKey=_defaultKey - In the implementation block
@property (nonatomic,retain) id defaultValue;                                 //@synthesize defaultValue=_defaultValue - In the implementation block
@property (assign,nonatomic) unsigned long long options;                      //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) BOOL synchronizeOnSet; 
@property (nonatomic,readonly) BOOL removeIfSettingDefaultValue; 
@property (nonatomic,readonly) BOOL removeIfCollectionSetEmpty; 
-(id)description;
-(NSString *)name;
-(unsigned long long)options;
-(char)type;
-(void)setType:(char)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)setOptions:(unsigned long long)arg1 ;
-(BOOL)isNumber;
-(id)defaultValue;
-(void)setDefaultValue:(id)arg1 ;
-(Class)classType;
-(NSString *)defaultKey;
-(void)setDefaultKey:(NSString *)arg1 ;
-(NSString *)getterName;
-(NSString *)setterName;
-(void)setGetterName:(NSString *)arg1 ;
-(void)setSetterName:(NSString *)arg1 ;
-(void)setTypeString:(NSString *)arg1 ;
-(void)setClassType:(Class)arg1 ;
-(BOOL)removeIfSettingDefaultValue;
-(BOOL)synchronizeOnSet;
-(BOOL)removeIfCollectionSetEmpty;
-(NSString *)typeString;
@end

