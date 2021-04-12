/*
* Generated on Thursday, January 14, 2021 at 2:27:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/


@class PHAsset, PHAssetResource;

@interface MiroAssetRequest : NSObject {

	BOOL _isLocal;
	int _requestID;
	PHAsset* _asset;
	PHAssetResource* _resource;
	double _progress;
	double _sizeFactor;

}

@property (nonatomic,retain) PHAsset * asset;                         //@synthesize asset=_asset - In the implementation block
@property (nonatomic,retain) PHAssetResource * resource;              //@synthesize resource=_resource - In the implementation block
@property (assign,nonatomic) int requestID;                           //@synthesize requestID=_requestID - In the implementation block
@property (assign,nonatomic) BOOL isLocal;                            //@synthesize isLocal=_isLocal - In the implementation block
@property (assign,nonatomic) double progress;                         //@synthesize progress=_progress - In the implementation block
@property (assign,nonatomic) double sizeFactor;                       //@synthesize sizeFactor=_sizeFactor - In the implementation block
-(BOOL)isLocal;
-(void)setAsset:(PHAsset *)arg1 ;
-(double)progress;
-(void)setResource:(PHAssetResource *)arg1 ;
-(PHAsset *)asset;
-(int)requestID;
-(id)description;
-(PHAssetResource *)resource;
-(void)setProgress:(double)arg1 ;
-(void)setIsLocal:(BOOL)arg1 ;
-(void)setRequestID:(int)arg1 ;
-(double)sizeFactor;
-(void)setSizeFactor:(double)arg1 ;
@end

