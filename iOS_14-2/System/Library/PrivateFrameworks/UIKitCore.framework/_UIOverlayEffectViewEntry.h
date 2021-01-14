/*
* Generated on Thursday, January 14, 2021 at 2:20:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UIVisualEffectViewEntry.h>

@class NSString, UIColor, UIImage;

@interface _UIOverlayEffectViewEntry : _UIVisualEffectViewEntry {

	NSString* _filterType;
	UIColor* _color;
	UIImage* _image;
	double _alpha;

}

@property (nonatomic,copy) NSString * filterType;              //@synthesize filterType=_filterType - In the implementation block
@property (nonatomic,copy) UIColor * color;                    //@synthesize color=_color - In the implementation block
@property (nonatomic,retain) UIImage * image;                  //@synthesize image=_image - In the implementation block
@property (assign,nonatomic) double alpha;                     //@synthesize alpha=_alpha - In the implementation block
+(id)newEntryWithFilterType:(id)arg1 image:(id)arg2 alpha:(double)arg3 ;
+(id)newEntryWithFilterType:(id)arg1 color:(id)arg2 alpha:(double)arg3 ;
-(BOOL)canTransitionToEffect:(id)arg1 ;
-(NSString *)filterType;
-(void)setFilterType:(NSString *)arg1 ;
-(void)setImage:(UIImage *)arg1 ;
-(double)alpha;
-(UIColor *)color;
-(void)addEffectToView:(id)arg1 ;
-(UIImage *)image;
-(void)removeEffectFromView:(id)arg1 ;
-(id)description;
-(void)setColor:(UIColor *)arg1 ;
-(void)applyIdentityEffectToView:(id)arg1 ;
-(void)applyRequestedEffectToView:(id)arg1 ;
-(void)setAlpha:(double)arg1 ;
@end

