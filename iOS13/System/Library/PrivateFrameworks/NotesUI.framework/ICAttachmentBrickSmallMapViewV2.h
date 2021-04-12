/*
* Generated on Monday, March 1, 2021 at 2:34:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
*/

#import <NotesUI/NotesUI-Structs.h>
#import <NotesUI/ICAttachmentBrickImageViewV2.h>

@class CALayer;

@interface ICAttachmentBrickSmallMapViewV2 : ICAttachmentBrickImageViewV2 {

	CALayer* _borderLayer;
	CALayer* _effectsLayer;

}

@property (nonatomic,retain) CALayer * borderLayer;               //@synthesize borderLayer=_borderLayer - In the implementation block
@property (nonatomic,retain) CALayer * effectsLayer;              //@synthesize effectsLayer=_effectsLayer - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setCornerRadius:(double)arg1 ;
-(void)setContentsScale:(double)arg1 ;
-(CALayer *)effectsLayer;
-(CALayer *)borderLayer;
-(void)setBorderLayer:(CALayer *)arg1 ;
-(void)updateSublayersBounds:(CGRect)arg1 ;
-(void)setEffectsLayer:(CALayer *)arg1 ;
@end

