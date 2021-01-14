/*
* Generated on Thursday, January 14, 2021 at 2:24:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
*/

#import <iCalendar/ICSProperty.h>

@class ICSDateTimeValue;

@interface ICSAlternateTimeProposal : ICSProperty

@property (nonatomic,retain) ICSDateTimeValue * startDate; 
@property (assign,nonatomic) int status; 
+(int)statusFromICSString:(id)arg1 ;
+(id)ICSStringFromAlternateTimeProposalStatus:(int)arg1 ;
+(id)_parseICSString:(id)arg1 ;
+(id)alternateTimeProposalFromICSCString:(id)arg1 ;
-(void)setStartDate:(ICSDateTimeValue *)arg1 ;
-(ICSDateTimeValue *)startDate;
-(void)setStatus:(int)arg1 ;
-(int)status;
-(void)_ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2 ;
@end

