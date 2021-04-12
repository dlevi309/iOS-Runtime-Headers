/*
* Generated on Thursday, January 14, 2021 at 2:21:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
*/


@class NSString, NSDate;

@interface PPRecordLoadingDelegate : NSObject {

	NSString* _name;
	NSDate* _loadRecordsDetectedSince;

}

@property (nonatomic,readonly) NSString * name;                              //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSDate * loadRecordsDetectedSince;              //@synthesize loadRecordsDetectedSince=_loadRecordsDetectedSince - In the implementation block
-(void)recentRecordLoadingCompletion;
-(void)resetRecordData;
-(unsigned char)recordLoadingSetup;
-(NSString *)name;
-(id)initWithName:(id)arg1 ;
-(id)description;
-(unsigned char)recentRecordLoadingSetup;
-(unsigned char)recordLoadingHandler:(id)arg1 ;
-(NSDate *)loadRecordsDetectedSince;
-(void)setLoadRecordsDetectedSince:(NSDate *)arg1 ;
-(unsigned char)recentRecordLoadingHandler:(id)arg1 ;
-(void)recordLoadingCompletion;
@end

