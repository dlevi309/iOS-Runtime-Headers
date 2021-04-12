/*
* Generated on Thursday, January 14, 2021 at 2:21:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/

#import <AssistantServices/AFSiriRequest.h>

@class NSArray;

@interface AFDismissTimerRequest : AFSiriRequest {

	NSArray* _timerURLs;

}

@property (nonatomic,copy) NSArray * timerURLs;              //@synthesize timerURLs=_timerURLs - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setTimerURLs:(NSArray *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)createResponse;
-(NSArray *)timerURLs;
-(id)initWithCoder:(id)arg1 ;
@end

