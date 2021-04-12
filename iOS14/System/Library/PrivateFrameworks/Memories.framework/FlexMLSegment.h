/*
* Generated on Thursday, January 14, 2021 at 2:27:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/


#import <Memories/Memories-Structs.h>
@class NSArray;

@interface FlexMLSegment : NSObject {

	NSArray* _gainFunction;
	SCD_Struct_PM8 _duration;
	SCD_Struct_PM8 _trackTime;
	SCD_Struct_PM8 _summaryTime;

}

@property (nonatomic,readonly) SCD_Struct_PM8 duration;                 //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) SCD_Struct_PM8 trackTime;                //@synthesize trackTime=_trackTime - In the implementation block
@property (nonatomic,readonly) SCD_Struct_PM8 summaryTime;              //@synthesize summaryTime=_summaryTime - In the implementation block
@property (nonatomic,readonly) NSArray * gainFunction;                  //@synthesize gainFunction=_gainFunction - In the implementation block
-(SCD_Struct_PM8)duration;
-(SCD_Struct_PM8)trackTime;
-(SCD_Struct_PM8)summaryTime;
-(id)initWithDuration:(SCD_Struct_PM8)arg1 trackTime:(SCD_Struct_PM8)arg2 summaryTime:(SCD_Struct_PM8)arg3 gainFunction:(id)arg4 ;
-(NSArray *)gainFunction;
@end

