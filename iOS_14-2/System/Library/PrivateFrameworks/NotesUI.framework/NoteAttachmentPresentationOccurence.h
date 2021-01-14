/*
* Generated on Thursday, January 14, 2021 at 2:26:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (nonatomic,readonly) NSURL * previewItemURL; 
@property (nonatomic,readonly) NSString * previewItemTitle; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(DOMHTMLElement *)element;
-(NoteAttachmentPresentation *)presentation;
-(NSURL *)previewItemURL;
-(id)initWithPresentation:(id)arg1 element:(id)arg2 ;
@end

