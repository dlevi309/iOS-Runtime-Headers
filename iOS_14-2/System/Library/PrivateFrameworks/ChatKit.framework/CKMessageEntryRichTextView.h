/*
* Generated on Thursday, January 14, 2021 at 2:21:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKMessageEntryTextView.h>
#import <libobjc.A.dylib/NSTextStorageDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class NSMutableDictionary, UITapGestureRecognizer, UILongPressGestureRecognizer, NSString;

@interface CKMessageEntryRichTextView : CKMessageEntryTextView <NSTextStorageDelegate, UIGestureRecognizerDelegate> {

	char _balloonColor;
	BOOL _allowCalloutActions;
	NSMutableDictionary* _mediaObjects;
	NSMutableDictionary* _pluginDisplayContainers;
	NSMutableDictionary* _composeImages;
	UITapGestureRecognizer* _tapGestureRecognizer;
	UILongPressGestureRecognizer* _longPressGestureRecognizer;

}

@property (nonatomic,retain) NSMutableDictionary * mediaObjects;                                     //@synthesize mediaObjects=_mediaObjects - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * pluginDisplayContainers;                          //@synthesize pluginDisplayContainers=_pluginDisplayContainers - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * composeImages;                                    //@synthesize composeImages=_composeImages - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * tapGestureRecognizer;                          //@synthesize tapGestureRecognizer=_tapGestureRecognizer - In the implementation block
@property (nonatomic,retain) UILongPressGestureRecognizer * longPressGestureRecognizer;              //@synthesize longPressGestureRecognizer=_longPressGestureRecognizer - In the implementation block
@property (assign,nonatomic) BOOL allowCalloutActions;                                               //@synthesize allowCalloutActions=_allowCalloutActions - In the implementation block
@property (assign,nonatomic,__weak) id<CKMessageEntryRichTextViewDelegate> delegate; 
@property (assign,nonatomic) char balloonColor;                                                      //@synthesize balloonColor=_balloonColor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)copy:(id)arg1 ;
-(void)cut:(id)arg1 ;
-(void)paste:(id)arg1 ;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(id)pasteboard;
-(void)textStorage:(id)arg1 willProcessEditing:(unsigned long long)arg2 range:(NSRange)arg3 changeInLength:(long long)arg4 ;
-(char)balloonColor;
-(BOOL)allowCalloutActions;
-(NSMutableDictionary *)composeImages;
-(NSMutableDictionary *)pluginDisplayContainers;
-(id)_compositionFromSelection;
-(void)setPluginDisplayContainers:(NSMutableDictionary *)arg1 ;
-(void)setComposeImages:(NSMutableDictionary *)arg1 ;
-(void)handleTapOrLongPress:(id)arg1 ;
-(void)setAllowCalloutActions:(BOOL)arg1 ;
-(void)updateComposeImages;
-(id)composeImageForTransferGUID:(id)arg1 ;
-(id)cachedPluginDisplayContainerForGUID:(id)arg1 ;
-(id)cachedMediaObjectForTransferGUID:(id)arg1 ;
-(void)setCompositionText:(id)arg1 ;
-(void)setTapGestureRecognizer:(UITapGestureRecognizer *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 textContainer:(id)arg2 ;
-(id)pasteConfiguration;
-(BOOL)isSingleLineDocument;
-(NSMutableDictionary *)mediaObjects;
-(void)handlePastedString:(id)arg1 toRange:(id)arg2 ;
-(UILongPressGestureRecognizer *)longPressGestureRecognizer;
-(void)setLongPressGestureRecognizer:(UILongPressGestureRecognizer *)arg1 ;
-(void)setMediaObjects:(NSMutableDictionary *)arg1 ;
-(void)previewDidChange:(id)arg1 ;
-(UITapGestureRecognizer *)tapGestureRecognizer;
-(void)_showCustomInputView;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(id)attributedTextForCompositionText:(id)arg1 ;
-(void)setBalloonColor:(char)arg1 ;
-(id)compositionText;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(id)targetForAction:(SEL)arg1 withSender:(id)arg2 ;
-(void)dealloc;
@end

