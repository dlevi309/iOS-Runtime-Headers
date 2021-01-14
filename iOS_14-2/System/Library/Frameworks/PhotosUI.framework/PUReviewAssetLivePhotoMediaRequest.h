/*
* Generated on Thursday, January 14, 2021 at 2:22:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <libobjc.A.dylib/PUReviewAssetCancelableMediaRequest.h>

@interface PUReviewAssetLivePhotoMediaRequest : NSObject <PUReviewAssetCancelableMediaRequest> {

	int __liveRequestID;

}

@property (nonatomic,readonly) int _liveRequestID;              //@synthesize _liveRequestID=__liveRequestID - In the implementation block
-(void)cancelRequest;
-(id)initLivePhotoRequestID:(int)arg1 ;
-(int)_liveRequestID;
@end

