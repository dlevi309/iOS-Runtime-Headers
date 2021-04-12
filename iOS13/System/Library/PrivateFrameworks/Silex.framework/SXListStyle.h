/*
* Generated on Monday, March 1, 2021 at 2:33:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/SXJSONObject.h>

@class NSString, SXJSONArray;

@interface SXListStyle : SXJSONObject

@property (nonatomic,readonly) unsigned long long style; 
@property (nonatomic,readonly) NSString * character; 
@property (nonatomic,readonly) SXJSONArray * indices; 
@property (nonatomic,readonly) unsigned long long depth; 
-(unsigned long long)depth;
-(SXJSONArray *)indices;
-(NSString *)character;
-(unsigned long long)style;
-(unsigned long long)styleWithValue:(id)arg1 withType:(int)arg2 ;
@end

