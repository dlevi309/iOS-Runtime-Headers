/*
* Generated on Monday, March 1, 2021 at 2:34:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoVision.framework/PhotoVision
*/


@class NSString, NSMutableDictionary, NSArray, VNCanceller;

@interface PVSuggestionRequest : NSObject {

	long long _type;
	NSString* _requestId;
	NSMutableDictionary* _clusterFlagByClusterId;
	NSArray* _csns;
	NSArray* _cflags;
	/*^block*/id _updateHandler;
	VNCanceller* _canceller;

}

@property (readonly) long long type;                                            //@synthesize type=_type - In the implementation block
@property (readonly) NSString * requestId;                                      //@synthesize requestId=_requestId - In the implementation block
@property (readonly) NSMutableDictionary * clusterFlagByClusterId;              //@synthesize clusterFlagByClusterId=_clusterFlagByClusterId - In the implementation block
@property (readonly) NSArray * csns;                                            //@synthesize csns=_csns - In the implementation block
@property (readonly) NSArray * cflags;                                          //@synthesize cflags=_cflags - In the implementation block
@property (copy) id updateHandler;                                              //@synthesize updateHandler=_updateHandler - In the implementation block
@property (readonly) VNCanceller * canceller;                                   //@synthesize canceller=_canceller - In the implementation block
+(id)requestWithFaceClusterIds:(id)arg1 clusterFlags:(id)arg2 updateHandler:(/*^block*/id)arg3 ;
-(long long)type;
-(NSString *)requestId;
-(void)setUpdateHandler:(id)arg1 ;
-(id)updateHandler;
-(id)initWithFaceClusterIds:(id)arg1 clusterFlags:(id)arg2 updateHandler:(/*^block*/id)arg3 ;
-(NSMutableDictionary *)clusterFlagByClusterId;
-(NSArray *)csns;
-(NSArray *)cflags;
-(VNCanceller *)canceller;
@end

