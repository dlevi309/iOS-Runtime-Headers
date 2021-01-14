/*
* Generated on Thursday, January 14, 2021 at 2:20:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class UIImage, UIColor;

@interface _UIBatteryViewAXHUDImageCacheInfo : NSObject {

	BOOL _showBolt;
	BOOL _reverseLayoutDirection;
	UIImage* _cachedImage;
	UIColor* _fillColor;
	UIColor* _tintColor;
	double _capacity;
	double _scale;

}

@property (nonatomic,retain) UIImage * cachedImage;                    //@synthesize cachedImage=_cachedImage - In the implementation block
@property (nonatomic,retain) UIColor * fillColor;                      //@synthesize fillColor=_fillColor - In the implementation block
@property (nonatomic,retain) UIColor * tintColor;                      //@synthesize tintColor=_tintColor - In the implementation block
@property (assign,nonatomic) double capacity;                          //@synthesize capacity=_capacity - In the implementation block
@property (assign,nonatomic) BOOL showBolt;                            //@synthesize showBolt=_showBolt - In the implementation block
@property (assign,nonatomic) BOOL reverseLayoutDirection;              //@synthesize reverseLayoutDirection=_reverseLayoutDirection - In the implementation block
@property (assign,nonatomic) double scale;                             //@synthesize scale=_scale - In the implementation block
-(void)setFillColor:(UIColor *)arg1 ;
-(void)setCapacity:(double)arg1 ;
-(void)setTintColor:(UIColor *)arg1 ;
-(BOOL)cacheMatchesCapacity:(double)arg1 fillColor:(id)arg2 tintColor:(id)arg3 showingBolt:(BOOL)arg4 reverseLayout:(BOOL)arg5 scale:(double)arg6 ;
-(UIColor *)fillColor;
-(double)capacity;
-(BOOL)reverseLayoutDirection;
-(void)setShowBolt:(BOOL)arg1 ;
-(void)setCachedImage:(UIImage *)arg1 ;
-(void)setReverseLayoutDirection:(BOOL)arg1 ;
-(double)scale;
-(BOOL)showBolt;
-(void)setScale:(double)arg1 ;
-(UIImage *)cachedImage;
-(UIColor *)tintColor;
@end

