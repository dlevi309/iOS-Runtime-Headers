/*
* Generated on Thursday, January 14, 2021 at 2:23:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
*/

#import <MessageUI/MessageUI-Structs.h>
#import <UIFoundation/NSTextAttachment.h>

@class MFModernComposeRecipientAtom, MFComposeRecipient;

@interface _MFAtomTextAttachment : NSTextAttachment {

	BOOL _isPlaceholder;
	MFModernComposeRecipientAtom* _atomView;

}

@property (assign,nonatomic) BOOL isPlaceholder;                                   //@synthesize isPlaceholder=_isPlaceholder - In the implementation block
@property (nonatomic,retain) MFModernComposeRecipientAtom * atomView;              //@synthesize atomView=_atomView - In the implementation block
@property (nonatomic,readonly) MFComposeRecipient * recipient; 
-(CGRect)attachmentBoundsForTextContainer:(id)arg1 proposedLineFragment:(CGRect)arg2 glyphPosition:(CGPoint)arg3 characterIndex:(unsigned long long)arg4 ;
-(BOOL)isPlaceholder;
-(id)imageForBounds:(CGRect)arg1 textContainer:(id)arg2 characterIndex:(unsigned long long)arg3 ;
-(id)initWithAtomView:(id)arg1 ;
-(id)attributedStringWithBaseAttributes:(id)arg1 ;
-(MFModernComposeRecipientAtom *)atomView;
-(void)setIsPlaceholder:(BOOL)arg1 ;
-(void)setAtomView:(MFModernComposeRecipientAtom *)arg1 ;
-(MFComposeRecipient *)recipient;
@end

