/*
* Generated on Monday, March 1, 2021 at 2:33:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)reset;
-(NSDate *)timestamp;
-(void)setTimestamp:(NSDate *)arg1 ;
-(void)submit;
-(void)ingestScanResults:(id)arg1 ;
-(NSMutableDictionary *)sectionCounts;
-(id)sectionNameForRecord:(id)arg1 ;
-(void)setSectionCounts:(NSMutableDictionary *)arg1 ;
-(void)setSubmited:(BOOL)arg1 ;
-(BOOL)submited;
@end

