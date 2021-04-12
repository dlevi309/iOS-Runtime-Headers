/*
* Generated on Monday, March 1, 2021 at 2:35:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/CoreAccessories/PlugIns/Transports/IOAccessoryManager.transport/IOAccessoryManager
*/


@class NSString;

@interface ACCObjCType : NSObject {

	long long _code;
	NSString* _encoding;
	NSString* _name;
	NSString* _className;
	unsigned long long _size;
	unsigned long long _flags;

}

@property (nonatomic,readonly) long long code;                                                     //@synthesize code=_code - In the implementation block
@property (nonatomic,readonly) NSString * encoding;                                                //@synthesize encoding=_encoding - In the implementation block
@property (nonatomic,readonly) NSString * name;                                                    //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSString * className;                                               //@synthesize className=_className - In the implementation block
@property (nonatomic,readonly) unsigned long long size;                                            //@synthesize size=_size - In the implementation block
@property (nonatomic,readonly) unsigned long long flags;                                           //@synthesize flags=_flags - In the implementation block
@property (getter=isNumber,nonatomic,readonly) BOOL number; 
@property (getter=isIntegerNumber,nonatomic,readonly) BOOL integerNumber; 
@property (getter=isFloatingPointNumber,nonatomic,readonly) BOOL floatingPointNumber; 
@property (getter=isObject,nonatomic,readonly) BOOL object; 
+(id)typeForEncoding:(const char*)arg1 ;
+(id)typeForValue:(id)arg1 ;
-(NSString *)name;
-(long long)code;
-(unsigned long long)flags;
-(unsigned long long)size;
-(id)initWithCode:(long long)arg1 encoding:(id)arg2 name:(id)arg3 className:(id)arg4 size:(unsigned long long)arg5 flags:(unsigned long long)arg6 ;
-(BOOL)isNumber;
-(BOOL)isIntegerNumber;
-(BOOL)isFloatingPointNumber;
-(BOOL)isObject;
-(id)objectWithBytes:(const void*)arg1 ;
-(void)getBytes:(void*)arg1 forObject:(id)arg2 ;
-(NSString *)encoding;
-(NSString *)className;
@end

