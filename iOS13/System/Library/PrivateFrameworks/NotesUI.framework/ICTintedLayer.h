/*
* Generated on Monday, March 1, 2021 at 2:34:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
*/

#import <QuartzCore/CALayer.h>

@class UIColor;

@interface ICTintedLayer : CALayer {

	UIColor* _tintColor;
	id _originalContents;

}

@property (nonatomic,retain) id originalContents;              //@synthesize originalContents=_originalContents - In the implementation block
@property (nonatomic,retain) UIColor * tintColor;              //@synthesize tintColor=_tintColor - In the implementation block
-(void)setContents:(id)arg1 ;
-(UIColor *)tintColor;
-(void)setTintColor:(UIColor *)arg1 ;
-(void)updateContents;
-(id)originalContents;
-(void)setOriginalContents:(id)arg1 ;
@end

