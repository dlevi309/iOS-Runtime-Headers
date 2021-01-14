/*
* Generated on Thursday, January 14, 2021 at 2:24:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
*/

#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NTCatchUpOperationTagRequest : NSObject <NSCopying> {

	NSString* _tagID;
	long long _cutoffTime;
	unsigned long long _headlinesPerFeedFetchCount;
	long long _fetchingBin;

}

@property (nonatomic,copy,readonly) NSString * tagID;                                      //@synthesize tagID=_tagID - In the implementation block
@property (nonatomic,readonly) long long cutoffTime;                                       //@synthesize cutoffTime=_cutoffTime - In the implementation block
@property (nonatomic,readonly) unsigned long long headlinesPerFeedFetchCount;              //@synthesize headlinesPerFeedFetchCount=_headlinesPerFeedFetchCount - In the implementation block
@property (nonatomic,readonly) long long fetchingBin;                                      //@synthesize fetchingBin=_fetchingBin - In the implementation block
-(NSString *)tagID;
-(id)init;
-(long long)fetchingBin;
-(long long)cutoffTime;
-(unsigned long long)headlinesPerFeedFetchCount;
-(id)initWithTagTodaySectionSpecificConfig:(id)arg1 tagID:(id)arg2 ;
@end

