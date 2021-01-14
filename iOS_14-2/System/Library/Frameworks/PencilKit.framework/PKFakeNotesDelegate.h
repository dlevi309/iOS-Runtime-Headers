/*
* Generated on Thursday, January 14, 2021 at 2:24:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <PencilKit/PencilKit-Structs.h>
#import <libobjc.A.dylib/PKScribbleInteractionDelegate.h>

@class UITextView, NSString;

@interface PKFakeNotesDelegate : NSObject <PKScribbleInteractionDelegate> {

	UITextView* _textView;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithTextView:(id)arg1 ;
-(BOOL)_scribbleInteraction:(id)arg1 shouldBeginAtLocation:(CGPoint)arg2 ;
-(void)_scribbleInteraction:(id)arg1 willBeginWritingInElement:(id)arg2 ;
@end

