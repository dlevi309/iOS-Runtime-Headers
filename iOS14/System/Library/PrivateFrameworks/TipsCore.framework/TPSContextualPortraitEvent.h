/*
* Generated on Thursday, January 14, 2021 at 2:23:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TipsCore.framework/TipsCore
*/

#import <TipsCore/TipsCore-Structs.h>
#import <TipsCore/TPSContextualEvent.h>

@class NSString;

@interface TPSContextualPortraitEvent : TPSContextualEvent {

	double _confidenceThreshold;
	NSString* _topicID;

}

@property (assign,nonatomic) double confidenceThreshold;              //@synthesize confidenceThreshold=_confidenceThreshold - In the implementation block
@property (nonatomic,copy) NSString * topicID;                        //@synthesize topicID=_topicID - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)classSet;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(void)setTopicID:(NSString *)arg1 ;
-(double)confidenceThreshold;
-(void)setConfidenceThreshold:(double)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned)minObservationCount;
-(NSString *)topicID;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

