/*
* Generated on Thursday, January 14, 2021 at 2:27:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/JITAppKit.framework/JITAppKit
*/


#import <JITAppKit/JITAppKit-Structs.h>
@class NSURL;

@interface TKAdaptiveImage_Trait : NSObject {

	BOOL _useReadableWidth;
	long long _horizontalSizeClass;
	long long _verticalSizeClass;
	NSURL* _url;
	double _quality;
	CGSize _size;
	CGSize _relativeSize;
	CGSize _minSize;
	CGSize _maxSize;
	CGRect _crop;

}

@property (assign,nonatomic) long long horizontalSizeClass;              //@synthesize horizontalSizeClass=_horizontalSizeClass - In the implementation block
@property (assign,nonatomic) long long verticalSizeClass;                //@synthesize verticalSizeClass=_verticalSizeClass - In the implementation block
@property (assign,nonatomic) BOOL useReadableWidth;                      //@synthesize useReadableWidth=_useReadableWidth - In the implementation block
@property (assign,nonatomic) CGSize size;                                //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) CGSize relativeSize;                        //@synthesize relativeSize=_relativeSize - In the implementation block
@property (assign,nonatomic) CGSize minSize;                             //@synthesize minSize=_minSize - In the implementation block
@property (assign,nonatomic) CGSize maxSize;                             //@synthesize maxSize=_maxSize - In the implementation block
@property (assign,nonatomic) CGRect crop;                                //@synthesize crop=_crop - In the implementation block
@property (nonatomic,copy) NSURL * url;                                  //@synthesize url=_url - In the implementation block
@property (assign,nonatomic) double quality;                             //@synthesize quality=_quality - In the implementation block
-(void)setMaxSize:(CGSize)arg1 ;
-(CGRect)crop;
-(id)init;
-(CGSize)minSize;
-(CGSize)size;
-(void)setSize:(CGSize)arg1 ;
-(NSURL *)url;
-(double)quality;
-(long long)verticalSizeClass;
-(void)setVerticalSizeClass:(long long)arg1 ;
-(CGSize)maxSize;
-(void)setCrop:(CGRect)arg1 ;
-(void)setUrl:(NSURL *)arg1 ;
-(void)setQuality:(double)arg1 ;
-(long long)horizontalSizeClass;
-(void)setMinSize:(CGSize)arg1 ;
-(BOOL)compatibleWithTrait:(id)arg1 ;
-(BOOL)useReadableWidth;
-(CGSize)relativeSize;
-(void)setHorizontalSizeClass:(long long)arg1 ;
-(void)setUseReadableWidth:(BOOL)arg1 ;
-(void)setRelativeSize:(CGSize)arg1 ;
@end

