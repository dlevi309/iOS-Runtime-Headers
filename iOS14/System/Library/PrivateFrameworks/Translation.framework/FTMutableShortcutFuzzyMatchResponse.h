/*
* Generated on Thursday, January 14, 2021 at 2:23:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <Translation/Translation-Structs.h>
#import <Translation/FTShortcutFuzzyMatchResponse.h>

@class NSString, NSArray;

@interface FTMutableShortcutFuzzyMatchResponse : FTShortcutFuzzyMatchResponse

@property (nonatomic,copy) NSString * utterance; 
@property (nonatomic,copy) NSArray * shortcut_score_pairs; 
@property (assign,nonatomic) int return_code; 
-(NSString *)utterance;
-(id)init;
-(void)setUtterance:(NSString *)arg1 ;
-(void)setReturn_code:(int)arg1 ;
-(int)return_code;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)shortcut_score_pairs;
-(void)setShortcut_score_pairs:(NSArray *)arg1 ;
@end

