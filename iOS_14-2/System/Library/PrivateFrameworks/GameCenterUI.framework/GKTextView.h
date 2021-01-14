/*
* Generated on Thursday, January 14, 2021 at 2:23:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <UIKitCore/UITextView.h>

@class GKTextStyle, GKLabel, NSString, NSAttributedString;

@interface GKTextView : UITextView {

	GKTextStyle* __baseStyle;
	GKTextStyle* _appliedStyle;
	GKLabel* _placeholderLabel;

}

@property (nonatomic,retain) GKTextStyle * appliedStyle;                                  //@synthesize appliedStyle=_appliedStyle - In the implementation block
@property (assign,nonatomic) GKLabel * placeholderLabel;                                  //@synthesize placeholderLabel=_placeholderLabel - In the implementation block
@property (nonatomic,retain) NSString * placeholderText; 
@property (nonatomic,retain) NSAttributedString * attributedPlaceholderText; 
@property (nonatomic,retain) GKTextStyle * _baseStyle;                                    //@synthesize _baseStyle=__baseStyle - In the implementation block
+(void)initialize;
-(void)_UIAppearance_set_baseStyle:(id)arg1 ;
-(void)setAttributedText:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(NSString *)placeholderText;
-(void)setText:(id)arg1 ;
-(GKTextStyle *)_baseStyle;
-(void)set_baseStyle:(GKTextStyle *)arg1 ;
-(void)replayAndApplyStyle;
-(void)updatePlaceholderVisibility;
-(void)setAttributedPlaceholderText:(NSAttributedString *)arg1 ;
-(void)textStorageDidChangeNotification:(id)arg1 ;
-(NSAttributedString *)attributedPlaceholderText;
-(GKTextStyle *)appliedStyle;
-(void)setAppliedStyle:(GKTextStyle *)arg1 ;
-(void)layoutSubviews;
-(void)applyTextStyle:(id)arg1 ;
-(id)insertDictationResultPlaceholder;
-(void)setPlaceholderLabel:(GKLabel *)arg1 ;
-(void)setPlaceholderText:(NSString *)arg1 ;
-(GKLabel *)placeholderLabel;
-(void)removeDictationResultPlaceholder:(id)arg1 willInsertResult:(BOOL)arg2 ;
-(void)dealloc;
@end

