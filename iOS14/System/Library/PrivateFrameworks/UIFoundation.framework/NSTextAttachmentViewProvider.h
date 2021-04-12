/*
* Generated on Thursday, January 14, 2021 at 2:21:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
*/


@protocol NSTextLocation;
#import <UIFoundation/UIFoundation-Structs.h>
@class UIView, NSTextContainer, NSTextAttachment, NSLayoutManager;

@interface NSTextAttachmentViewProvider : NSObject {

	UIView* _view;
	unsigned long long _characterIndex;
	id<NSTextLocation> _location;
	NSTextContainer* _textContainer;
	BOOL _tracksTextAttachmentViewBounds;
	NSTextAttachment* _textAttachment;
	NSLayoutManager* _layoutManager;

}

@property (__weak) NSTextAttachment * textAttachment;                //@synthesize textAttachment=_textAttachment - In the implementation block
@property (__weak) NSLayoutManager * layoutManager;                  //@synthesize layoutManager=_layoutManager - In the implementation block
@property (readonly) unsigned long long characterIndex;              //@synthesize characterIndex=_characterIndex - In the implementation block
@property (readonly) id<NSTextLocation> location;                    //@synthesize location=_location - In the implementation block
@property (retain) UIView * view; 
@property (assign) BOOL tracksTextAttachmentViewBounds;              //@synthesize tracksTextAttachmentViewBounds=_tracksTextAttachmentViewBounds - In the implementation block
-(CGRect)attachmentBoundsForTextContainer:(id)arg1 proposedLineFragment:(CGRect)arg2 glyphPosition:(CGPoint)arg3 characterIndex:(unsigned long long)arg4 ;
-(id)initWithTextAttachment:(id)arg1 parentView:(id)arg2 characterIndex:(unsigned long long)arg3 layoutManager:(id)arg4 ;
-(BOOL)tracksTextAttachmentViewBounds;
-(CGRect)attachmentBoundsForAttributes:(id)arg1 location:(id)arg2 textContainer:(id)arg3 proposedLineFragment:(CGRect)arg4 position:(CGPoint)arg5 ;
-(id)initWithTextAttachment:(id)arg1 parentView:(id)arg2 location:(id)arg3 ;
-(void)setTextAttachment:(NSTextAttachment *)arg1 ;
-(void)setLayoutManager:(NSLayoutManager *)arg1 ;
-(id<NSTextLocation>)location;
-(NSLayoutManager *)layoutManager;
-(void)setView:(UIView *)arg1 ;
-(UIView *)view;
-(void)removeView;
-(NSTextAttachment *)textAttachment;
-(unsigned long long)characterIndex;
-(void)setTracksTextAttachmentViewBounds:(BOOL)arg1 ;
-(void)loadView;
-(void)dealloc;
@end

