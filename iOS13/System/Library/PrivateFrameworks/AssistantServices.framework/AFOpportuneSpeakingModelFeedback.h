/*
* Generated on Monday, March 1, 2021 at 2:31:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate, NSDictionary;

@interface AFOpportuneSpeakingModelFeedback : NSObject <NSSecureCoding> {

	NSDate* _lastNegativeFeedback;
	NSDictionary* _negativeFeedbackByContact;

}

@property (nonatomic,retain) NSDate * lastNegativeFeedback;                         //@synthesize lastNegativeFeedback=_lastNegativeFeedback - In the implementation block
@property (nonatomic,retain) NSDictionary * negativeFeedbackByContact;              //@synthesize negativeFeedbackByContact=_negativeFeedbackByContact - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)lastNegativeFeedback;
-(void)setLastNegativeFeedback:(NSDate *)arg1 ;
-(NSDictionary *)negativeFeedbackByContact;
-(void)setNegativeFeedbackByContact:(NSDictionary *)arg1 ;
@end

