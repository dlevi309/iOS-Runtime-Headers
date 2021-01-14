/*
* Generated on Thursday, January 14, 2021 at 2:23:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <Translation/Translation-Structs.h>
#import <Translation/FTRequestStatsResponse.h>

@class NSArray, NSString;

@interface FTMutableRequestStatsResponse : FTRequestStatsResponse

@property (nonatomic,copy) NSArray * bool_stats; 
@property (nonatomic,copy) NSArray * int32_stats; 
@property (nonatomic,copy) NSArray * double_stats; 
@property (nonatomic,copy) NSString * language; 
@property (nonatomic,copy) NSString * speech_id; 
@property (nonatomic,copy) NSString * request_locale; 
-(id)init;
-(void)setLanguage:(NSString *)arg1 ;
-(NSArray *)bool_stats;
-(void)setBool_stats:(NSArray *)arg1 ;
-(NSArray *)int32_stats;
-(NSArray *)double_stats;
-(void)setInt32_stats:(NSArray *)arg1 ;
-(void)setDouble_stats:(NSArray *)arg1 ;
-(NSString *)request_locale;
-(void)setRequest_locale:(NSString *)arg1 ;
-(NSString *)speech_id;
-(void)setSpeech_id:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)language;
@end

