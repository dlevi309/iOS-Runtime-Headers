/*
* Generated on Thursday, January 14, 2021 at 2:23:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <Translation/Translation-Structs.h>
#import <Translation/FTTTSPrompts.h>

@class NSArray, NSData;

@interface FTMutableTTSPrompts : FTTTSPrompts

@property (nonatomic,copy) NSArray * prompts; 
@property (nonatomic,copy) NSData * prompts_v2; 
-(id)init;
-(NSArray *)prompts;
-(NSData *)prompts_v2;
-(void)setPrompts:(NSArray *)arg1 ;
-(void)setPrompts_v2:(NSData *)arg1 ;
-(void)prompts_v2:(/*^block*/id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

