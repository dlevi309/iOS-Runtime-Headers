/*
* Generated on Thursday, January 14, 2021 at 2:23:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <Translation/Translation-Structs.h>
#import <Translation/FTLmScorerRequest.h>

@class NSString;

@interface FTMutableLmScorerRequest : FTLmScorerRequest

@property (nonatomic,copy) NSString * language; 
@property (nonatomic,copy) NSString * task_name; 
@property (nonatomic,copy) NSString * transcript; 
-(NSString *)transcript;
-(id)init;
-(void)setLanguage:(NSString *)arg1 ;
-(NSString *)task_name;
-(void)setTask_name:(NSString *)arg1 ;
-(void)setTranscript:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)language;
@end

