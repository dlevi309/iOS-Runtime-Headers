/*
* Generated on Thursday, January 14, 2021 at 2:21:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setRecentContactNameRecordsHandler:(id)arg1 ;
-(id)recentContactNameRecordsCompletion;
-(id)contactNameRecordsCompletion;
-(void)setRecentContactNameRecordsSetup:(id)arg1 ;
-(void)recentRecordLoadingCompletion;
-(void)setContactNameRecordsCompletion:(id)arg1 ;
-(id)contactNameRecordsHandler;
-(void)resetRecordData;
-(unsigned char)recordLoadingSetup;
-(id)resetContactNameRecordData;
-(id)initWithName:(id)arg1 ;
-(id)description;
-(unsigned char)recentRecordLoadingSetup;
-(unsigned char)recordLoadingHandler:(id)arg1 ;
-(id)recentContactNameRecordsSetup;
-(void)setRecentContactNameRecordsCompletion:(id)arg1 ;
-(void)setResetContactNameRecordData:(id)arg1 ;
-(unsigned char)recentRecordLoadingHandler:(id)arg1 ;
-(void)setContactNameRecordsHandler:(id)arg1 ;
-(void)setContactNameRecordsSetup:(id)arg1 ;
-(id)recentContactNameRecordsHandler;
-(void)recordLoadingCompletion;
-(id)contactNameRecordsSetup;
@end

