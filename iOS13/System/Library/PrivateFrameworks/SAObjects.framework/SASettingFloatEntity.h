/*
* Generated on Monday, March 1, 2021 at 2:32:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SASettingNumericEntity.h>

@class NSNumber;

@interface SASettingFloatEntity : SASettingNumericEntity

@property (nonatomic,copy) NSNumber * previousValue; 
@property (assign,nonatomic) float value; 
+(id)floatEntity;
+(id)floatEntityWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)floatEntityWithValue:(float)arg1 ;
-(float)value;
-(void)setValue:(float)arg1 ;
-(id)groupIdentifier;
-(id)initWithValue:(float)arg1 ;
-(NSNumber *)previousValue;
-(void)setPreviousValue:(NSNumber *)arg1 ;
-(id)encodedClassName;
@end

