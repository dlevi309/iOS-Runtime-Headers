/*
* Generated on Monday, March 1, 2021 at 2:32:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)setText:(id)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)didMoveToWindow;
-(void)_dynamicUserInterfaceTraitDidChange;
-(unsigned long long)prominence;
-(void)setMultilineText:(TLKMultilineText *)arg1 ;
-(void)setProminence:(unsigned long long)arg1 ;
-(void)tlk_updateForAppearance:(id)arg1 ;
-(TLKMultilineText *)multilineText;
-(void)updateAttributedString;
-(BOOL)automaticUrlification;
-(void)urlify;
-(BOOL)_usesNonVibrantAppearance;
-(void)setAutomaticUrlification:(BOOL)arg1 ;
@end

