/*
* Generated on Monday, March 1, 2021 at 2:30:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
*/


@interface IMDefaults : NSObject
+(id)sharedInstance;
-(BOOL)getBoolFromDomain:(id)arg1 forKey:(id)arg2 ;
-(BOOL)getBoolFromDomain:(id)arg1 forKey:(id)arg2 defaultValue:(BOOL)arg3 ;
-(void)setBool:(BOOL)arg1 forDomain:(id)arg2 forKey:(id)arg3 ;
-(id)getValueFromDomain:(id)arg1 forKey:(id)arg2 ;
-(void)setValue:(id)arg1 forDomain:(id)arg2 forKey:(id)arg3 ;
@end

