/*
* Generated on Thursday, January 14, 2021 at 2:21:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/


#import <CloudKit/CloudKit-Structs.h>
@class CKObjCType, NSString, NSMethodSignature;

@interface CKObjCProperty : NSObject {

	Class _classHandle;
	CKObjCType* _type;
	NSString* _name;
	unsigned long long _flags;
	SEL _getterSelector;
	NSString* _getterSelectorName;
	NSMethodSignature* _getterMethodSignature;
	SEL _setterSelector;
	NSString* _setterSelectorName;
	NSMethodSignature* _setterMethodSignature;
	NSString* _instanceVariableName;

}

@property (nonatomic,readonly) Class classHandle;                                      //@synthesize classHandle=_classHandle - In the implementation block
@property (nonatomic,readonly) CKObjCType * type;                                      //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSString * name;                                        //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) unsigned long long flags;                               //@synthesize flags=_flags - In the implementation block
@property (nonatomic,readonly) SEL getterSelector;                                     //@synthesize getterSelector=_getterSelector - In the implementation block
@property (nonatomic,readonly) NSString * getterSelectorName;                          //@synthesize getterSelectorName=_getterSelectorName - In the implementation block
@property (nonatomic,readonly) NSMethodSignature * getterMethodSignature;              //@synthesize getterMethodSignature=_getterMethodSignature - In the implementation block
@property (nonatomic,readonly) SEL setterSelector;                                     //@synthesize setterSelector=_setterSelector - In the implementation block
@property (nonatomic,readonly) NSString * setterSelectorName;                          //@synthesize setterSelectorName=_setterSelectorName - In the implementation block
@property (nonatomic,readonly) NSMethodSignature * setterMethodSignature;              //@synthesize setterMethodSignature=_setterMethodSignature - In the implementation block
@property (nonatomic,readonly) NSString * instanceVariableName;                        //@synthesize instanceVariableName=_instanceVariableName - In the implementation block
-(NSMethodSignature *)getterMethodSignature;
-(long long)compare:(id)arg1 ;
-(SEL)setterSelector;
-(SEL)getterSelector;
-(unsigned long long)flags;
-(NSMethodSignature *)setterMethodSignature;
-(long long)compareToProperty:(id)arg1 ;
-(NSString *)instanceVariableName;
-(NSString *)name;
-(id)description;
-(id)getFromObject:(id)arg1 ;
-(NSString *)setterSelectorName;
-(CKObjCType *)type;
-(void)setValue:(id)arg1 onObject:(id)arg2 ;
-(Class)classHandle;
-(NSString *)getterSelectorName;
-(id)initWithClass:(Class)arg1 property:(objc_propertyRef)arg2 ;
@end

