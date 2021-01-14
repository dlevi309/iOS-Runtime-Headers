/*
* Generated on Thursday, January 14, 2021 at 2:24:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
*/

#import <iCalendar/ICSProperty.h>

@class NSString;

@interface ICSConference : ICSProperty

@property (nonatomic,retain) NSString * feature; 
@property (nonatomic,retain) NSString * info; 
@property (nonatomic,retain) NSString * language; 
@property (nonatomic,retain) NSString * region; 
-(NSString *)feature;
-(NSString *)region;
-(void)setRegion:(NSString *)arg1 ;
-(NSString *)info;
-(void)setLanguage:(NSString *)arg1 ;
-(void)setInfo:(NSString *)arg1 ;
-(id)initWithValue:(id)arg1 type:(unsigned long long)arg2 ;
-(NSString *)language;
-(void)setFeature:(NSString *)arg1 ;
-(void)_ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2 ;
@end

