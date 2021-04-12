/*
* Generated on Thursday, January 14, 2021 at 2:23:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
*/

#import <MessageUI/MessageUI-Structs.h>
#import <ContactsAutocompleteUI/CNComposeRecipientTextView.h>
#import <libobjc.A.dylib/PKScribbleInteractionDelegate.h>
#import <libobjc.A.dylib/PKScribbleInteractionElementSource.h>
#import <libobjc.A.dylib/_UICursorInteractionDelegate.h>

@class MFComposeDisplayMetrics, NSString;

@interface MFMailComposeRecipientTextView : CNComposeRecipientTextView <PKScribbleInteractionDelegate, PKScribbleInteractionElementSource, _UICursorInteractionDelegate> {

	MFComposeDisplayMetrics* _displayMetrics;

}

@property (nonatomic,retain) MFComposeDisplayMetrics * displayMetrics;                                //@synthesize displayMetrics=_displayMetrics - In the implementation block
@property (assign,nonatomic,__weak) id<MFMailComposeRecipientTextViewDelegate> delegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)layoutMarginsDidChange;
-(id)cursorInteraction:(id)arg1 regionForLocation:(CGPoint)arg2 defaultRegion:(id)arg3 ;
-(id)cursorInteraction:(id)arg1 styleForRegion:(id)arg2 modifiers:(long long)arg3 ;
-(id)nextResponder;
-(MFComposeDisplayMetrics *)displayMetrics;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDisplayMetrics:(MFComposeDisplayMetrics *)arg1 ;
-(void)_displayMetricsDidChange;
-(CGRect)cursorRectForLineContainingGlyphIndex:(unsigned long long)arg1 ;
-(void)_textInputDidChange:(id)arg1 ;
-(BOOL)_scribbleInteraction:(id)arg1 shouldBeginAtLocation:(CGPoint)arg2 ;
-(void)_scribbleInteraction:(id)arg1 focusElement:(id)arg2 initialFocusSelectionReferencePoint:(CGPoint)arg3 completion:(/*^block*/id)arg4 ;
-(double)beamHeight;
-(BOOL)_scribbleInteraction:(id)arg1 focusWillTransformElement:(id)arg2 ;
-(void)_scribbleInteraction:(id)arg1 requestElementsInRect:(CGRect)arg2 completion:(/*^block*/id)arg3 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)dealloc;
-(CGRect)_scribbleInteraction:(id)arg1 frameForElement:(id)arg2 ;
@end

