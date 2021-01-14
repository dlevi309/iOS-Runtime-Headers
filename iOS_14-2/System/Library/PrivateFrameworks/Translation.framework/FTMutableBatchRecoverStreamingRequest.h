/*
* Generated on Thursday, January 14, 2021 at 2:23:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <Translation/Translation-Structs.h>
#import <Translation/FTBatchRecoverStreamingRequest.h>

@class FTStartBatchRecoverRequest;

@interface FTMutableBatchRecoverStreamingRequest : FTBatchRecoverStreamingRequest

@property (assign,nonatomic) long long content_type; 
@property (nonatomic,copy) FTStartBatchRecoverRequest * contentAsFTStartBatchRecoverRequest; 
-(id)init;
-(long long)content_type;
-(void)setContent_type:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(FTStartBatchRecoverRequest *)contentAsFTStartBatchRecoverRequest;
-(void)setContentAsFTStartBatchRecoverRequest:(FTStartBatchRecoverRequest *)arg1 ;
@end

