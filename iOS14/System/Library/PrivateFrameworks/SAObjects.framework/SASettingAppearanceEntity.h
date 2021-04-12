/*
* Generated on Thursday, January 14, 2021 at 2:23:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SASettingEntity.h>

@class NSString;

@interface SASettingAppearanceEntity : SASettingEntity

@property (nonatomic,copy) NSString * previousValue; 
@property (nonatomic,copy) NSString * value; 
+(id)appearanceEntity;
+(id)appearanceEntityWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(void)setValue:(NSString *)arg1 ;
-(void)setPreviousValue:(NSString *)arg1 ;
-(NSString *)previousValue;
-(NSString *)value;
@end

