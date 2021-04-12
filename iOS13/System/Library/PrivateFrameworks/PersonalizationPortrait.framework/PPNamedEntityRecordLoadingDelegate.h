/*
* Generated on Monday, March 1, 2021 at 2:32:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(id)initWithName:(id)arg1 ;
-(unsigned char)recordLoadingSetup;
-(unsigned char)recordLoadingHandler:(id)arg1 ;
-(void)recordLoadingCompletion;
-(unsigned char)recentRecordLoadingSetup;
-(unsigned char)recentRecordLoadingHandler:(id)arg1 ;
-(void)recentRecordLoadingCompletion;
-(void)resetRecordData;
-(id)namedEntityRecordsSetup;
-(void)setNamedEntityRecordsSetup:(id)arg1 ;
-(id)namedEntityRecordsHandler;
-(void)setNamedEntityRecordsHandler:(id)arg1 ;
-(id)namedEntityRecordsCompletion;
-(void)setNamedEntityRecordsCompletion:(id)arg1 ;
-(id)recentNamedEntityRecordsSetup;
-(void)setRecentNamedEntityRecordsSetup:(id)arg1 ;
-(id)recentNamedEntityRecordsHandler;
-(void)setRecentNamedEntityRecordsHandler:(id)arg1 ;
-(id)recentNamedEntityRecordsCompletion;
-(void)setRecentNamedEntityRecordsCompletion:(id)arg1 ;
-(id)resetNamedEntityRecordData;
-(void)setResetNamedEntityRecordData:(id)arg1 ;
@end

