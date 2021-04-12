/*
* Generated on Thursday, January 14, 2021 at 2:26:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/


@class NSDate, NTKFace, NTKFaceSnapshotCacheRequestOptions;

@interface NTKFaceSnapshotCacheRequest : NSObject {

	NSDate* _createdAt;
	NTKFace* _face;
	NTKFaceSnapshotCacheRequestOptions* _options;
	/*^block*/id _completion;

}

@property (nonatomic,copy,readonly) NSDate * createdAt;                                        //@synthesize createdAt=_createdAt - In the implementation block
@property (nonatomic,copy,readonly) NTKFace * face;                                            //@synthesize face=_face - In the implementation block
@property (nonatomic,copy,readonly) NTKFaceSnapshotCacheRequestOptions * options;              //@synthesize options=_options - In the implementation block
@property (nonatomic,copy) id completion;                                                      //@synthesize completion=_completion - In the implementation block
-(void)setCompletion:(id)arg1 ;
-(NSDate *)createdAt;
-(NTKFaceSnapshotCacheRequestOptions *)options;
-(id)completion;
-(NTKFace *)face;
-(id)initWithFace:(id)arg1 options:(id)arg2 completion:(/*^block*/id)arg3 ;
@end

