/*
* Generated on Thursday, January 14, 2021 at 2:22:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKitCore/UIView.h>

@class UIButton, NSString;

@interface MKUGCCallToActionLikeDislikeAccessoryView : UIView {

	UIButton* _dislikeButton;
	UIButton* _likeButton;
	NSString* _likeImageGlyphName;
	NSString* _dislikeImageGlyphName;

}

@property (nonatomic,copy) NSString * likeImageGlyphName;                 //@synthesize likeImageGlyphName=_likeImageGlyphName - In the implementation block
@property (nonatomic,copy) NSString * dislikeImageGlyphName;              //@synthesize dislikeImageGlyphName=_dislikeImageGlyphName - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(NSString *)likeImageGlyphName;
-(void)setTarget:(id)arg1 likeSelector:(SEL)arg2 dislikeSelector:(SEL)arg3 ;
-(void)setLikeImageGlyphName:(NSString *)arg1 ;
-(void)setDislikeImageGlyphName:(NSString *)arg1 ;
-(NSString *)dislikeImageGlyphName;
-(void)_setupButtons;
-(void)_contentSizeChanged;
@end

