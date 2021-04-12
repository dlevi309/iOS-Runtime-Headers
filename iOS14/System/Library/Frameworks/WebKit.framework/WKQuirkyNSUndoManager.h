/*
* Generated on Thursday, January 14, 2021 at 2:21:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/

#import <Foundation/NSUndoManager.h>

@class WKContentView;

@interface WKQuirkyNSUndoManager : NSUndoManager {

	WKContentView* _contentView;

}

@property (__weak,readonly) WKContentView * contentView;              //@synthesize contentView=_contentView - In the implementation block
-(void)redo;
-(void)undo;
-(BOOL)canRedo;
-(BOOL)canUndo;
-(id)initWithContentView:(id)arg1 ;
-(WKContentView *)contentView;
@end

