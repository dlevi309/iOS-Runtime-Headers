/*
* Generated on Thursday, January 14, 2021 at 2:24:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSDictionary *)feedContextByFeedID;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)attemptedCachedOnly;
-(id)initWithAttemptedCachedOnly:(BOOL)arg1 feedContextByFeedID:(id)arg2 ;
@end

