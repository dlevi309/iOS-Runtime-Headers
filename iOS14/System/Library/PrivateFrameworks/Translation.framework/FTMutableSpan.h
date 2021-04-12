/*
* Generated on Thursday, January 14, 2021 at 2:23:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <Translation/Translation-Structs.h>
#import <Translation/FTSpan.h>

@class NSString;

@interface FTMutableSpan : FTSpan

@property (assign,nonatomic) int start_index; 
@property (assign,nonatomic) int end_index; 
@property (assign,nonatomic) BOOL do_not_translate; 
@property (nonatomic,copy) NSString * meta_info; 
-(id)init;
-(int)start_index;
-(int)end_index;
-(BOOL)do_not_translate;
-(NSString *)meta_info;
-(void)setEnd_index:(int)arg1 ;
-(void)setStart_index:(int)arg1 ;
-(void)setDo_not_translate:(BOOL)arg1 ;
-(void)setMeta_info:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

