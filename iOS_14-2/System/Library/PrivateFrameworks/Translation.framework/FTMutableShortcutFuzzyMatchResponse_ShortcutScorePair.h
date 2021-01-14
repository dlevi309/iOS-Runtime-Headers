/*
* Generated on Thursday, January 14, 2021 at 2:23:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <Translation/Translation-Structs.h>
#import <Translation/FTShortcutFuzzyMatchResponse_ShortcutScorePair.h>

@class NSString;

@interface FTMutableShortcutFuzzyMatchResponse_ShortcutScorePair : FTShortcutFuzzyMatchResponse_ShortcutScorePair

@property (nonatomic,copy) NSString * shortcut; 
@property (assign,nonatomic) double similarity_score; 
-(id)init;
-(NSString *)shortcut;
-(void)setShortcut:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)similarity_score;
-(void)setSimilarity_score:(double)arg1 ;
@end

