/*
* Generated on Thursday, January 14, 2021 at 2:20:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class UIResponder;

@interface UIKBTextEditingTraits : NSObject {

	BOOL _canToggleBoldface;
	BOOL _canToggleItalics;
	BOOL _canToggleUnderline;
	BOOL _supportStyling;
	BOOL _canCut;
	BOOL _canCopy;
	BOOL _canPaste;
	BOOL _canMoveCursorLeft;
	BOOL _canMoveCursorRight;
	BOOL _isBold;
	BOOL _isItalicized;
	BOOL _isUnderlined;
	UIResponder* _firstResponder;
	UIResponder* _actionResponder;

}

@property (nonatomic,readonly) BOOL isBold;                                       //@synthesize isBold=_isBold - In the implementation block
@property (nonatomic,readonly) BOOL isItalicized;                                 //@synthesize isItalicized=_isItalicized - In the implementation block
@property (nonatomic,readonly) BOOL isUnderlined;                                 //@synthesize isUnderlined=_isUnderlined - In the implementation block
@property (nonatomic,readonly) BOOL canToggleBoldface;                            //@synthesize canToggleBoldface=_canToggleBoldface - In the implementation block
@property (nonatomic,readonly) BOOL canToggleItalics;                             //@synthesize canToggleItalics=_canToggleItalics - In the implementation block
@property (nonatomic,readonly) BOOL canToggleUnderline;                           //@synthesize canToggleUnderline=_canToggleUnderline - In the implementation block
@property (nonatomic,readonly) BOOL supportStyling;                               //@synthesize supportStyling=_supportStyling - In the implementation block
@property (assign,nonatomic) BOOL canCut;                                         //@synthesize canCut=_canCut - In the implementation block
@property (nonatomic,readonly) BOOL canCopy;                                      //@synthesize canCopy=_canCopy - In the implementation block
@property (nonatomic,readonly) BOOL canPaste;                                     //@synthesize canPaste=_canPaste - In the implementation block
@property (nonatomic,readonly) BOOL canMoveCursorLeft;                            //@synthesize canMoveCursorLeft=_canMoveCursorLeft - In the implementation block
@property (nonatomic,readonly) BOOL canMoveCursorRight;                           //@synthesize canMoveCursorRight=_canMoveCursorRight - In the implementation block
@property (nonatomic,__weak,readonly) UIResponder * firstResponder;               //@synthesize firstResponder=_firstResponder - In the implementation block
@property (nonatomic,__weak,readonly) UIResponder * actionResponder;              //@synthesize actionResponder=_actionResponder - In the implementation block
+(id)traitsWithResponder:(id)arg1 keyMaskFlags:(unsigned long long)arg2 ;
+(id)traitsForEditingInteractionWithFirstResponder:(id)arg1 actionResponder:(id)arg2 keyMaskFlags:(unsigned long long)arg3 ;
-(BOOL)isBold;
-(BOOL)canMoveCursorLeft;
-(BOOL)isUnderlined;
-(BOOL)canPaste;
-(BOOL)supportStyling;
-(BOOL)canToggleItalics;
-(void)setCanCut:(BOOL)arg1 ;
-(UIResponder *)actionResponder;
-(id)initWithResponder:(id)arg1 actionResponder:(id)arg2 keyMaskFlags:(unsigned long long)arg3 sender:(id)arg4 ;
-(BOOL)canToggleBoldface;
-(BOOL)canToggleUnderline;
-(UIResponder *)firstResponder;
-(BOOL)canCopy;
-(BOOL)canCut;
-(BOOL)isItalicized;
-(BOOL)canMoveCursorRight;
@end

