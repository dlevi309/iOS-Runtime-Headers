/*
* Generated on Thursday, January 14, 2021 at 2:28:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <TVMLKit/TVViewDescription.h>

@class NSString;

@interface TVURLDescription : TVViewDescription {

	BOOL _centerGrowth;
	NSString* _url;
	double _focusSizeIncrease;
	NSString* _cropCode;
	NSString* _urlFormat;
	CGSize _imageSize;

}

@property (nonatomic,retain) NSString * url;                        //@synthesize url=_url - In the implementation block
@property (assign,nonatomic) CGSize imageSize;                      //@synthesize imageSize=_imageSize - In the implementation block
@property (assign,nonatomic) double focusSizeIncrease;              //@synthesize focusSizeIncrease=_focusSizeIncrease - In the implementation block
@property (nonatomic,retain) NSString * cropCode;                   //@synthesize cropCode=_cropCode - In the implementation block
@property (nonatomic,retain) NSString * urlFormat;                  //@synthesize urlFormat=_urlFormat - In the implementation block
@property (assign,nonatomic) BOOL centerGrowth;                     //@synthesize centerGrowth=_centerGrowth - In the implementation block
-(CGSize)imageSize;
-(NSString *)url;
-(void)setUrl:(NSString *)arg1 ;
-(void)setImageSize:(CGSize)arg1 ;
-(NSString *)cropCode;
-(void)setCropCode:(NSString *)arg1 ;
-(id)initUrlWithProperties:(id)arg1 imageSize:(CGSize)arg2 focusSizeIncrease:(double)arg3 cropCode:(id)arg4 urlFormat:(id)arg5 ;
-(void)setUrlFormat:(NSString *)arg1 ;
-(NSString *)urlFormat;
-(void)setFocusSizeIncrease:(double)arg1 ;
-(double)focusSizeIncrease;
-(void)setCenterGrowth:(BOOL)arg1 ;
-(BOOL)centerGrowth;
@end

