/*
* Generated on Thursday, January 14, 2021 at 2:23:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <Translation/Translation-Structs.h>
#import <Translation/FTKeyword.h>

@class NSString;

@interface FTMutableKeyword : FTKeyword

@property (nonatomic,copy) NSString * keyword_orthography; 
@property (assign,nonatomic) double posterior; 
-(id)init;
-(NSString *)keyword_orthography;
-(void)setKeyword_orthography:(NSString *)arg1 ;
-(double)posterior;
-(void)setPosterior:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

