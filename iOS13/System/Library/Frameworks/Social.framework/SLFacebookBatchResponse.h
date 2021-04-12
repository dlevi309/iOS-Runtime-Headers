/*
* Generated on Monday, March 1, 2021 at 2:31:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Social.framework/Social
*/

#import <Social/SLFacebookResponse.h>

@class NSArray;

@interface SLFacebookBatchResponse : SLFacebookResponse

@property (readonly) NSArray * batchResponseParameters; 
-(long long)batchedResponsesCount;
-(id)responseAtBatchIndex:(long long)arg1 ;
-(NSArray *)batchResponseParameters;
@end

