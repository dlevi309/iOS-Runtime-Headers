/*
* Generated on Thursday, January 14, 2021 at 2:26:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
*/


@protocol WFPropertyListObject;
@class NSString, NSNumber, NSArray;

@interface WFContentPropertyBuilder : NSObject {

	BOOL _irrational;
	id<WFPropertyListObject> _userInfo;
	NSString* _keyPath;
	/*^block*/id _block;
	NSString* _name;
	Class _propertyClass;
	NSNumber* _multipleValues;
	NSNumber* _filterable;
	NSNumber* _sortable;
	NSNumber* _gettable;
	NSNumber* _primary;
	NSArray* _allowedOperators;
	NSArray* _possibleValues;
	/*^block*/id _possibleValuesGetter;
	NSNumber* _caseInsensitive;
	NSString* _negativeName;
	NSString* _singularItemName;
	NSNumber* _tense;
	NSNumber* _timeUnits;
	NSNumber* _comparableUnits;
	NSString* _measurementUnitType;
	NSString* _displayName;

}

@property (nonatomic,copy) NSString * keyPath;                                 //@synthesize keyPath=_keyPath - In the implementation block
@property (nonatomic,copy) id block;                                           //@synthesize block=_block - In the implementation block
@property (nonatomic,copy) NSString * name;                                    //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) Class propertyClass;                              //@synthesize propertyClass=_propertyClass - In the implementation block
@property (nonatomic,copy) NSNumber * multipleValues;                          //@synthesize multipleValues=_multipleValues - In the implementation block
@property (nonatomic,copy) NSNumber * filterable;                              //@synthesize filterable=_filterable - In the implementation block
@property (nonatomic,copy) NSNumber * sortable;                                //@synthesize sortable=_sortable - In the implementation block
@property (nonatomic,copy) NSNumber * gettable;                                //@synthesize gettable=_gettable - In the implementation block
@property (nonatomic,copy) NSNumber * primary;                                 //@synthesize primary=_primary - In the implementation block
@property (nonatomic,copy) NSArray * allowedOperators;                         //@synthesize allowedOperators=_allowedOperators - In the implementation block
@property (nonatomic,copy) id<WFPropertyListObject> userInfo;                  //@synthesize userInfo=_userInfo - In the implementation block
@property (nonatomic,copy) NSArray * possibleValues;                           //@synthesize possibleValues=_possibleValues - In the implementation block
@property (nonatomic,copy) id possibleValuesGetter;                            //@synthesize possibleValuesGetter=_possibleValuesGetter - In the implementation block
@property (nonatomic,copy) NSNumber * caseInsensitive;                         //@synthesize caseInsensitive=_caseInsensitive - In the implementation block
@property (nonatomic,copy) NSString * negativeName;                            //@synthesize negativeName=_negativeName - In the implementation block
@property (nonatomic,copy) NSString * singularItemName;                        //@synthesize singularItemName=_singularItemName - In the implementation block
@property (assign,getter=isIrrational,nonatomic) BOOL irrational;              //@synthesize irrational=_irrational - In the implementation block
@property (nonatomic,copy) NSNumber * tense;                                   //@synthesize tense=_tense - In the implementation block
@property (nonatomic,copy) NSNumber * timeUnits;                               //@synthesize timeUnits=_timeUnits - In the implementation block
@property (nonatomic,copy) NSNumber * comparableUnits;                         //@synthesize comparableUnits=_comparableUnits - In the implementation block
@property (nonatomic,copy) NSString * measurementUnitType;                     //@synthesize measurementUnitType=_measurementUnitType - In the implementation block
@property (nonatomic,copy) NSString * displayName;                             //@synthesize displayName=_displayName - In the implementation block
+(id)keyPath:(id)arg1 name:(id)arg2 class:(Class)arg3 ;
+(id)block:(/*^block*/id)arg1 name:(id)arg2 class:(Class)arg3 ;
-(NSNumber *)tense;
-(void)setUserInfo:(id<WFPropertyListObject>)arg1 ;
-(id)block;
-(NSNumber *)primary;
-(id<WFPropertyListObject>)userInfo;
-(id)build;
-(void)setTense:(NSNumber *)arg1 ;
-(NSArray *)possibleValues;
-(void)setBlock:(id)arg1 ;
-(NSString *)name;
-(id)tense:(unsigned long long)arg1 ;
-(void)setDisplayName:(NSString *)arg1 ;
-(void)setKeyPath:(NSString *)arg1 ;
-(void)setPropertyClass:(Class)arg1 ;
-(NSString *)keyPath;
-(void)setName:(NSString *)arg1 ;
-(NSNumber *)caseInsensitive;
-(Class)propertyClass;
-(id)displayName:(id)arg1 ;
-(void)setPrimary:(NSNumber *)arg1 ;
-(NSString *)displayName;
-(void)setPossibleValues:(NSArray *)arg1 ;
-(id)negativeName:(id)arg1 ;
-(id)multipleValues:(BOOL)arg1 ;
-(NSString *)negativeName;
-(NSString *)measurementUnitType;
-(NSArray *)allowedOperators;
-(NSNumber *)timeUnits;
-(NSNumber *)comparableUnits;
-(BOOL)isIrrational;
-(id)timeUnits:(unsigned long long)arg1 ;
-(id)userInfo:(id)arg1 ;
-(id)filterable:(BOOL)arg1 ;
-(id)measurementUnitType:(id)arg1 ;
-(NSNumber *)multipleValues;
-(NSString *)singularItemName;
-(id)possibleValuesGetter;
-(void)setPossibleValuesGetter:(id)arg1 ;
-(id)sortable:(BOOL)arg1 ;
-(id)gettable:(BOOL)arg1 ;
-(id)primary:(BOOL)arg1 ;
-(id)allowedOperators:(id)arg1 ;
-(id)possibleValues:(id)arg1 ;
-(id)possibleValuesGetter:(/*^block*/id)arg1 ;
-(id)caseInsensitive:(BOOL)arg1 ;
-(id)singularItemName:(id)arg1 ;
-(id)irrational:(BOOL)arg1 ;
-(id)comparableUnits:(unsigned long long)arg1 ;
-(void)setMultipleValues:(NSNumber *)arg1 ;
-(NSNumber *)filterable;
-(void)setFilterable:(NSNumber *)arg1 ;
-(NSNumber *)sortable;
-(void)setSortable:(NSNumber *)arg1 ;
-(NSNumber *)gettable;
-(void)setGettable:(NSNumber *)arg1 ;
-(void)setAllowedOperators:(NSArray *)arg1 ;
-(void)setCaseInsensitive:(NSNumber *)arg1 ;
-(void)setNegativeName:(NSString *)arg1 ;
-(void)setSingularItemName:(NSString *)arg1 ;
-(void)setIrrational:(BOOL)arg1 ;
-(void)setTimeUnits:(NSNumber *)arg1 ;
-(void)setComparableUnits:(NSNumber *)arg1 ;
-(void)setMeasurementUnitType:(NSString *)arg1 ;
@end

