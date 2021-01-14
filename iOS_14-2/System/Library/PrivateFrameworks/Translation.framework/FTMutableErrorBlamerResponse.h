/*
* Generated on Thursday, January 14, 2021 at 2:23:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <Translation/Translation-Structs.h>
#import <Translation/FTErrorBlamerResponse.h>

@class NSString;

@interface FTMutableErrorBlamerResponse : FTErrorBlamerResponse

@property (assign,nonatomic) int return_code; 
@property (nonatomic,copy) NSString * return_str; 
@property (nonatomic,copy) NSString * blamer_report; 
-(id)init;
-(void)setReturn_code:(int)arg1 ;
-(void)setReturn_str:(NSString *)arg1 ;
-(int)return_code;
-(NSString *)return_str;
-(NSString *)blamer_report;
-(void)setBlamer_report:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

