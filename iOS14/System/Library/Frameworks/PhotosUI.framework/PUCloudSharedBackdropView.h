/*
* Generated on Thursday, January 14, 2021 at 2:22:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView;

@interface PUCloudSharedBackdropView : UIView {

	UIView* _backdropView;
	BOOL _isMask;
	BOOL _hasRoundedCorners;

}

@property (assign,nonatomic) BOOL hasRoundedCorners;              //@synthesize hasRoundedCorners=_hasRoundedCorners - In the implementation block
-(BOOL)hasRoundedCorners;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)init;
-(void)layoutSubviews;
-(id)initWithFrame:(CGRect)arg1 asMask:(BOOL)arg2 ;
-(void)setHasRoundedCorners:(BOOL)arg1 ;
@end

