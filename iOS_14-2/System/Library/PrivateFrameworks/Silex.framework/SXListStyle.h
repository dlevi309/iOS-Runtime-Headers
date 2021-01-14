/*
* Generated on Thursday, January 14, 2021 at 2:24:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

