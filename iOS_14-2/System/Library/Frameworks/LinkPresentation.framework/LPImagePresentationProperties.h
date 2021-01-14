/*
* Generated on Thursday, January 14, 2021 at 2:22:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
*/


@class UIColor;

@interface LPImagePresentationProperties : NSObject {

	BOOL _shouldApplyBackground;
	BOOL _requireFixedSize;
	long long _filter;
	long long _scalingMode;
	UIColor* _backgroundColor;
	UIColor* _maskColor;

}

@property (assign,nonatomic) long long filter;                        //@synthesize filter=_filter - In the implementation block
@property (assign,nonatomic) long long scalingMode;                   //@synthesize scalingMode=_scalingMode - In the implementation block
@property (assign,nonatomic) BOOL shouldApplyBackground;              //@synthesize shouldApplyBackground=_shouldApplyBackground - In the implementation block
@property (assign,nonatomic) BOOL requireFixedSize;                   //@synthesize requireFixedSize=_requireFixedSize - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColor;               //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,retain) UIColor * maskColor;                     //@synthesize maskColor=_maskColor - In the implementation block
-(void)setFilter:(long long)arg1 ;
-(long long)filter;
-(id)init;
-(UIColor *)maskColor;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(BOOL)shouldApplyBackground;
-(void)setShouldApplyBackground:(BOOL)arg1 ;
-(BOOL)requireFixedSize;
-(void)setRequireFixedSize:(BOOL)arg1 ;
-(void)setMaskColor:(UIColor *)arg1 ;
-(UIColor *)backgroundColor;
-(void)setScalingMode:(long long)arg1 ;
-(long long)scalingMode;
@end

