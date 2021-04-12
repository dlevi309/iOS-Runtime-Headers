/*
* Generated on Thursday, January 14, 2021 at 2:21:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/


@class NSData;

@interface AFImagePNGData : NSObject {

	NSData* _imageData;
	double _scale;

}

@property (nonatomic,retain) NSData * imageData;              //@synthesize imageData=_imageData - In the implementation block
@property (assign,nonatomic) double scale;                    //@synthesize scale=_scale - In the implementation block
-(double)scale;
-(NSData *)imageData;
-(void)setScale:(double)arg1 ;
-(void)setImageData:(NSData *)arg1 ;
@end

