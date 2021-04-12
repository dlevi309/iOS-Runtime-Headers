/*
* Generated on Monday, March 1, 2021 at 2:34:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
*/

#import <libobjc.A.dylib/QLPreviewItem.h>

@class NSURL, NSString, NoteAttachmentPresentation, DOMHTMLElement;

@interface NoteAttachmentPresentationOccurence : NSObject <QLPreviewItem> {

	NoteAttachmentPresentation* _presentation;
	DOMHTMLElement* _element;

}

@property (nonatomic,readonly) NoteAttachmentPresentation * presentation;              //@synthesize presentation=_presentation - In the implementation block
@property (nonatomic,readonly) DOMHTMLElement * element;                               //@synthesize element=_element - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSURL * previewItemURL; 
@property (nonatomic,readonly) NSString * previewItemTitle; 
-(id)init;
-(DOMHTMLElement *)element;
-(NoteAttachmentPresentation *)presentation;
-(NSURL *)previewItemURL;
-(id)initWithPresentation:(id)arg1 element:(id)arg2 ;
@end

