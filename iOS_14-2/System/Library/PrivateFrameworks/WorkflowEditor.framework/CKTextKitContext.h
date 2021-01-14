/*
* Generated on Thursday, January 14, 2021 at 2:28:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/


#import <WorkflowEditor/WorkflowEditor-Structs.h>
@class NSLayoutManager, NSTextStorage, NSTextContainer;

@interface CKTextKitContext : NSObject {

	mutex _textKitMutex;
	NSLayoutManager* _layoutManager;
	NSTextStorage* _textStorage;
	NSTextContainer* _textContainer;

}
-(id)initWithAttributedString:(id)arg1 lineBreakMode:(long long)arg2 maximumNumberOfLines:(unsigned long long)arg3 constrainedSize:(CGSize)arg4 layoutManagerFactory:(/*function pointer*/void*)arg5 ;
-(void)performBlockWithLockedTextKitComponents:(/*^block*/id)arg1 ;
@end

