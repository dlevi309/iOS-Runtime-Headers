/*
* Generated on Monday, March 1, 2021 at 2:35:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <VideosUICore/VUIAsynchronousOperation.h>
#import <libobjc.A.dylib/VUIImageLoadingOperation.h>

@protocol VUIImageLoadParams;
@class TVImage, NSError, NSString;

@interface VUIImageLoadParamsOperation : VUIAsynchronousOperation <VUIImageLoadingOperation> {

	BOOL _cropToFit;
	TVImage* _image;
	unsigned long long _scalingResult;
	NSError* _error;
	id<VUIImageLoadParams> _params;
	CGSize _scaleToSize;

}

@property (nonatomic,retain) id<VUIImageLoadParams> params;                 //@synthesize params=_params - In the implementation block
@property (assign,nonatomic) CGSize scaleToSize;                            //@synthesize scaleToSize=_scaleToSize - In the implementation block
@property (assign,nonatomic) BOOL cropToFit;                                //@synthesize cropToFit=_cropToFit - In the implementation block
@property (nonatomic,retain) TVImage * image;                               //@synthesize image=_image - In the implementation block
@property (assign,nonatomic) unsigned long long scalingResult;              //@synthesize scalingResult=_scalingResult - In the implementation block
@property (nonatomic,copy) NSError * error;                                 //@synthesize error=_error - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(TVImage *)image;
-(void)setImage:(TVImage *)arg1 ;
-(id<VUIImageLoadParams>)params;
-(void)setParams:(id<VUIImageLoadParams>)arg1 ;
-(CGSize)scaleToSize;
-(BOOL)cropToFit;
-(void)setCropToFit:(BOOL)arg1 ;
-(void)setScaleToSize:(CGSize)arg1 ;
-(id)initWithParams:(id)arg1 scaleToSize:(CGSize)arg2 cropToFit:(BOOL)arg3 ;
-(void)setScalingResult:(unsigned long long)arg1 ;
-(unsigned long long)scalingResult;
@end

