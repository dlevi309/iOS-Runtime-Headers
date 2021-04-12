/*
* Generated on Thursday, January 14, 2021 at 2:22:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <libobjc.A.dylib/PUAdjustmentCustomBehavior.h>

@class NSString;

@interface PUBrillianceAdjustmentCustomBehavior : NSObject <PUAdjustmentCustomBehavior> {

	BOOL _calculatingStatistics;

}

@property (assign) BOOL calculatingStatistics;                      //@synthesize calculatingStatistics=_calculatingStatistics - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dataSource:(id)arg1 adjustmentInfo:(id)arg2 setEnabled:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)dataSource:(id)arg1 adjustmentInfo:(id)arg2 modifyValue:(double)arg3 ;
-(void)populateSmartToneStatisticsForDataSource:(id)arg1 adjustmentInfo:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)calculatingStatistics;
-(void)setCalculatingStatistics:(BOOL)arg1 ;
@end

