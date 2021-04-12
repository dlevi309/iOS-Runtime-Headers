/*
* Generated on Thursday, January 14, 2021 at 2:23:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/


#import <SafariServices/SafariServices-Structs.h>
@class UIImageView, UIVisualEffectView, UIView;

@interface _SFURLLabelAccessoryItem : NSObject {

	BOOL _centerAligned;
	UIImageView* _view;
	UIImageView* _squishedView;
	UIVisualEffectView* _effectView;
	UIVisualEffectView* _squishedEffectView;
	double _spacing;
	CGSize _size;

}

@property (nonatomic,retain) UIImageView * view;                                   //@synthesize view=_view - In the implementation block
@property (nonatomic,retain) UIImageView * squishedView;                           //@synthesize squishedView=_squishedView - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * effectView;                      //@synthesize effectView=_effectView - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * squishedEffectView;              //@synthesize squishedEffectView=_squishedEffectView - In the implementation block
@property (nonatomic,readonly) UIView * viewForLayout; 
@property (assign,nonatomic) CGRect frame; 
@property (assign,nonatomic) double spacing;                                       //@synthesize spacing=_spacing - In the implementation block
@property (assign,nonatomic) CGSize size;                                          //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) BOOL centerAligned;                                   //@synthesize centerAligned=_centerAligned - In the implementation block
-(double)spacing;
-(void)setSpacing:(double)arg1 ;
-(UIVisualEffectView *)effectView;
-(CGSize)size;
-(void)setSquishedView:(UIImageView *)arg1 ;
-(CGRect)frame;
-(void)setSize:(CGSize)arg1 ;
-(void)setView:(UIImageView *)arg1 ;
-(void)setSquishedEffectView:(UIVisualEffectView *)arg1 ;
-(UIVisualEffectView *)squishedEffectView;
-(UIImageView *)view;
-(void)setFrame:(CGRect)arg1 ;
-(UIView *)viewForLayout;
-(void)setEffectView:(UIVisualEffectView *)arg1 ;
-(UIImageView *)squishedView;
-(void)setCenterAligned:(BOOL)arg1 ;
-(BOOL)centerAligned;
@end

