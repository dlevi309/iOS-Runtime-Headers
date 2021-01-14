/*
* Generated on Thursday, January 14, 2021 at 2:26:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
*/

#import <CoreHandwriting/CoreHandwriting-Structs.h>
#import <CoreHandwriting/CHTokenizedTextResultColumn.h>

@class NSArray;

@interface CHMutableTokenizedTextResultColumn : CHTokenizedTextResultColumn

@property (nonatomic,copy) NSArray * tokenRows; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithTokenRows:(id)arg1 ;
-(long long)addTokenRowWithTokens:(id)arg1 ;
-(void)sortTokenRows;
-(id)_mutableTokenRows;
-(void)setTokenRows:(NSArray *)arg1 ;
-(void)setTokenRowWithTokens:(id)arg1 atIndex:(long long)arg2 ;
-(void)removeTokenRowAtIndex:(long long)arg1 ;
@end

