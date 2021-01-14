/*
* Generated on Thursday, January 14, 2021 at 2:20:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIImageView.h>

@class UIView, UIImageView;

@interface _UIBarBackgroundImageView : UIImageView {

	UIView* _topStripView;
	UIImageView* _customImageContainer;
	BOOL _translucent;

}

@property (assign,getter=isTranslucent,nonatomic) BOOL translucent;              //@synthesize translucent=_translucent - In the implementation block
-(id)topStripView;
-(void)setTranslucent:(BOOL)arg1 ;
-(void)setImage:(id)arg1 ;
-(BOOL)isTranslucent;
-(void)updateTopStripViewCreateIfNecessary;
-(id)image;
-(void)removeTopStripView;
@end

