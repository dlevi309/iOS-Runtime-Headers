/*
* Generated on Monday, March 1, 2021 at 2:35:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <BaseBoard/BSAbstractDefaultDomain.h>

@class NSString, NSArray;

@interface SBExternalGlobalDefaults : BSAbstractDefaultDomain

@property (nonatomic,retain) NSString * locale; 
@property (nonatomic,retain) NSArray * languages; 
@property (nonatomic,retain) NSArray * keyboards; 
+(BOOL)__useDynamicMethodResolution;
-(id)init;
-(void)setLocale:(NSString *)arg1 ;
-(NSString *)locale;
-(NSArray *)languages;
-(void)setLanguages:(NSArray *)arg1 ;
-(void)setKeyboards:(NSArray *)arg1 ;
-(NSArray *)keyboards;
-(void)removeFormattedPhoneNumberFromGlobalPreferences;
-(void)flushExternalCaches;
@end

