/*
* Generated on Monday, March 1, 2021 at 2:34:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned char)hours;
-(unsigned char)minutes;
-(unsigned char)seconds;
-(void)setHours:(unsigned char)arg1 ;
-(unsigned char)days;
-(void)setSeconds:(unsigned char)arg1 ;
-(BOOL)isNegative;
-(void)setDays:(unsigned char)arg1 ;
-(void)setNegative:(BOOL)arg1 ;
-(BOOL)isEqualToMediaTime:(id)arg1 ;
-(id)initWithCMTime:(SCD_Struct_IC8)arg1 ;
-(id)initWithSeconds:(double)arg1 ;
-(void)setMinutes:(unsigned char)arg1 ;
-(BOOL)isZero;
-(NSString *)durationDescription;
@end

