/*
* Generated on Thursday, January 14, 2021 at 2:27:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
*/

#import <MediaControls/MediaControls-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/MTVisualStylingProviding.h>

@class UIView, NSString;

@interface MediaControlsMaterialView : UIView <MTVisualStylingProviding> {

	UIView* _backgroundView;
	UIView* _highlightView;
	BOOL _highlighted;

}

@property (assign,getter=isHighlighted,nonatomic) BOOL highlighted;              //@synthesize highlighted=_highlighted - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)visualStylingProviderForCategory:(long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_setContinuousCornerRadius:(double)arg1 ;
-(void)layoutSubviews;
-(BOOL)isHighlighted;
-(void)setHighlighted:(BOOL)arg1 ;
@end

