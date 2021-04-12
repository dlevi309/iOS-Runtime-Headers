/*
* Generated on Monday, March 1, 2021 at 2:35:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/


#import <Memories/Memories-Structs.h>
@class NSArray;

@interface FlexMLSegment : NSObject {

	NSArray* _gainFunction;
	SCD_Struct_PM5 _duration;
	SCD_Struct_PM5 _trackTime;
	SCD_Struct_PM5 _summaryTime;

}

@property (nonatomic,readonly) SCD_Struct_PM5 duration;                 //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) SCD_Struct_PM5 trackTime;                //@synthesize trackTime=_trackTime - In the implementation block
@property (nonatomic,readonly) SCD_Struct_PM5 summaryTime;              //@synthesize summaryTime=_summaryTime - In the implementation block
@property (nonatomic,readonly) NSArray * gainFunction;                  //@synthesize gainFunction=_gainFunction - In the implementation block
-(SCD_Struct_PM5)duration;
-(SCD_Struct_PM5)trackTime;
-(SCD_Struct_PM5)summaryTime;
-(id)initWithDuration:(SCD_Struct_PM5)arg1 trackTime:(SCD_Struct_PM5)arg2 summaryTime:(SCD_Struct_PM5)arg3 gainFunction:(id)arg4 ;
-(NSArray *)gainFunction;
@end

