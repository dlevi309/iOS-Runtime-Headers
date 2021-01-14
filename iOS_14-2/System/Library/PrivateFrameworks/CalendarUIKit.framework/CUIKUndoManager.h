/*
* Generated on Thursday, January 14, 2021 at 2:25:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSError *)lastError;
-(void)setEditingManagerProvider:(id)arg1 ;
-(id)editingManagerProvider;
-(id<CUIKDecisionDelegate>)decisionDelegate;
-(void)setDecisionDelegate:(id<CUIKDecisionDelegate>)arg1 ;
-(void)setCommitDelegate:(id<CUIKCommitDelegate>)arg1 ;
-(void)setLastError:(NSError *)arg1 ;
-(id<CUIKCommitDelegate>)commitDelegate;
@end

