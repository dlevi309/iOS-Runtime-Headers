/*
* Generated on Monday, March 1, 2021 at 2:32:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/


@interface PKStatisticsManager : NSObject
+(id)sharedStatisticsManager;
-(void)pushValue:(double)arg1 forDistributionKey:(id)arg2 ;
-(void)incrementValueForKey:(id)arg1 ;
-(void)didAddStroke:(id)arg1 ;
-(void)didUseObjectEraser;
-(id)_statisticsKeyWithParameters:(id)arg1 ;
-(BOOL)_statisticsEnabled;
-(double)_valueForIdentifier:(id)arg1 ;
-(id)_opacityKeyForIdentifier:(id)arg1 ;
-(id)_thicknessKeyForIdentifier:(id)arg1 ;
@end

