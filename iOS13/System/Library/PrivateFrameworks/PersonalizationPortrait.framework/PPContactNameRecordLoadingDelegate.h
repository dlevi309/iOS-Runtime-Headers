/*
* Generated on Monday, March 1, 2021 at 2:32:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
*/

#import <PersonalizationPortrait/PPRecordLoadingDelegate.h>

@interface PPContactNameRecordLoadingDelegate : PPRecordLoadingDelegate {

	/*^block*/id _contactNameRecordsSetup;
	/*^block*/id _contactNameRecordsHandler;
	/*^block*/id _contactNameRecordsCompletion;
	/*^block*/id _recentContactNameRecordsSetup;
	/*^block*/id _recentContactNameRecordsHandler;
	/*^block*/id _recentContactNameRecordsCompletion;
	/*^block*/id _resetContactNameRecordData;

}

@property (nonatomic,copy) id contactNameRecordsSetup;                         //@synthesize contactNameRecordsSetup=_contactNameRecordsSetup - In the implementation block
@property (nonatomic,copy) id contactNameRecordsHandler;                       //@synthesize contactNameRecordsHandler=_contactNameRecordsHandler - In the implementation block
@property (nonatomic,copy) id contactNameRecordsCompletion;                    //@synthesize contactNameRecordsCompletion=_contactNameRecordsCompletion - In the implementation block
@property (nonatomic,copy) id recentContactNameRecordsSetup;                   //@synthesize recentContactNameRecordsSetup=_recentContactNameRecordsSetup - In the implementation block
@property (nonatomic,copy) id recentContactNameRecordsHandler;                 //@synthesize recentContactNameRecordsHandler=_recentContactNameRecordsHandler - In the implementation block
@property (nonatomic,copy) id recentContactNameRecordsCompletion;              //@synthesize recentContactNameRecordsCompletion=_recentContactNameRecordsCompletion - In the implementation block
@property (nonatomic,copy) id resetContactNameRecordData;                      //@synthesize resetContactNameRecordData=_resetContactNameRecordData - In the implementation block
-(id)description;
-(id)initWithName:(id)arg1 ;
-(unsigned char)recordLoadingSetup;
-(unsigned char)recordLoadingHandler:(id)arg1 ;
-(void)recordLoadingCompletion;
-(unsigned char)recentRecordLoadingSetup;
-(unsigned char)recentRecordLoadingHandler:(id)arg1 ;
-(void)recentRecordLoadingCompletion;
-(void)resetRecordData;
-(id)contactNameRecordsSetup;
-(void)setContactNameRecordsSetup:(id)arg1 ;
-(id)contactNameRecordsHandler;
-(void)setContactNameRecordsHandler:(id)arg1 ;
-(id)contactNameRecordsCompletion;
-(void)setContactNameRecordsCompletion:(id)arg1 ;
-(id)recentContactNameRecordsSetup;
-(void)setRecentContactNameRecordsSetup:(id)arg1 ;
-(id)recentContactNameRecordsHandler;
-(void)setRecentContactNameRecordsHandler:(id)arg1 ;
-(id)recentContactNameRecordsCompletion;
-(void)setRecentContactNameRecordsCompletion:(id)arg1 ;
-(id)resetContactNameRecordData;
-(void)setResetContactNameRecordData:(id)arg1 ;
@end

