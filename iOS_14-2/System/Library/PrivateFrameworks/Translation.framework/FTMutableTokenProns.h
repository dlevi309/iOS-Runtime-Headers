/*
* Generated on Thursday, January 14, 2021 at 2:23:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <Translation/Translation-Structs.h>
#import <Translation/FTTokenProns.h>

@class NSString, NSArray;

@interface FTMutableTokenProns : FTTokenProns

@property (nonatomic,copy) NSString * orthography; 
@property (nonatomic,copy) NSArray * sanitized_sequences; 
@property (nonatomic,copy) NSArray * prons; 
@property (nonatomic,copy) NSArray * normalized_prons; 
-(id)init;
-(NSArray *)prons;
-(NSString *)orthography;
-(void)setOrthography:(NSString *)arg1 ;
-(NSArray *)sanitized_sequences;
-(void)setSanitized_sequences:(NSArray *)arg1 ;
-(void)setProns:(NSArray *)arg1 ;
-(NSArray *)normalized_prons;
-(void)setNormalized_prons:(NSArray *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

