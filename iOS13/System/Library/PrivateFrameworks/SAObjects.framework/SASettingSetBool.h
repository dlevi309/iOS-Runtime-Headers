/*
* Generated on Monday, March 1, 2021 at 2:32:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SASettingSetValue.h>

@interface SASettingSetBool : SASettingSetValue

@property (assign,nonatomic) BOOL toggle; 
@property (assign,nonatomic) BOOL value; 
+(id)setBool;
+(id)setBoolWithDictionary:(id)arg1 context:(id)arg2 ;
-(BOOL)value;
-(void)setValue:(BOOL)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(BOOL)mutatingCommand;
-(BOOL)toggle;
-(void)setToggle:(BOOL)arg1 ;
@end

