/*
* Generated on Monday, March 1, 2021 at 2:33:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
*/

#import <NewsToday/NewsToday-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary;

@interface NTCatchUpOperationForYouFetchInfo : NSObject <NSCopying> {

	BOOL _attemptedCachedOnly;
	NSDictionary* _feedContextByFeedID;

}

@property (nonatomic,readonly) BOOL attemptedCachedOnly;                             //@synthesize attemptedCachedOnly=_attemptedCachedOnly - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * feedContextByFeedID;              //@synthesize feedContextByFeedID=_feedContextByFeedID - In the implementation block
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDictionary *)feedContextByFeedID;
-(BOOL)attemptedCachedOnly;
-(id)initWithAttemptedCachedOnly:(BOOL)arg1 feedContextByFeedID:(id)arg2 ;
@end

