/*
* Generated on Monday, March 1, 2021 at 2:32:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SASettingEntity.h>

@class NSString;

@interface SASettingNoiseManagementEntity : SASettingEntity

@property (nonatomic,copy) NSString * previousValue; 
@property (nonatomic,copy) NSString * value; 
+(id)noiseManagementEntity;
+(id)noiseManagementEntityWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)value;
-(void)setValue:(NSString *)arg1 ;
-(id)groupIdentifier;
-(NSString *)previousValue;
-(void)setPreviousValue:(NSString *)arg1 ;
-(id)encodedClassName;
@end

