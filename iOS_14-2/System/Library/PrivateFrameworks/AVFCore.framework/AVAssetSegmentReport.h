/*
* Generated on Thursday, January 14, 2021 at 2:21:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/


@class NSMutableArray, NSArray;

@interface AVAssetSegmentReport : NSObject {

	long long _segmentType;
	NSMutableArray* _trackReports;

}

@property (nonatomic,readonly) long long segmentType;               //@synthesize segmentType=_segmentType - In the implementation block
@property (nonatomic,readonly) NSArray * trackReports;              //@synthesize trackReports=_trackReports - In the implementation block
-(id)initWithFigSegmentReportDictionary:(id)arg1 ;
-(long long)segmentType;
-(NSArray *)trackReports;
-(void)dealloc;
@end

