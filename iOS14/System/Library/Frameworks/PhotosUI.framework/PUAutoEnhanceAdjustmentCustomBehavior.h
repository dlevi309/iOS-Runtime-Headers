/*
* Generated on Thursday, January 14, 2021 at 2:22:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <libobjc.A.dylib/PUAdjustmentCustomBehavior.h>

@class PUAdjustmentsDataSource, NSString;

@interface PUAutoEnhanceAdjustmentCustomBehavior : NSObject <PUAdjustmentCustomBehavior> {

	PUAdjustmentsDataSource* _dataSource;

}

@property (assign,nonatomic,__weak) PUAdjustmentsDataSource * dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dataSource:(id)arg1 adjustmentInfo:(id)arg2 setEnabled:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(PUAdjustmentsDataSource *)dataSource;
-(void)setDataSource:(PUAdjustmentsDataSource *)arg1 ;
@end

