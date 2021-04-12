/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
*/

#import <StoreBookkeeper/SBKResponse.h>

@class SBKSyncResponseData;

@interface SBKSyncResponse : SBKResponse {

	SBKSyncResponseData* _syncResponseData;

}

@property (readonly) SBKSyncResponseData * syncResponseData;              //@synthesize syncResponseData=_syncResponseData - In the implementation block
+(id)responseWithResponse:(id)arg1 transaction:(id)arg2 ;
-(void)deserializeResponseBodyWithTransaction:(id)arg1 ;
-(SBKSyncResponseData *)syncResponseData;
@end

