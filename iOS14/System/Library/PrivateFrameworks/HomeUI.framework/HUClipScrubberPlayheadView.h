/*
* Generated on Thursday, January 14, 2021 at 2:24:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UIView.h>

@interface HUClipScrubberPlayheadView : UIView {

	BOOL _drawsUpperContent;
	BOOL _editing;

}

@property (assign,nonatomic) BOOL drawsUpperContent;              //@synthesize drawsUpperContent=_drawsUpperContent - In the implementation block
@property (assign,nonatomic) BOOL editing;                        //@synthesize editing=_editing - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)setEditing:(BOOL)arg1 ;
-(BOOL)editing;
-(void)setDrawsUpperContent:(BOOL)arg1 ;
-(BOOL)drawsUpperContent;
@end

