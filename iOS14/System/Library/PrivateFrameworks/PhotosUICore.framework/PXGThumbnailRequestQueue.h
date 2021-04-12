/*
* Generated on Thursday, January 14, 2021 at 2:22:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


#import <PhotosUICore/PhotosUICore-Structs.h>
@interface PXGThumbnailRequestQueue : NSObject {

	long long _capacity;
	long long _count;
	PXGThumbnailRequest* _requests;

}

@property (assign,nonatomic) long long count;                              //@synthesize count=_count - In the implementation block
@property (nonatomic,readonly) PXGThumbnailRequest* requests;              //@synthesize requests=_requests - In the implementation block
-(void)setCount:(long long)arg1 ;
-(id)init;
-(void)sortRequests;
-(long long)count;
-(PXGThumbnailRequest*)requests;
-(id)description;
-(void)enqueueRequestsWithItemRange:(NSRange)arg1 textureRequestIDs:(NSRange)arg2 displayAssetFetchResult:(id)arg3 targetSize:(CGSize)arg4 ;
-(void)removeAllRequests;
-(void)dealloc;
@end

