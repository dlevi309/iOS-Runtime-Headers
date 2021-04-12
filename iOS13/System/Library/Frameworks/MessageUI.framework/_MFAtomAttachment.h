/*
* Generated on Monday, March 1, 2021 at 2:32:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
*/

#import <MessageUI/MessageUI-Structs.h>
#import <UIFoundation/NSTextAttachment.h>

@class _MFAtomLayoutView;

@interface _MFAtomAttachment : NSTextAttachment {

	_MFAtomLayoutView* _atomView;
	id _representedObject;

}

@property (nonatomic,readonly) _MFAtomLayoutView * atomView;              //@synthesize atomView=_atomView - In the implementation block
@property (nonatomic,readonly) id representedObject;                      //@synthesize representedObject=_representedObject - In the implementation block
+(id)attachmentWithAtomLayoutView:(id)arg1 representedObject:(id)arg2 ;
-(id)imageForBounds:(CGRect)arg1 textContainer:(id)arg2 characterIndex:(unsigned long long)arg3 ;
-(CGRect)attachmentBoundsForTextContainer:(id)arg1 proposedLineFragment:(CGRect)arg2 glyphPosition:(CGPoint)arg3 characterIndex:(unsigned long long)arg4 ;
-(id)representedObject;
-(_MFAtomLayoutView *)atomView;
-(id)initWithAtomLayoutView:(id)arg1 representedObject:(id)arg2 ;
@end

