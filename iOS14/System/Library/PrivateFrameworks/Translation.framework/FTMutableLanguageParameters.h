/*
* Generated on Thursday, January 14, 2021 at 2:23:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <Translation/Translation-Structs.h>
#import <Translation/FTLanguageParameters.h>

@class NSString;

@interface FTMutableLanguageParameters : FTLanguageParameters

@property (nonatomic,copy) NSString * language; 
@property (nonatomic,copy) NSString * request_locale; 
@property (nonatomic,copy) NSString * fork_id; 
-(id)init;
-(void)setLanguage:(NSString *)arg1 ;
-(NSString *)fork_id;
-(NSString *)request_locale;
-(void)setRequest_locale:(NSString *)arg1 ;
-(void)setFork_id:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)language;
@end

