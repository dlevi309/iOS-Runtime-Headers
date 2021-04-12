/*
* Generated on Thursday, January 14, 2021 at 2:28:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriClientFlow.framework/SiriClientFlow
*/


#import <SiriClientFlow/SiriClientFlow-Structs.h>
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
-(Class)objectType;
-(void)setObjectType:(Class)arg1 ;
-(void)setType:(char)arg1 ;
-(char)subType;
-(NSString *)name;
-(id)description;
-(char)type;
-(void)setName:(NSString *)arg1 ;
-(void)setSubType:(char)arg1 ;
-(BOOL)isObject;
-(id)initWith:(objc_propertyRef)arg1 type:(Class)arg2 ;
-(id)_parseStructDefinition:(id)arg1 ;
-(unsigned long long)getCountOfRepeatedValuesFromInstance:(id)arg1 ;
-(BOOL)instanceHasValue:(id)arg1 ;
-(BOOL)canConvertFromString;
-(BOOL)isStruct;
-(id)getObjValueFromInstance:(id)arg1 ;
-(void)setObjValue:(id)arg1 onInstance:(id)arg2 ;
-(id)getStructValueFromInstance:(id)arg1 ;
-(BOOL)setStructValue:(id)arg1 onInstance:(id)arg2 ;
-(id)getNumberValueFromInstance:(id)arg1 ;
-(void)setNumberValue:(id)arg1 onInstance:(id)arg2 ;
-(id)getPtrArrayValueFromInstance:(id)arg1 ;
-(Class)subObjectType;
-(void)setSubObjectType:(Class)arg1 ;
@end

