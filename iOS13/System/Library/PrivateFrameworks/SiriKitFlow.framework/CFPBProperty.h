/*
* Generated on Monday, March 1, 2021 at 2:35:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SiriKitFlow.framework/SiriKitFlow
*/


#import <SiriKitFlow/SiriKitFlow-Structs.h>
@class NSString, NSInvocation, NSArray;

@interface CFPBProperty : NSObject {

	NSString* _name;
	char _type;
	char _subType;
	NSInvocation* _setter;
	NSInvocation* _getter;
	NSInvocation* _has;
	NSInvocation* _count;
	NSInvocation* _convertToString;
	NSInvocation* _convertFromString;
	/*function pointer*/void* _toDictionaryReprFn;
	/*function pointer*/void* _fromDictionaryReprFn;
	NSString* _structName;
	NSArray* _structFields;
	unsigned long long _structSize;
	Class _objectType;
	Class _subObjectType;

}

@property (nonatomic,retain) NSString * name;                          //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) char type;                                //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) char subType;                             //@synthesize subType=_subType - In the implementation block
@property (nonatomic,retain) Class objectType;                         //@synthesize objectType=_objectType - In the implementation block
@property (nonatomic,retain) Class subObjectType;                      //@synthesize subObjectType=_subObjectType - In the implementation block
@property (nonatomic,readonly) BOOL isObject; 
@property (nonatomic,readonly) BOOL isStruct; 
@property (nonatomic,readonly) BOOL canConvertFromString; 
+(id)pbPropertyFor:(objc_propertyRef)arg1 type:(Class)arg2 ;
+(id)getValidPropertiesForType:(Class)arg1 withCache:(id)arg2 ;
-(id)description;
-(NSString *)name;
-(char)type;
-(void)setType:(char)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(BOOL)isObject;
-(Class)objectType;
-(id)_parseStructDefinition:(id)arg1 ;
-(id)initWith:(objc_propertyRef)arg1 type:(Class)arg2 ;
-(BOOL)instanceHasValue:(id)arg1 ;
-(BOOL)canConvertFromString;
-(BOOL)isStruct;
-(unsigned long long)getCountOfRepeatedValuesFromInstance:(id)arg1 ;
-(id)getObjValueFromInstance:(id)arg1 ;
-(void)setObjValue:(id)arg1 onInstance:(id)arg2 ;
-(id)getStructValueFromInstance:(id)arg1 ;
-(BOOL)setStructValue:(id)arg1 onInstance:(id)arg2 ;
-(id)getNumberValueFromInstance:(id)arg1 ;
-(void)setNumberValue:(id)arg1 onInstance:(id)arg2 ;
-(id)getPtrArrayValueFromInstance:(id)arg1 ;
-(char)subType;
-(void)setSubType:(char)arg1 ;
-(void)setObjectType:(Class)arg1 ;
-(Class)subObjectType;
-(void)setSubObjectType:(Class)arg1 ;
@end

