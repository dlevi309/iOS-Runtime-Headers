/*
* Generated on Thursday, January 14, 2021 at 2:24:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RemindersUICore.framework/RemindersUICore
*/

#import <Foundation/NSUndoManager.h>

@class NSString;

@interface TTRUndoManager : NSUndoManager {

	BOOL _disableRemoveAllActions;
	NSString* _pendingActionName;
	NSString* _debugIdentifier;

}

@property (nonatomic,copy) NSString * debugIdentifier;                             //@synthesize debugIdentifier=_debugIdentifier - In the implementation block
@property (nonatomic,retain) NSString * pendingActionName;                         //@synthesize pendingActionName=_pendingActionName - In the implementation block
@property (assign,nonatomic) BOOL disableRemoveAllActions;                         //@synthesize disableRemoveAllActions=_disableRemoveAllActions - In the implementation block
@property (nonatomic,readonly) NSString * debug_undoStackDescription; 
@property (nonatomic,readonly) NSString * debug_redoStackDescription; 
+(void)withActionName:(id)arg1 undoManager:(id)arg2 block:(/*^block*/id)arg3 ;
-(NSString *)debugIdentifier;
-(id)description;
-(void)registerUndoWithTarget:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)setDebugIdentifier:(NSString *)arg1 ;
-(void)registerUndoWithTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3 ;
-(void)removeAllActions;
-(void)setPendingActionName:(NSString *)arg1 ;
-(void)_consumePendingActionName;
-(BOOL)disableRemoveAllActions;
-(NSString *)pendingActionName;
-(void)_registerLogUserAction:(id)arg1 ;
-(id)initWithDebugIdentifier:(id)arg1 ;
-(NSString *)debug_undoStackDescription;
-(NSString *)debug_redoStackDescription;
-(void)setDisableRemoveAllActions:(BOOL)arg1 ;
@end

