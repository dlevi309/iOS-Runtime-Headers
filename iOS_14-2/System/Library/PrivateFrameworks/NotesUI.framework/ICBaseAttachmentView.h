/*
* Generated on Thursday, January 14, 2021 at 2:26:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
*/

#import <NotesUI/NotesUI-Structs.h>
#import <UIKitCore/UIView.h>

@class ICAttachment, ICTextAttachment, NSRegularExpression;

@interface ICBaseAttachmentView : UIView {

	BOOL _selected;
	ICAttachment* _attachment;
	ICTextAttachment* _textAttachment;
	NSRegularExpression* _highlightPatternRegex;
	CGSize _attachmentContentSize;

}

@property (assign,nonatomic,__weak) ICAttachment * attachment;                         //@synthesize attachment=_attachment - In the implementation block
@property (assign,nonatomic,__weak) ICTextAttachment * textAttachment;                 //@synthesize textAttachment=_textAttachment - In the implementation block
@property (assign,nonatomic) BOOL selected;                                            //@synthesize selected=_selected - In the implementation block
@property (assign,nonatomic) CGSize attachmentContentSize;                             //@synthesize attachmentContentSize=_attachmentContentSize - In the implementation block
@property (nonatomic,retain) NSRegularExpression * highlightPatternRegex;              //@synthesize highlightPatternRegex=_highlightPatternRegex - In the implementation block
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setTextAttachment:(ICTextAttachment *)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(BOOL)selected;
-(ICAttachment *)attachment;
-(ICTextAttachment *)textAttachment;
-(void)setAttachment:(ICAttachment *)arg1 ;
-(void)contentSizeCategoryDidChange;
-(void)attachmentPreviewImagesDidUpdate:(id)arg1 ;
-(void)dealloc;
-(NSRegularExpression *)highlightPatternRegex;
-(void)setHighlightPatternRegex:(NSRegularExpression *)arg1 ;
-(id)quickLookTransitionView;
-(void)attachmentDidLoad:(id)arg1 ;
-(void)attachmentWillBeDeleted:(id)arg1 ;
-(void)mediaDidLoad:(id)arg1 ;
-(void)removeKVOObserversForAttachment:(id)arg1 ;
-(void)addKVObserversForAttachment:(id)arg1 ;
-(void)willChangeAttachment;
-(void)didChangeAttachment;
-(void)didChangeMedia;
-(void)didChangeMergeableData;
-(void)didChangeAttachmentTitle;
-(void)didSetSelected:(BOOL)arg1 ;
-(void)didUpdatePreviewImages;
-(void)willDeleteAttachment;
-(void)didChangeSize;
-(void)didScrollOutOfVisibleRange;
-(void)didScrollIntoVisibleRange;
-(BOOL)cancelDidScrollIntoVisibleRange;
-(CGSize)attachmentContentSize;
-(void)setAttachmentContentSize:(CGSize)arg1 ;
@end

