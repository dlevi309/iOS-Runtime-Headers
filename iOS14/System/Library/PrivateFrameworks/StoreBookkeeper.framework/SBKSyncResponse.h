/*
* Generated on Thursday, January 14, 2021 at 2:28:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

