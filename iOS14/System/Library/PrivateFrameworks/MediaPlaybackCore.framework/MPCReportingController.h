/*
* Generated on Thursday, January 14, 2021 at 2:25:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray, NSArray;

@interface MPCReportingController : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSMutableArray* _childReportingControllers;
	MPCReportingController* _parentReportingController;

}

@property (assign,nonatomic,__weak) MPCReportingController * parentReportingController; 
@property (nonatomic,copy,readonly) NSArray * childReportingControllers; 
-(id)init;
-(void)setParentReportingController:(MPCReportingController *)arg1 ;
-(void)_recordReportingEvents:(id)arg1 ;
-(MPCReportingController *)parentReportingController;
-(NSArray *)childReportingControllers;
-(void)addChildReportingController:(id)arg1 ;
-(void)recordReportingEvents:(id)arg1 ;
-(void)removeChildReportingController:(id)arg1 ;
@end

