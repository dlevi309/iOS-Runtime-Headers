/*
* Generated on Monday, March 1, 2021 at 2:32:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/


#import <WorkflowKit/WorkflowKit-Structs.h>
@class NSString;

@interface RLMProperty : NSObject {

	int _type;
	objc_ivarRef _swiftIvar;
	BOOL _indexed;
	BOOL _optional;
	BOOL _array;
	BOOL _isPrimary;
	NSString* _name;
	NSString* _objectClassName;
	NSString* _linkOriginPropertyName;
	NSString* _columnName;
	unsigned long long _index;
	NSString* _getterName;
	NSString* _setterName;
	SEL _getterSel;
	SEL _setterSel;

}

@property (nonatomic,retain) NSString * name;                                       //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) int type;                                              //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) BOOL indexed;                                          //@synthesize indexed=_indexed - In the implementation block
@property (assign,nonatomic) BOOL optional;                                         //@synthesize optional=_optional - In the implementation block
@property (nonatomic,copy) NSString * objectClassName;                              //@synthesize objectClassName=_objectClassName - In the implementation block
@property (nonatomic,retain) NSString * columnName;                                 //@synthesize columnName=_columnName - In the implementation block
@property (assign,nonatomic) unsigned long long index;                              //@synthesize index=_index - In the implementation block
@property (assign,nonatomic) BOOL isPrimary;                                        //@synthesize isPrimary=_isPrimary - In the implementation block
@property (assign,nonatomic) objc_ivarRef swiftIvar;                                //@synthesize swiftIvar=_swiftIvar - In the implementation block
@property (nonatomic,copy) NSString * getterName;                                   //@synthesize getterName=_getterName - In the implementation block
@property (nonatomic,copy) NSString * setterName;                                   //@synthesize setterName=_setterName - In the implementation block
@property (assign,nonatomic) SEL getterSel;                                         //@synthesize getterSel=_getterSel - In the implementation block
@property (assign,nonatomic) SEL setterSel;                                         //@synthesize setterSel=_setterSel - In the implementation block
@property (nonatomic,copy,readonly) NSString * linkOriginPropertyName;              //@synthesize linkOriginPropertyName=_linkOriginPropertyName - In the implementation block
@property (nonatomic,readonly) BOOL array;                                          //@synthesize array=_array - In the implementation block
+(id)propertyForObjectStoreProperty:(const Property*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)array;
-(int)type;
-(void)setType:(int)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(unsigned long long)index;
-(void)setIndex:(unsigned long long)arg1 ;
-(NSString *)getterName;
-(NSString *)setterName;
-(void)setGetterName:(NSString *)arg1 ;
-(void)setSetterName:(NSString *)arg1 ;
-(void)setOptional:(BOOL)arg1 ;
-(NSString *)columnName;
-(void)setIndexed:(BOOL)arg1 ;
-(BOOL)isPrimary;
-(NSString *)objectClassName;
-(void)setObjectClassName:(NSString *)arg1 ;
-(void)setIsPrimary:(BOOL)arg1 ;
-(BOOL)optional;
-(BOOL)indexed;
-(objc_ivarRef)swiftIvar;
-(id)initWithName:(id)arg1 type:(int)arg2 objectClassName:(id)arg3 linkOriginPropertyName:(id)arg4 indexed:(BOOL)arg5 optional:(BOOL)arg6 ;
-(void)updateAccessors;
-(void)parseObjcProperty:(objc_propertyRef)arg1 readOnly:(BOOL*)arg2 computed:(BOOL*)arg3 rawType:(id*)arg4 ;
-(BOOL)setTypeFromRawType:(id)arg1 ;
-(BOOL)isEqualToProperty:(id)arg1 ;
-(NSString *)linkOriginPropertyName;
-(id)initSwiftPropertyWithName:(id)arg1 indexed:(BOOL)arg2 linkPropertyDescriptor:(id)arg3 property:(objc_propertyRef)arg4 instance:(id)arg5 ;
-(id)initWithName:(id)arg1 indexed:(BOOL)arg2 linkPropertyDescriptor:(id)arg3 property:(objc_propertyRef)arg4 ;
-(id)initSwiftListPropertyWithName:(id)arg1 instance:(id)arg2 ;
-(id)initSwiftOptionalPropertyWithName:(id)arg1 indexed:(BOOL)arg2 ivar:(objc_ivarRef)arg3 propertyType:(int)arg4 ;
-(id)initSwiftLinkingObjectsPropertyWithName:(id)arg1 ivar:(objc_ivarRef)arg2 objectClassName:(id)arg3 linkOriginPropertyName:(id)arg4 ;
-(id)copyWithNewName:(id)arg1 ;
-(Property)objectStoreCopy:(id)arg1 ;
-(void)setColumnName:(NSString *)arg1 ;
-(void)setSwiftIvar:(objc_ivarRef)arg1 ;
-(SEL)getterSel;
-(void)setGetterSel:(SEL)arg1 ;
-(SEL)setterSel;
-(void)setSetterSel:(SEL)arg1 ;
@end

