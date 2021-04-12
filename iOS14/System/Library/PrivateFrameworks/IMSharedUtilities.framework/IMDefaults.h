/*
* Generated on Thursday, January 14, 2021 at 2:22:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
*/


@interface IMDefaults : NSObject
+(id)sharedInstance;
-(BOOL)getBoolFromDomain:(id)arg1 forKey:(id)arg2 defaultValue:(BOOL)arg3 ;
-(BOOL)getBoolFromDomain:(id)arg1 forKey:(id)arg2 ;
-(void)setBool:(BOOL)arg1 forDomain:(id)arg2 forKey:(id)arg3 ;
-(void)setValue:(id)arg1 forDomain:(id)arg2 forKey:(id)arg3 ;
-(id)getValueFromDomain:(id)arg1 forKey:(id)arg2 ;
@end

