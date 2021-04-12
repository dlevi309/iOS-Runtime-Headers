/*
* Generated on Thursday, January 14, 2021 at 2:26:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CKLStreamObserver.h>

@class NSMutableDictionary;

@interface CKLStreamLogStatsObserver : CKLStreamObserver {

	NSMutableDictionary* _totalSizeByLine;
	NSMutableDictionary* _totalCountByLine;

}

@property (retain) NSMutableDictionary * totalSizeByLine;               //@synthesize totalSizeByLine=_totalSizeByLine - In the implementation block
@property (retain) NSMutableDictionary * totalCountByLine;              //@synthesize totalCountByLine=_totalCountByLine - In the implementation block
-(void)finish;
-(id)initWithLogTypes:(unsigned long long)arg1 ;
-(NSMutableDictionary *)totalSizeByLine;
-(NSMutableDictionary *)totalCountByLine;
-(void)eventMatched:(id)arg1 ;
-(void)setTotalSizeByLine:(NSMutableDictionary *)arg1 ;
-(void)setTotalCountByLine:(NSMutableDictionary *)arg1 ;
@end

