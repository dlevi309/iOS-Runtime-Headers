/*
* Generated on Thursday, January 14, 2021 at 2:22:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <libobjc.A.dylib/PUReviewAssetCancelableMediaRequest.h>

@interface PUReviewAssetAnimatedImageMediaRequest : NSObject <PUReviewAssetCancelableMediaRequest> {

	long long __animatedRequestID;

}

@property (nonatomic,readonly) long long _animatedRequestID;              //@synthesize _animatedRequestID=__animatedRequestID - In the implementation block
-(void)cancelRequest;
-(id)initWithAnimatedImageRequestID:(long long)arg1 ;
-(long long)_animatedRequestID;
@end

