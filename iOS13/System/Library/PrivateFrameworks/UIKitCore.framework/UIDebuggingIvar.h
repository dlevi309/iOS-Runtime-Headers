/*
* Generated on Monday, March 1, 2021 at 2:30:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class NSString, NSObject;

@interface UIDebuggingIvar : NSObject {

	NSString* _name;
	NSString* _typeDescription;
	id _value;
	NSObject* _object;
	objc_ivarRef _objcIvar;
	const char* _typeEncoding;

}

@property (assign,nonatomic) NSObject * object;                          //@synthesize object=_object - In the implementation block
@property (assign,nonatomic) objc_ivarRef objcIvar;                      //@synthesize objcIvar=_objcIvar - In the implementation block
@property (nonatomic,copy) NSString * name;                              //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * typeDescription;                   //@synthesize typeDescription=_typeDescription - In the implementation block
@property (assign,nonatomic) const char* typeEncoding;                   //@synthesize typeEncoding=_typeEncoding - In the implementation block
@property (assign,nonatomic) id value;                                   //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) NSString * valueDescription; 
@property (nonatomic,readonly) BOOL isObject; 
+(id)ivarWithObjcIvar:(objc_ivarRef)arg1 forObject:(id)arg2 ;
-(void)dealloc;
-(NSString *)name;
-(NSObject *)object;
-(void)setObject:(NSObject *)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(id)value;
-(void)setValue:(id)arg1 ;
-(BOOL)isObject;
-(NSString *)valueDescription;
-(void)setObjcIvar:(objc_ivarRef)arg1 ;
-(void)setTypeEncoding:(const char*)arg1 ;
-(void)setTypeDescription:(NSString *)arg1 ;
-(objc_ivarRef)objcIvar;
-(const char*)typeEncoding;
-(NSString *)typeDescription;
@end

