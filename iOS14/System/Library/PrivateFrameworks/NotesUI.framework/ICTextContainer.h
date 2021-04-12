/*
* Generated on Thursday, January 14, 2021 at 2:26:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
*/

#import <NotesUI/NotesUI-Structs.h>
#import <UIFoundation/NSTextContainer.h>

@interface ICTextContainer : NSTextContainer {

	BOOL _inPreviewMode;

}

@property (assign,nonatomic) BOOL inPreviewMode;              //@synthesize inPreviewMode=_inPreviewMode - In the implementation block
-(CGRect)lineFragmentRectForProposedRect:(CGRect)arg1 atIndex:(unsigned long long)arg2 writingDirection:(long long)arg3 remainingRect:(CGRect*)arg4 ;
-(BOOL)isSimpleRectangularTextContainer;
-(void)setInPreviewMode:(BOOL)arg1 ;
-(BOOL)inPreviewMode;
@end

