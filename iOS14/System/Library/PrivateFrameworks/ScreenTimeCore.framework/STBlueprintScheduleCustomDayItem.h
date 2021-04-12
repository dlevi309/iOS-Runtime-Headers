/*
* Generated on Thursday, January 14, 2021 at 2:24:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
*/

#import <ScreenTimeCore/ScreenTimeCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDateComponents;

@interface STBlueprintScheduleCustomDayItem : NSObject <NSCopying> {

	NSDateComponents* _startTime;
	NSDateComponents* _endTime;
	unsigned long long _day;

}

@property (nonatomic,retain) NSDateComponents * startTime;              //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,retain) NSDateComponents * endTime;                //@synthesize endTime=_endTime - In the implementation block
@property (assign,nonatomic) unsigned long long day;                    //@synthesize day=_day - In the implementation block
-(unsigned long long)day;
-(void)setDay:(unsigned long long)arg1 ;
-(void)setStartTime:(NSDateComponents *)arg1 ;
-(void)setEndTime:(NSDateComponents *)arg1 ;
-(NSDateComponents *)endTime;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDateComponents *)startTime;
@end

