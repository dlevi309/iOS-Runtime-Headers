/*
* Generated on Thursday, January 14, 2021 at 2:21:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
*/

#import <PersonalizationPortrait/PPRecordLoadingDelegate.h>

@interface PPEventNameRecordLoadingDelegate : PPRecordLoadingDelegate {

	/*^block*/id _eventNameRecordsSetup;
	/*^block*/id _eventNameRecordsHandler;
	/*^block*/id _eventNameRecordsCompletion;
	/*^block*/id _recentEventNameRecordsSetup;
	/*^block*/id _recentEventNameRecordsHandler;
	/*^block*/id _recentEventNameRecordsCompletion;
	/*^block*/id _resetEventNameRecordData;

}

@property (nonatomic,copy) id eventNameRecordsSetup;                         //@synthesize eventNameRecordsSetup=_eventNameRecordsSetup - In the implementation block
@property (nonatomic,copy) id eventNameRecordsHandler;                       //@synthesize eventNameRecordsHandler=_eventNameRecordsHandler - In the implementation block
@property (nonatomic,copy) id eventNameRecordsCompletion;                    //@synthesize eventNameRecordsCompletion=_eventNameRecordsCompletion - In the implementation block
@property (nonatomic,copy) id recentEventNameRecordsSetup;                   //@synthesize recentEventNameRecordsSetup=_recentEventNameRecordsSetup - In the implementation block
@property (nonatomic,copy) id recentEventNameRecordsHandler;                 //@synthesize recentEventNameRecordsHandler=_recentEventNameRecordsHandler - In the implementation block
@property (nonatomic,copy) id recentEventNameRecordsCompletion;              //@synthesize recentEventNameRecordsCompletion=_recentEventNameRecordsCompletion - In the implementation block
@property (nonatomic,copy) id resetEventNameRecordData;                      //@synthesize resetEventNameRecordData=_resetEventNameRecordData - In the implementation block
-(void)recentRecordLoadingCompletion;
-(void)resetRecordData;
-(unsigned char)recordLoadingSetup;
-(id)initWithName:(id)arg1 ;
-(id)description;
-(unsigned char)recentRecordLoadingSetup;
-(unsigned char)recordLoadingHandler:(id)arg1 ;
-(id)eventNameRecordsSetup;
-(id)eventNameRecordsHandler;
-(void)setEventNameRecordsSetup:(id)arg1 ;
-(id)resetEventNameRecordData;
-(void)setEventNameRecordsHandler:(id)arg1 ;
-(id)eventNameRecordsCompletion;
-(void)setEventNameRecordsCompletion:(id)arg1 ;
-(id)recentEventNameRecordsSetup;
-(void)setRecentEventNameRecordsSetup:(id)arg1 ;
-(id)recentEventNameRecordsHandler;
-(void)setRecentEventNameRecordsHandler:(id)arg1 ;
-(id)recentEventNameRecordsCompletion;
-(void)setRecentEventNameRecordsCompletion:(id)arg1 ;
-(void)setResetEventNameRecordData:(id)arg1 ;
-(unsigned char)recentRecordLoadingHandler:(id)arg1 ;
-(void)recordLoadingCompletion;
@end

