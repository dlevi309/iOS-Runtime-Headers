/*
* Generated on Thursday, January 14, 2021 at 2:21:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
*/

#import <PersonalizationPortrait/PPRecordLoadingDelegate.h>

@interface PPNamedEntityRecordLoadingDelegate : PPRecordLoadingDelegate {

	/*^block*/id _namedEntityRecordsSetup;
	/*^block*/id _namedEntityRecordsHandler;
	/*^block*/id _namedEntityRecordsCompletion;
	/*^block*/id _recentNamedEntityRecordsSetup;
	/*^block*/id _recentNamedEntityRecordsHandler;
	/*^block*/id _recentNamedEntityRecordsCompletion;
	/*^block*/id _resetNamedEntityRecordData;

}

@property (nonatomic,copy) id namedEntityRecordsSetup;                         //@synthesize namedEntityRecordsSetup=_namedEntityRecordsSetup - In the implementation block
@property (nonatomic,copy) id namedEntityRecordsHandler;                       //@synthesize namedEntityRecordsHandler=_namedEntityRecordsHandler - In the implementation block
@property (nonatomic,copy) id namedEntityRecordsCompletion;                    //@synthesize namedEntityRecordsCompletion=_namedEntityRecordsCompletion - In the implementation block
@property (nonatomic,copy) id recentNamedEntityRecordsSetup;                   //@synthesize recentNamedEntityRecordsSetup=_recentNamedEntityRecordsSetup - In the implementation block
@property (nonatomic,copy) id recentNamedEntityRecordsHandler;                 //@synthesize recentNamedEntityRecordsHandler=_recentNamedEntityRecordsHandler - In the implementation block
@property (nonatomic,copy) id recentNamedEntityRecordsCompletion;              //@synthesize recentNamedEntityRecordsCompletion=_recentNamedEntityRecordsCompletion - In the implementation block
@property (nonatomic,copy) id resetNamedEntityRecordData;                      //@synthesize resetNamedEntityRecordData=_resetNamedEntityRecordData - In the implementation block
-(void)recentRecordLoadingCompletion;
-(void)setResetNamedEntityRecordData:(id)arg1 ;
-(void)resetRecordData;
-(void)setRecentNamedEntityRecordsCompletion:(id)arg1 ;
-(id)recentNamedEntityRecordsHandler;
-(unsigned char)recordLoadingSetup;
-(id)initWithName:(id)arg1 ;
-(id)description;
-(id)recentNamedEntityRecordsCompletion;
-(void)setRecentNamedEntityRecordsHandler:(id)arg1 ;
-(void)setNamedEntityRecordsHandler:(id)arg1 ;
-(unsigned char)recentRecordLoadingSetup;
-(id)namedEntityRecordsSetup;
-(unsigned char)recordLoadingHandler:(id)arg1 ;
-(id)resetNamedEntityRecordData;
-(id)recentNamedEntityRecordsSetup;
-(unsigned char)recentRecordLoadingHandler:(id)arg1 ;
-(id)namedEntityRecordsCompletion;
-(void)recordLoadingCompletion;
-(id)namedEntityRecordsHandler;
-(void)setNamedEntityRecordsCompletion:(id)arg1 ;
-(void)setRecentNamedEntityRecordsSetup:(id)arg1 ;
-(void)setNamedEntityRecordsSetup:(id)arg1 ;
@end

