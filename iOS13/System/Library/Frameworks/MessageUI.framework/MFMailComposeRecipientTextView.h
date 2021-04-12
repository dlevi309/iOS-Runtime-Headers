/*
* Generated on Monday, March 1, 2021 at 2:32:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
*/

#import <MessageUI/MessageUI-Structs.h>
#import <ContactsAutocompleteUI/CNComposeRecipientTextView.h>
#import <libobjc.A.dylib/_UICursorInteractionDelegate.h>

@class MFComposeDisplayMetrics, NSString;

@interface MFMailComposeRecipientTextView : CNComposeRecipientTextView <_UICursorInteractionDelegate> {

	MFComposeDisplayMetrics* _displayMetrics;

}

@property (nonatomic,retain) MFComposeDisplayMetrics * displayMetrics;                                //@synthesize displayMetrics=_displayMetrics - In the implementation block
@property (assign,nonatomic,__weak) id<MFMailComposeRecipientTextViewDelegate> delegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)nextResponder;
-(void)layoutMarginsDidChange;
-(id)cursorInteraction:(id)arg1 regionForLocation:(CGPoint)arg2 defaultRegion:(id)arg3 ;
-(id)cursorInteraction:(id)arg1 styleForRegion:(id)arg2 modifiers:(long long)arg3 ;
-(void)_textInputDidChange:(id)arg1 ;
-(MFComposeDisplayMetrics *)displayMetrics;
-(void)_displayMetricsDidChange;
-(void)setDisplayMetrics:(MFComposeDisplayMetrics *)arg1 ;
-(CGRect)cursorRectForLineContainingGlyphIndex:(unsigned long long)arg1 ;
-(double)beamHeight;
@end

