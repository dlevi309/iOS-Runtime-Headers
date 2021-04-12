/*
* Generated on Monday, March 1, 2021 at 2:34:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
*/

#import <iCalendar/ICSProperty.h>

@class NSString;

@interface ICSConference : ICSProperty

@property (nonatomic,retain) NSString * feature; 
@property (nonatomic,retain) NSString * info; 
@property (nonatomic,retain) NSString * language; 
@property (nonatomic,retain) NSString * region; 
-(NSString *)region;
-(NSString *)info;
-(NSString *)feature;
-(void)setFeature:(NSString *)arg1 ;
-(NSString *)language;
-(void)setLanguage:(NSString *)arg1 ;
-(id)initWithValue:(id)arg1 type:(unsigned long long)arg2 ;
-(void)setRegion:(NSString *)arg1 ;
-(void)setInfo:(NSString *)arg1 ;
-(void)_ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2 ;
@end

