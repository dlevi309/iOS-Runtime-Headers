/*
* Generated on Thursday, January 14, 2021 at 2:23:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@interface SAAIRetrySearch : SABaseClientBoundCommand

@property (assign,nonatomic) double minimumDurationForRetry; 
+(id)retrySearch;
+(id)retrySearchWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(double)minimumDurationForRetry;
-(void)setMinimumDurationForRetry:(double)arg1 ;
@end

