/*
* Generated on Thursday, January 14, 2021 at 2:22:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveSuggestionClientModel.framework/ProactiveSuggestionClientModel
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface ATXInfoTimelineEntryRelevance : NSObject <NSSecureCoding> {

	double _score;
	double _duration;

}

@property (nonatomic,readonly) double score;                 //@synthesize score=_score - In the implementation block
@property (nonatomic,readonly) double duration;              //@synthesize duration=_duration - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)relevanceWithScore:(double)arg1 duration:(double)arg2 ;
-(id)init;
-(double)score;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)duration;
-(id)initWithScore:(double)arg1 duration:(double)arg2 ;
@end

