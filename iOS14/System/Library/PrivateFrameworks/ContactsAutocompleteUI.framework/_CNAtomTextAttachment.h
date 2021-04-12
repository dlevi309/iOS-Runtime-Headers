/*
* Generated on Thursday, January 14, 2021 at 2:23:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocompleteUI.framework/ContactsAutocompleteUI
*/

#import <ContactsAutocompleteUI/ContactsAutocompleteUI-Structs.h>
#import <UIFoundation/NSTextAttachment.h>

@class CNComposeRecipientAtom, CNComposeRecipient;

@interface _CNAtomTextAttachment : NSTextAttachment {

	BOOL _isPlaceholder;
	CNComposeRecipientAtom* _atomView;

}

@property (assign,nonatomic) BOOL isPlaceholder;                             //@synthesize isPlaceholder=_isPlaceholder - In the implementation block
@property (nonatomic,retain) CNComposeRecipientAtom * atomView;              //@synthesize atomView=_atomView - In the implementation block
@property (nonatomic,readonly) CNComposeRecipient * recipient; 
-(CGRect)attachmentBoundsForTextContainer:(id)arg1 proposedLineFragment:(CGRect)arg2 glyphPosition:(CGPoint)arg3 characterIndex:(unsigned long long)arg4 ;
-(BOOL)isPlaceholder;
-(id)imageForBounds:(CGRect)arg1 textContainer:(id)arg2 characterIndex:(unsigned long long)arg3 ;
-(id)initWithAtomView:(id)arg1 ;
-(id)attributedStringWithBaseAttributes:(id)arg1 ;
-(CNComposeRecipientAtom *)atomView;
-(void)setIsPlaceholder:(BOOL)arg1 ;
-(void)setAtomView:(CNComposeRecipientAtom *)arg1 ;
-(CNComposeRecipient *)recipient;
@end

