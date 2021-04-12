/*
* Generated on Monday, March 1, 2021 at 2:35:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(CGSize)size;
-(NSURL *)url;
-(void)setSize:(CGSize)arg1 ;
-(CGRect)crop;
-(void)setCrop:(CGRect)arg1 ;
-(void)setUrl:(NSURL *)arg1 ;
-(void)setMaxSize:(CGSize)arg1 ;
-(long long)verticalSizeClass;
-(long long)horizontalSizeClass;
-(double)quality;
-(CGSize)minSize;
-(void)setMinSize:(CGSize)arg1 ;
-(CGSize)maxSize;
-(void)setQuality:(double)arg1 ;
-(void)setVerticalSizeClass:(long long)arg1 ;
-(BOOL)compatibleWithTrait:(id)arg1 ;
-(BOOL)useReadableWidth;
-(CGSize)relativeSize;
-(void)setHorizontalSizeClass:(long long)arg1 ;
-(void)setUseReadableWidth:(BOOL)arg1 ;
-(void)setRelativeSize:(CGSize)arg1 ;
@end

