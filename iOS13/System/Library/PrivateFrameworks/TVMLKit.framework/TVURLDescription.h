/*
* Generated on Monday, March 1, 2021 at 2:35:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)url;
-(void)setUrl:(NSString *)arg1 ;
-(CGSize)imageSize;
-(void)setImageSize:(CGSize)arg1 ;
-(NSString *)urlFormat;
-(void)setUrlFormat:(NSString *)arg1 ;
-(double)focusSizeIncrease;
-(void)setFocusSizeIncrease:(double)arg1 ;
-(void)setCenterGrowth:(BOOL)arg1 ;
-(BOOL)centerGrowth;
-(void)setCropCode:(NSString *)arg1 ;
-(NSString *)cropCode;
-(id)initUrlWithProperties:(id)arg1 imageSize:(CGSize)arg2 focusSizeIncrease:(double)arg3 cropCode:(id)arg4 urlFormat:(id)arg5 ;
@end

