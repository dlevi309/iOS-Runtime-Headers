/*
* Generated on Monday, March 1, 2021 at 2:34:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
*/

#import <iCalendar/ICSProperty.h>

@class NSString, ICSDuration;

@interface ICSTravelDuration : ICSProperty

@property (nonatomic,retain) NSString * transparency; 
@property (nonatomic,retain) ICSDuration * duration; 
-(ICSDuration *)duration;
-(void)setDuration:(ICSDuration *)arg1 ;
-(void)setTransparency:(NSString *)arg1 ;
-(NSString *)transparency;
-(BOOL)alwaysHasParametersToSerialize;
-(void)_ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2 additionalParameters:(id)arg3 ;
@end

