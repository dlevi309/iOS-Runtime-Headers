/*
* Generated on Monday, March 1, 2021 at 2:32:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/

#import <AvatarUI/AvatarUI-Structs.h>
#import <libobjc.A.dylib/AVTViewCarouselLayout.h>

@protocol AVTViewCarouselLayout <NSObject,AVTAdaptativeLayout>
@required
-(CGSize*)avatarViewSizeForAvailableContentSize:(CGSize)arg1;

@end


@class NSString;

@interface AVTViewCarouselLayout : NSObject <AVTViewCarouselLayout> {

	BOOL _fillContainer;
	CGSize _avtViewAspectRatio;

}

@property (nonatomic,readonly) CGSize avtViewAspectRatio;              //@synthesize avtViewAspectRatio=_avtViewAspectRatio - In the implementation block
@property (assign,nonatomic) BOOL fillContainer;                       //@synthesize fillContainer=_fillContainer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CGSize)fullSizeForBounds:(CGSize)arg1 ;
+(CGSize)severalItemsSizeForBounds:(CGSize)arg1 aspectRatio:(CGSize)arg2 ;
+(id)adaptativeLayoutWithAVTViewAspectRatio:(CGSize)arg1 ;
-(CGSize)avatarViewSizeForAvailableContentSize:(CGSize)arg1 ;
-(id)initWithAVTViewAspectRatio:(CGSize)arg1 ;
-(BOOL)fillContainer;
-(CGSize)avtViewAspectRatio;
-(CGSize)contentViewSizeForSize:(CGSize)arg1 ;
-(void)setFillContainer:(BOOL)arg1 ;
@end

