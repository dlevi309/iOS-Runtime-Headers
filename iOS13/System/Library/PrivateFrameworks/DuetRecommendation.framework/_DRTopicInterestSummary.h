/*
* Generated on Monday, March 1, 2021 at 2:34:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DuetRecommendation.framework/DuetRecommendation
*/

#import <DuetRecommendation/DuetRecommendation-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface _DRTopicInterestSummary : NSObject <NSCoding, NSCopying> {

	unsigned long long _topicSelectionsCount;
	unsigned long long _topicPresentationsCount;

}

@property (assign) unsigned long long topicPresentationsCount;              //@synthesize topicPresentationsCount=_topicPresentationsCount - In the implementation block
@property (assign) unsigned long long topicSelectionsCount;                 //@synthesize topicSelectionsCount=_topicSelectionsCount - In the implementation block
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithPresentationsCount:(unsigned long long)arg1 selectionsCount:(unsigned long long)arg2 ;
-(unsigned long long)topicSelectionsCount;
-(unsigned long long)topicPresentationsCount;
-(void)setTopicPresentationsCount:(unsigned long long)arg1 ;
-(void)setTopicSelectionsCount:(unsigned long long)arg1 ;
@end

