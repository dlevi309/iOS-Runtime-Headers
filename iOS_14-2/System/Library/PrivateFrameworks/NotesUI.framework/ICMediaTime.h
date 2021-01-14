/*
* Generated on Thursday, January 14, 2021 at 2:26:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
*/

#import <NotesUI/NotesUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface ICMediaTime : NSObject <NSCopying> {

	unsigned char _days;
	unsigned char _hours;
	unsigned char _minutes;
	unsigned char _seconds;
	BOOL _negative;

}

@property (assign,nonatomic) unsigned char days;                            //@synthesize days=_days - In the implementation block
@property (assign,nonatomic) unsigned char hours;                           //@synthesize hours=_hours - In the implementation block
@property (assign,nonatomic) unsigned char minutes;                         //@synthesize minutes=_minutes - In the implementation block
@property (assign,nonatomic) unsigned char seconds;                         //@synthesize seconds=_seconds - In the implementation block
@property (assign,getter=isNegative,nonatomic) BOOL negative;               //@synthesize negative=_negative - In the implementation block
@property (nonatomic,readonly) BOOL isZero; 
@property (nonatomic,readonly) NSString * durationDescription; 
-(BOOL)isNegative;
-(unsigned char)days;
-(unsigned char)seconds;
-(unsigned char)minutes;
-(void)setMinutes:(unsigned char)arg1 ;
-(BOOL)isZero;
-(void)setSeconds:(unsigned char)arg1 ;
-(void)setDays:(unsigned char)arg1 ;
-(void)setHours:(unsigned char)arg1 ;
-(unsigned char)hours;
-(void)setNegative:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqualToMediaTime:(id)arg1 ;
-(id)initWithCMTime:(SCD_Struct_IC8)arg1 ;
-(id)initWithSeconds:(double)arg1 ;
-(NSString *)durationDescription;
@end

