/*
* Generated on Monday, March 1, 2021 at 2:32:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
*/


@class NSString, NSDate;

@interface PPRecordLoadingDelegate : NSObject {

	NSString* _name;
	NSDate* _loadRecordsDetectedSince;

}

@property (nonatomic,readonly) NSString * name;                              //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSDate * loadRecordsDetectedSince;              //@synthesize loadRecordsDetectedSince=_loadRecordsDetectedSince - In the implementation block
-(id)description;
-(NSString *)name;
-(id)initWithName:(id)arg1 ;
-(unsigned char)recordLoadingSetup;
-(unsigned char)recordLoadingHandler:(id)arg1 ;
-(void)recordLoadingCompletion;
-(unsigned char)recentRecordLoadingSetup;
-(unsigned char)recentRecordLoadingHandler:(id)arg1 ;
-(void)recentRecordLoadingCompletion;
-(void)resetRecordData;
-(NSDate *)loadRecordsDetectedSince;
-(void)setLoadRecordsDetectedSince:(NSDate *)arg1 ;
@end

