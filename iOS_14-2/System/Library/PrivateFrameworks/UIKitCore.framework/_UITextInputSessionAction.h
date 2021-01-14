/*
* Generated on Thursday, January 14, 2021 at 2:20:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class _UITextInputSessionBeganAction, _UITextInputSessionInsertionAction, _UITextInputSessionDeletionAction, _UITextInputSessionSelectionAction, _UITextInputSessionUndoAction, _UITextInputSessionRedoAction;

@interface _UITextInputSessionAction : NSObject {

	long long _source;
	NSRange _relativeRangeBefore;

}

@property (assign,nonatomic) long long source;                                                //@synthesize source=_source - In the implementation block
@property (assign,nonatomic) NSRange relativeRangeBefore;                                     //@synthesize relativeRangeBefore=_relativeRangeBefore - In the implementation block
@property (nonatomic,readonly) BOOL changedContent; 
@property (nonatomic,readonly) _UITextInputSessionBeganAction * asBegan; 
@property (nonatomic,readonly) _UITextInputSessionInsertionAction * asInsertion; 
@property (nonatomic,readonly) _UITextInputSessionDeletionAction * asDeletion; 
@property (nonatomic,readonly) _UITextInputSessionSelectionAction * asSelection; 
@property (nonatomic,readonly) _UITextInputSessionUndoAction * asUndo; 
@property (nonatomic,readonly) _UITextInputSessionRedoAction * asRedo; 
-(_UITextInputSessionUndoAction *)asUndo;
-(_UITextInputSessionRedoAction *)asRedo;
-(_UITextInputSessionBeganAction *)asBegan;
-(long long)mergeActionIfPossible:(id)arg1 ;
-(void)setRelativeRangeBefore:(NSRange)arg1 ;
-(void)setSource:(long long)arg1 ;
-(_UITextInputSessionDeletionAction *)asDeletion;
-(_UITextInputSessionInsertionAction *)asInsertion;
-(_UITextInputSessionSelectionAction *)asSelection;
-(BOOL)changedContent;
-(NSRange)relativeRangeBefore;
-(long long)source;
@end

