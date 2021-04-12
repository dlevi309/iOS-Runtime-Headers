/*
* Generated on Monday, March 1, 2021 at 2:30:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/

#import <Foundation/NSUndoManager.h>

@class WKContentView;

@interface WKQuirkyNSUndoManager : NSUndoManager {

	WKContentView* _contentView;

}

@property (__weak,readonly) WKContentView * contentView;              //@synthesize contentView=_contentView - In the implementation block
-(BOOL)canRedo;
-(BOOL)canUndo;
-(void)undo;
-(void)redo;
-(WKContentView *)contentView;
-(id)initWithContentView:(id)arg1 ;
@end

