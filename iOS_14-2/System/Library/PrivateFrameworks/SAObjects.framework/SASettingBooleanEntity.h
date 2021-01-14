/*
* Generated on Thursday, January 14, 2021 at 2:23:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SASettingEntity.h>

@class NSNumber;

@interface SASettingBooleanEntity : SASettingEntity

@property (nonatomic,copy) NSNumber * previousValue; 
@property (assign,nonatomic) BOOL value; 
+(id)booleanEntity;
+(id)booleanEntityWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)booleanEntityWithValue:(BOOL)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(id)initWithValue:(BOOL)arg1 ;
-(void)setValue:(BOOL)arg1 ;
-(void)setPreviousValue:(NSNumber *)arg1 ;
-(NSNumber *)previousValue;
-(BOOL)value;
@end

