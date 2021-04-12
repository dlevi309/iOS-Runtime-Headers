/*
* Generated on Monday, March 1, 2021 at 2:31:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Social.framework/Social
*/

#import <Social/SLRequest.h>

@class NSMutableArray;

@interface SLBatchRequest : SLRequest {

	NSMutableArray* _requests;

}
-(void)addRequest:(id)arg1 ;
-(id)preparedURLRequest;
-(id)initWithServiceType:(id)arg1 URL:(id)arg2 parameters:(id)arg3 requestMethod:(long long)arg4 ;
@end

