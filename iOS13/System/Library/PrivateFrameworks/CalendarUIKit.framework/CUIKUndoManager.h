/*
* Generated on Monday, March 1, 2021 at 2:32:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CalendarUIKit.framework/CalendarUIKit
*/

#import <Foundation/NSUndoManager.h>

@protocol CUIKCommitDelegate, CUIKDecisionDelegate;
@class NSError;

@interface CUIKUndoManager : NSUndoManager {

	id<CUIKCommitDelegate> _commitDelegate;
	id<CUIKDecisionDelegate> _decisionDelegate;
	/*^block*/id _editingManagerProvider;
	NSError* _lastError;

}

@property (retain) id<CUIKCommitDelegate> commitDelegate;                  //@synthesize commitDelegate=_commitDelegate - In the implementation block
@property (retain) id<CUIKDecisionDelegate> decisionDelegate;              //@synthesize decisionDelegate=_decisionDelegate - In the implementation block
@property (nonatomic,copy) id editingManagerProvider;                      //@synthesize editingManagerProvider=_editingManagerProvider - In the implementation block
@property (retain) NSError * lastError;                                    //@synthesize lastError=_lastError - In the implementation block
-(void)setLastError:(NSError *)arg1 ;
-(NSError *)lastError;
-(id<CUIKDecisionDelegate>)decisionDelegate;
-(void)setDecisionDelegate:(id<CUIKDecisionDelegate>)arg1 ;
-(id<CUIKCommitDelegate>)commitDelegate;
-(void)setCommitDelegate:(id<CUIKCommitDelegate>)arg1 ;
-(id)editingManagerProvider;
-(void)setEditingManagerProvider:(id)arg1 ;
@end

