/*
* Generated on Monday, March 1, 2021 at 2:33:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/


@class TSTMasterLayout, NSMutableArray;

@interface TSTLayoutTask : NSObject {

	TSTMasterLayout* mMasterLayout;
	NSMutableArray* mCellStatesToLayout;

}

@property (nonatomic,retain) NSMutableArray * cellStatesToLayout; 
-(void)dealloc;
-(id)initWithMasterLayout:(id)arg1 ;
-(NSMutableArray *)cellStatesToLayout;
-(void)flushToGlobalCaches;
-(void)setCellStatesToLayout:(NSMutableArray *)arg1 ;
@end

