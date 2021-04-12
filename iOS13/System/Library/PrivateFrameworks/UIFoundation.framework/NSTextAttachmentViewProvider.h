/*
* Generated on Monday, March 1, 2021 at 2:30:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
*/


#import <UIFoundation/UIFoundation-Structs.h>
@class UIView, NSTextAttachment, NSLayoutManager;

@interface NSTextAttachmentViewProvider : NSObject {

	UIView* _view;
	unsigned long long _characterIndex;
	BOOL _tracksTextAttachmentViewBounds;
	NSTextAttachment* _textAttachment;
	NSLayoutManager* _layoutManager;

}

@property (__weak) NSTextAttachment * textAttachment;                //@synthesize textAttachment=_textAttachment - In the implementation block
@property (__weak) NSLayoutManager * layoutManager;                  //@synthesize layoutManager=_layoutManager - In the implementation block
@property (readonly) unsigned long long characterIndex;              //@synthesize characterIndex=_characterIndex - In the implementation block
@property (retain) UIView * view; 
@property (assign) BOOL tracksTextAttachmentViewBounds;              //@synthesize tracksTextAttachmentViewBounds=_tracksTextAttachmentViewBounds - In the implementation block
-(void)dealloc;
-(NSLayoutManager *)layoutManager;
-(void)removeView;
-(UIView *)view;
-(CGRect)attachmentBoundsForTextContainer:(id)arg1 proposedLineFragment:(CGRect)arg2 glyphPosition:(CGPoint)arg3 characterIndex:(unsigned long long)arg4 ;
-(void)setLayoutManager:(NSLayoutManager *)arg1 ;
-(unsigned long long)characterIndex;
-(void)setView:(UIView *)arg1 ;
-(BOOL)tracksTextAttachmentViewBounds;
-(id)initWithTextAttachment:(id)arg1 parentView:(id)arg2 characterIndex:(unsigned long long)arg3 layoutManager:(id)arg4 ;
-(void)setTextAttachment:(NSTextAttachment *)arg1 ;
-(void)setTracksTextAttachmentViewBounds:(BOOL)arg1 ;
-(void)loadView;
-(NSTextAttachment *)textAttachment;
@end

