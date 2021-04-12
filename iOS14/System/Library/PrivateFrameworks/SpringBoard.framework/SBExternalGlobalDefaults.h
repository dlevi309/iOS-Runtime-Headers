/*
* Generated on Thursday, January 14, 2021 at 2:25:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <BaseBoard/BSAbstractDefaultDomain.h>

@class NSString, NSArray;

@interface SBExternalGlobalDefaults : BSAbstractDefaultDomain

@property (nonatomic,retain) NSString * locale; 
@property (nonatomic,retain) NSArray * languages; 
@property (nonatomic,retain) NSArray * keyboards; 
+(BOOL)__useDynamicMethodResolution;
-(NSString *)locale;
-(NSArray *)languages;
-(void)setLocale:(NSString *)arg1 ;
-(id)init;
-(NSArray *)keyboards;
-(void)setKeyboards:(NSArray *)arg1 ;
-(void)setLanguages:(NSArray *)arg1 ;
-(void)removeFormattedPhoneNumberFromGlobalPreferences;
-(void)flushExternalCaches;
@end

