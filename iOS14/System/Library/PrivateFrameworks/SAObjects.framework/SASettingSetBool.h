/*
* Generated on Thursday, January 14, 2021 at 2:23:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SASettingSetValue.h>

@interface SASettingSetBool : SASettingSetValue

@property (assign,nonatomic) BOOL toggle; 
@property (assign,nonatomic) BOOL value; 
+(id)setBool;
+(id)setBoolWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(BOOL)toggle;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(void)setValue:(BOOL)arg1 ;
-(void)setToggle:(BOOL)arg1 ;
-(BOOL)mutatingCommand;
-(BOOL)value;
@end

