/*
* Generated on Thursday, January 14, 2021 at 2:26:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setTintColor:(UIColor *)arg1 ;
-(void)updateContents;
-(void)setContents:(id)arg1 ;
-(UIColor *)tintColor;
-(id)originalContents;
-(void)setOriginalContents:(id)arg1 ;
@end

