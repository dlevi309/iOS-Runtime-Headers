/*
* Generated on Thursday, January 14, 2021 at 2:21:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/IOKit.framework/Versions/A/IOKit
*/


#import <IOKit/IOKit-Structs.h>
@class NSArray, NSData;

@interface HIDElement : NSObject {

	SCD_Struct_HI12* _element;

}

@property (readonly) HIDElement * parent; 
@property (readonly) NSArray * children; 
@property (assign) long long integerValue; 
@property (assign) NSData * dataValue; 
@property (readonly) long long type; 
@property (readonly) long long usagePage; 
@property (readonly) long long usage; 
@property (readonly) long long reportID; 
@property (readonly) long long reportSize; 
@property (readonly) long long unit; 
@property (readonly) long long unitExponent; 
@property (readonly) long long logicalMin; 
@property (readonly) long long logicalMax; 
@property (readonly) long long physicalMin; 
@property (readonly) long long physicalMax; 
@property (readonly) unsigned long long timestamp; 
-(NSArray *)children;
-(long long)integerValue;
-(unsigned)cookie;
-(long long)usage;
-(NSData *)dataValue;
-(HIDElement *)parent;
-(void)setDataValue:(NSData *)arg1 ;
-(unsigned long long)timestamp;
-(id)description;
-(long long)usagePage;
-(void)setIntegerValue:(long long)arg1 ;
-(long long)unit;
-(long long)type;
-(long long)reportID;
-(long long)physicalMax;
-(long long)unitExponent;
-(long long)physicalMin;
-(double)scaleValue:(long long)arg1 ;
-(long long)reportSize;
-(long long)logicalMax;
-(long long)logicalMin;
-(void)setValueRef:(IOHIDValueRef)arg1 ;
-(IOHIDValueRef)valueRef;
-(unsigned long long)_cfTypeID;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

