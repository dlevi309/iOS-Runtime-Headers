/*
* Generated on Thursday, January 14, 2021 at 2:24:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/


@class NSMutableArray;

@interface HKHeartbeatSequenceChartData : NSObject {

	double _initialXAxisOffset;
	NSMutableArray* _sections;

}

@property (nonatomic,readonly) NSMutableArray * sections;              //@synthesize sections=_sections - In the implementation block
@property (assign,nonatomic) double initialXAxisOffset;                //@synthesize initialXAxisOffset=_initialXAxisOffset - In the implementation block
-(id)init;
-(NSMutableArray *)sections;
-(long long)sectionCount;
-(void)addSequencePoint:(id)arg1 section:(long long)arg2 ;
-(void)setInitialXAxisOffset:(double)arg1 ;
-(void)enumerateSequences:(/*^block*/id)arg1 ;
-(double)initialXAxisOffset;
-(void)_expandToSection:(long long)arg1 ;
@end

