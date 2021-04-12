/*
* Generated on Monday, March 1, 2021 at 2:34:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Extensions/IOHIDFamily.kext/PlugIns/IOHIDLib.plugin/IOHIDLib
*/


#import <IOHIDLib/IOHIDLib-Structs.h>
@class NSString, NSData;

@interface HIDLibElement : NSObject {

	IOHIDElementRef _element;
	IOHIDValueRef _value;
	IOHIDValueRef _defaultValue;
	NSString* _psKey;
	IOHIDElementStruct _elementStruct;
	BOOL _isConstant;
	BOOL _isUpdated;

}

@property (assign) IOHIDElementRef elementRef;                      //@synthesize element=_element - In the implementation block
@property (assign) IOHIDValueRef valueRef;                          //@synthesize value=_value - In the implementation block
@property (assign) IOHIDValueRef defaultValueRef;                   //@synthesize defaultValue=_defaultValue - In the implementation block
@property (assign) long long integerValue; 
@property (retain) NSData * dataValue; 
@property (copy) NSString * psKey;                                  //@synthesize psKey=_psKey - In the implementation block
@property (readonly) unsigned long long timestamp; 
@property (readonly) long long length; 
@property (readonly) IOHIDElementStruct elementStruct;              //@synthesize elementStruct=_elementStruct - In the implementation block
@property (assign) BOOL isConstant;                                 //@synthesize isConstant=_isConstant - In the implementation block
@property (assign) BOOL isUpdated;                                  //@synthesize isUpdated=_isUpdated - In the implementation block
@property (readonly) unsigned elementCookie; 
@property (readonly) unsigned collectionCookie; 
@property (readonly) int type; 
@property (readonly) unsigned usage; 
@property (readonly) unsigned usagePage; 
@property (readonly) unsigned unit; 
@property (readonly) unsigned char unitExponent; 
@property (readonly) unsigned char reportID; 
@property (readonly) unsigned valueLocation; 
@property (readonly) unsigned usageMin; 
@property (readonly) unsigned usageMax; 
@property (readonly) int collectionType; 
-(void)dealloc;
-(long long)length;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(int)type;
-(long long)integerValue;
-(unsigned)unit;
-(unsigned long long)timestamp;
-(BOOL)isConstant;
-(unsigned)usage;
-(void)setIntegerValue:(long long)arg1 ;
-(void)setDataValue:(NSData *)arg1 ;
-(NSData *)dataValue;
-(BOOL)isUpdated;
-(unsigned)usagePage;
-(IOHIDElementRef)elementRef;
-(int)collectionType;
-(unsigned char)reportID;
-(unsigned char)unitExponent;
-(void)setValueRef:(IOHIDValueRef)arg1 ;
-(IOHIDValueRef)valueRef;
-(void)setIsUpdated:(BOOL)arg1 ;
-(id)initWithElementRef:(IOHIDElementRef)arg1 ;
-(void)setDefaultValueRef:(IOHIDValueRef)arg1 ;
-(IOHIDValueRef)defaultValueRef;
-(unsigned)elementCookie;
-(BOOL)isEqualToHIDLibElement:(id)arg1 ;
-(id)initWithElementStruct:(IOHIDElementStruct*)arg1 parent:(IOHIDElementRef)arg2 index:(unsigned)arg3 ;
-(void)setElementRef:(IOHIDElementRef)arg1 ;
-(unsigned)collectionCookie;
-(unsigned)valueLocation;
-(unsigned)usageMin;
-(unsigned)usageMax;
-(NSString *)psKey;
-(void)setPsKey:(NSString *)arg1 ;
-(IOHIDElementStruct)elementStruct;
-(void)setIsConstant:(BOOL)arg1 ;
@end

