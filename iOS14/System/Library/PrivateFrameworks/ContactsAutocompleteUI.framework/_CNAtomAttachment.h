/*
* Generated on Thursday, January 14, 2021 at 2:23:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocompleteUI.framework/ContactsAutocompleteUI
*/

#import <ContactsAutocompleteUI/ContactsAutocompleteUI-Structs.h>
#import <UIFoundation/NSTextAttachment.h>

@class _CNAtomLayoutView;

@interface _CNAtomAttachment : NSTextAttachment {

	_CNAtomLayoutView* _atomView;
	id _representedObject;

}

@property (nonatomic,readonly) _CNAtomLayoutView * atomView;              //@synthesize atomView=_atomView - In the implementation block
@property (nonatomic,readonly) id representedObject;                      //@synthesize representedObject=_representedObject - In the implementation block
+(id)attachmentWithAtomLayoutView:(id)arg1 representedObject:(id)arg2 ;
-(CGRect)attachmentBoundsForTextContainer:(id)arg1 proposedLineFragment:(CGRect)arg2 glyphPosition:(CGPoint)arg3 characterIndex:(unsigned long long)arg4 ;
-(id)imageForBounds:(CGRect)arg1 textContainer:(id)arg2 characterIndex:(unsigned long long)arg3 ;
-(_CNAtomLayoutView *)atomView;
-(id)initWithAtomLayoutView:(id)arg1 representedObject:(id)arg2 ;
-(id)representedObject;
@end

