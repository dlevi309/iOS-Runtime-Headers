/*
* Generated on Thursday, January 14, 2021 at 2:23:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <Translation/Translation-Structs.h>
#import <Translation/FTPronChoice.h>

@class NSString;

@interface FTMutablePronChoice : FTPronChoice

@property (nonatomic,copy) NSString * pron_sequence; 
@property (assign,nonatomic) float log_weight; 
-(id)init;
-(NSString *)pron_sequence;
-(float)log_weight;
-(void)setPron_sequence:(NSString *)arg1 ;
-(void)setLog_weight:(float)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

