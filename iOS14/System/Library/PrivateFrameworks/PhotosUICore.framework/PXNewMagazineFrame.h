/*
* Generated on Thursday, January 14, 2021 at 2:22:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@interface PXNewMagazineFrame : NSObject {

	long long _width;
	long long _height;
	double _aspectRatio;
	double _minAspectRatio;
	double _maxAspectRatio;

}

@property (assign,nonatomic) long long width;                        //@synthesize width=_width - In the implementation block
@property (assign,nonatomic) long long height;                       //@synthesize height=_height - In the implementation block
@property (nonatomic,readonly) long long numberOfTiles; 
@property (assign,nonatomic) double aspectRatio;                     //@synthesize aspectRatio=_aspectRatio - In the implementation block
@property (assign,nonatomic) double minAspectRatio;                  //@synthesize minAspectRatio=_minAspectRatio - In the implementation block
@property (assign,nonatomic) double maxAspectRatio;                  //@synthesize maxAspectRatio=_maxAspectRatio - In the implementation block
-(void)setHeight:(long long)arg1 ;
-(long long)width;
-(void)setWidth:(long long)arg1 ;
-(long long)height;
-(double)aspectRatio;
-(id)initWithWidth:(long long)arg1 height:(long long)arg2 ;
-(id)description;
-(double)maxAspectRatio;
-(void)setMaxAspectRatio:(double)arg1 ;
-(void)setAspectRatio:(double)arg1 ;
-(long long)numberOfTiles;
-(double)minAspectRatio;
-(void)setMinAspectRatio:(double)arg1 ;
@end

