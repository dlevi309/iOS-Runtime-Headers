/*
* Generated on Monday, March 1, 2021 at 2:34:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
*/

#import <NotesUI/NotesUI-Structs.h>
#import <UIFoundation/NSTextContainer.h>

@interface ICTextContainer : NSTextContainer {

	BOOL _inPreviewMode;

}

@property (assign,nonatomic) BOOL inPreviewMode;              //@synthesize inPreviewMode=_inPreviewMode - In the implementation block
-(BOOL)isSimpleRectangularTextContainer;
-(CGRect)lineFragmentRectForProposedRect:(CGRect)arg1 atIndex:(unsigned long long)arg2 writingDirection:(long long)arg3 remainingRect:(CGRect*)arg4 ;
-(void)setInPreviewMode:(BOOL)arg1 ;
-(BOOL)inPreviewMode;
@end

