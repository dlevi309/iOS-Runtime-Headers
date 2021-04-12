/*
* Generated on Monday, March 1, 2021 at 2:30:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(NSString *)name;
-(CKObjCType *)type;
-(long long)compare:(id)arg1 ;
-(unsigned long long)flags;
-(id)getFromObject:(id)arg1 ;
-(id)initWithClass:(Class)arg1 property:(objc_propertyRef)arg2 ;
-(long long)compareToProperty:(id)arg1 ;
-(void)setValue:(id)arg1 onObject:(id)arg2 ;
-(Class)classHandle;
-(SEL)getterSelector;
-(NSString *)getterSelectorName;
-(NSMethodSignature *)getterMethodSignature;
-(SEL)setterSelector;
-(NSString *)setterSelectorName;
-(NSMethodSignature *)setterMethodSignature;
-(NSString *)instanceVariableName;
@end

