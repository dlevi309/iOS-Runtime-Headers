/*
* Generated on Thursday, January 14, 2021 at 2:23:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <Translation/Translation-Structs.h>
#import <Translation/FTAStarFuzzyMatchingResponse.h>

@class NSString, NSArray;

@interface FTMutableAStarFuzzyMatchingResponse : FTAStarFuzzyMatchingResponse

@property (nonatomic,copy) NSString * session_id; 
@property (assign,nonatomic) int return_code; 
@property (nonatomic,copy) NSString * return_str; 
@property (assign,nonatomic) unsigned latency; 
@property (assign,nonatomic) unsigned expanded_path; 
@property (nonatomic,copy) NSArray * results; 
-(void)setResults:(NSArray *)arg1 ;
-(NSArray *)results;
-(id)init;
-(void)setLatency:(unsigned)arg1 ;
-(unsigned)latency;
-(void)setReturn_code:(int)arg1 ;
-(void)setReturn_str:(NSString *)arg1 ;
-(int)return_code;
-(NSString *)return_str;
-(void)setSession_id:(NSString *)arg1 ;
-(NSString *)session_id;
-(unsigned)expanded_path;
-(void)setExpanded_path:(unsigned)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

