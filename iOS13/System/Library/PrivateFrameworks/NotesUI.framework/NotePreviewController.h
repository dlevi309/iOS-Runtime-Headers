/*
* Generated on Monday, March 1, 2021 at 2:34:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
*/

#import <NotesUI/NotesUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UITextViewDelegate.h>
#import <NotesUI/NoteContentLayerAttachmentPresentationDelegate.h>
#import <libobjc.A.dylib/ICNotePreviewing.h>

@class ICSearchResult, NoteContentLayer, NoteObject, NSArray, NotesBackgroundView, NSString;

@interface NotePreviewController : UIViewController <UITextViewDelegate, NoteContentLayerAttachmentPresentationDelegate, ICNotePreviewing> {

	NoteContentLayer* _contentLayer;
	NoteObject* _note;
	ICSearchResult* _searchResult;
	NSArray* _attachmentPresentations;

}

@property (nonatomic,readonly) NotesBackgroundView * backgroundView; 
@property (nonatomic,retain) NoteContentLayer * contentLayer;                     //@synthesize contentLayer=_contentLayer - In the implementation block
@property (nonatomic,retain) NoteObject * note;                                   //@synthesize note=_note - In the implementation block
@property (nonatomic,retain) ICSearchResult * searchResult;                       //@synthesize searchResult=_searchResult - In the implementation block
@property (nonatomic,retain) NSArray * attachmentPresentations;                   //@synthesize attachmentPresentations=_attachmentPresentations - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)traitCollectionDidChange:(id)arg1 ;
-(NotesBackgroundView *)backgroundView;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(NoteContentLayer *)contentLayer;
-(ICSearchResult *)searchResult;
-(void)setSearchResult:(ICSearchResult *)arg1 ;
-(NoteObject *)note;
-(void)setNote:(NoteObject *)arg1 ;
-(void)setupPreview;
-(void)setContentLayer:(NoteContentLayer *)arg1 ;
-(id)initWithNote:(id)arg1 ;
-(id)noteContentLayer:(id)arg1 fileURLForAttachmentWithContentID:(id)arg2 ;
-(id)noteContentLayer:(id)arg1 attachmentPresentationForContentID:(id)arg2 ;
-(id)attachmentContentIDs;
-(id)initWithNote:(id)arg1 searchResult:(id)arg2 ;
-(void)setupPreviewWithInitialFrame:(CGRect)arg1 ;
-(void)setAttachmentPresentations:(NSArray *)arg1 ;
-(NSArray *)attachmentPresentations;
-(void)updateForceLightContentIfNecessary;
-(id)attachmentPresentationForContentID:(id)arg1 ;
@end

