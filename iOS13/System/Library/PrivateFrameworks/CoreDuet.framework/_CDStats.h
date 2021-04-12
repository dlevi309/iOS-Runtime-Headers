/*
* Generated on Monday, March 1, 2021 at 2:30:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/


@interface _CDStats : NSObject
+(id)sharedInstance;
+(id)hardwareModel;
+(id)familyNames;
-(id)init;
-(id)string;
-(void)dealloc;
-(id)dictionary;
-(void)addToStatsPrinter:(id)arg1 perfMetricFamily:(id)arg2 ;
-(void)addToDictionary:(id)arg1 perfMetricFamily:(id)arg2 ;
-(void)addToDictionary:(id)arg1 perfMetric:(id)arg2 ;
@end

