/*
* Generated on Monday, March 1, 2021 at 2:31:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setScale:(double)arg1 ;
-(NSData *)imageData;
-(void)setImageData:(NSData *)arg1 ;
@end

