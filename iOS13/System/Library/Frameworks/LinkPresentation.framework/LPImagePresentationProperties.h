/*
* Generated on Monday, March 1, 2021 at 2:31:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)setFilter:(long long)arg1 ;
-(long long)filter;
-(UIColor *)backgroundColor;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(long long)scalingMode;
-(void)setScalingMode:(long long)arg1 ;
-(UIColor *)maskColor;
-(BOOL)shouldApplyBackground;
-(void)setShouldApplyBackground:(BOOL)arg1 ;
-(BOOL)requireFixedSize;
-(void)setRequireFixedSize:(BOOL)arg1 ;
-(void)setMaskColor:(UIColor *)arg1 ;
@end

