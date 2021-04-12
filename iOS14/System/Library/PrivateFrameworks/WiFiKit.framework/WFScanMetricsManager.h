/*
* Generated on Thursday, January 14, 2021 at 2:26:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
*/


@class NSMutableDictionary, NSDate;

@interface WFScanMetricsManager : NSObject {

	BOOL _submited;
	NSMutableDictionary* _sectionCounts;
	NSDate* _timestamp;

}

@property (nonatomic,retain) NSMutableDictionary * sectionCounts;              //@synthesize sectionCounts=_sectionCounts - In the implementation block
@property (nonatomic,retain) NSDate * timestamp;                               //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL submited;                                    //@synthesize submited=_submited - In the implementation block
-(id)init;
-(NSDate *)timestamp;
-(void)submit;
-(void)reset;
-(void)setTimestamp:(NSDate *)arg1 ;
-(void)ingestScanResults:(id)arg1 ;
-(NSMutableDictionary *)sectionCounts;
-(id)sectionNameForRecord:(id)arg1 ;
-(void)setSectionCounts:(NSMutableDictionary *)arg1 ;
-(void)setSubmited:(BOOL)arg1 ;
-(BOOL)submited;
@end

