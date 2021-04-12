/*
* Generated on Thursday, January 14, 2021 at 2:23:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
*/

#import <TemplateKit/TemplateKit-Structs.h>
#import <UIKitCore/UITextView.h>

@class TLKMultilineText;

@interface TLKTextView : UITextView {

	BOOL _automaticUrlification;
	unsigned long long _prominence;
	TLKMultilineText* _multilineText;

}

@property (assign,nonatomic) unsigned long long prominence;                 //@synthesize prominence=_prominence - In the implementation block
@property (nonatomic,retain) TLKMultilineText * multilineText;              //@synthesize multilineText=_multilineText - In the implementation block
@property (assign,nonatomic) BOOL automaticUrlification;                    //@synthesize automaticUrlification=_automaticUrlification - In the implementation block
-(void)setProminence:(unsigned long long)arg1 ;
-(CGSize)intrinsicContentSize;
-(id)init;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)urlify;
-(void)tlk_updateForAppearance:(id)arg1 ;
-(void)setText:(id)arg1 ;
-(TLKMultilineText *)multilineText;
-(void)updateAttributedString;
-(BOOL)automaticUrlification;
-(BOOL)_usesNonVibrantAppearance;
-(void)setAutomaticUrlification:(BOOL)arg1 ;
-(unsigned long long)prominence;
-(void)didMoveToWindow;
-(double)effectiveBaselineOffsetFromBottom;
-(double)effectiveFirstBaselineOffsetFromTop;
-(void)setMultilineText:(TLKMultilineText *)arg1 ;
@end

