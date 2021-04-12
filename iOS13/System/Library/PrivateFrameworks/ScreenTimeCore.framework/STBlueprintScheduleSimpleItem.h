/*
* Generated on Monday, March 1, 2021 at 2:32:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDateComponents *)startTime;
-(NSDateComponents *)endTime;
-(void)setEndTime:(NSDateComponents *)arg1 ;
-(void)setStartTime:(NSDateComponents *)arg1 ;
@end

