/*
* Generated on Monday, March 1, 2021 at 2:30:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)image;
-(void)setImage:(id)arg1 ;
-(BOOL)isTranslucent;
-(id)topStripView;
-(void)updateTopStripViewCreateIfNecessary;
-(void)removeTopStripView;
-(void)setTranslucent:(BOOL)arg1 ;
@end

