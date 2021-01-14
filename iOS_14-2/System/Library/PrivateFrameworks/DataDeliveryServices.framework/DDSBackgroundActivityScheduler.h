/*
* Generated on Thursday, January 14, 2021 at 2:24:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DataDeliveryServices.framework/DataDeliveryServices
*/


@protocol DDSBackgroundActivitySchedulerDelegate;
@class NSMutableDictionary;

@interface DDSBackgroundActivityScheduler : NSObject {

	id<DDSBackgroundActivitySchedulerDelegate> _delegate;
	NSMutableDictionary* _schedulerByIdentifier;

}

@property (nonatomic,retain) NSMutableDictionary * schedulerByIdentifier;                      //@synthesize schedulerByIdentifier=_schedulerByIdentifier - In the implementation block
@property (nonatomic,retain) id<DDSBackgroundActivitySchedulerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(id<DDSBackgroundActivitySchedulerDelegate>)delegate;
-(void)setDelegate:(id<DDSBackgroundActivitySchedulerDelegate>)arg1 ;
-(void)cancelActivityWithIdentifier:(id)arg1 ;
-(void)setSchedulerByIdentifier:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)schedulerByIdentifier;
-(void)scheduleActivityWithIdentifier:(id)arg1 interval:(double)arg2 tolerance:(double)arg3 ;
@end

