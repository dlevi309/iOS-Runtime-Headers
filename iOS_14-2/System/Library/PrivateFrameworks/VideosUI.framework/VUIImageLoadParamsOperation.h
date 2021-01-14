/*
* Generated on Thursday, January 14, 2021 at 2:24:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setImage:(TVImage *)arg1 ;
-(id)init;
-(void)setError:(NSError *)arg1 ;
-(void)setParams:(id<VUIImageLoadParams>)arg1 ;
-(TVImage *)image;
-(NSError *)error;
-(id<VUIImageLoadParams>)params;
-(id)initWithParams:(id)arg1 scaleToSize:(CGSize)arg2 cropToFit:(BOOL)arg3 ;
-(void)setScaleToSize:(CGSize)arg1 ;
-(void)setScalingResult:(unsigned long long)arg1 ;
-(unsigned long long)scalingResult;
-(CGSize)scaleToSize;
-(BOOL)cropToFit;
-(void)setCropToFit:(BOOL)arg1 ;
@end

