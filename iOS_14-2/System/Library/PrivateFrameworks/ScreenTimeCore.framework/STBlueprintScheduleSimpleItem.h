/*
* Generated on Thursday, January 14, 2021 at 2:24:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
*/

#import <ScreenTimeCore/ScreenTimeCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDateComponents;

@interface STBlueprintScheduleSimpleItem : NSObject <NSCopying> {

	NSDateComponents* _startTime;
	NSDateComponents* _endTime;

}

@property (nonatomic,retain) NSDateComponents * startTime;              //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,retain) NSDateComponents * endTime;                //@synthesize endTime=_endTime - In the implementation block
-(void)setStartTime:(NSDateComponents *)arg1 ;
-(void)setEndTime:(NSDateComponents *)arg1 ;
-(NSDateComponents *)endTime;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDateComponents *)startTime;
@end

