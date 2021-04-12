/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/


#import <TSReading/TSReading-Structs.h>
@interface TSDInsertionContext : NSObject

@property (nonatomic,readonly) BOOL hasPreferredCenter; 
@property (getter=isPreferredCenterRequired,nonatomic,readonly) BOOL preferredCenterRequired; 
@property (nonatomic,readonly) CGPoint preferredCenter; 
@property (nonatomic,readonly) BOOL shouldEndEditing; 
@property (nonatomic,readonly) BOOL insertFloating; 
@property (nonatomic,readonly) BOOL insertFromDrag; 
@property (nonatomic,readonly) BOOL fromDragToInsertController; 
@property (nonatomic,readonly) BOOL insertWillBeDiscarded; 
@property (getter=isInteractive,nonatomic,readonly) BOOL interactive; 
+(id)dragInsertionContextWithPreferredCenter:(CGPoint)arg1 required:(BOOL)arg2 shouldEndEditing:(BOOL)arg3 fromDragToInsertController:(BOOL)arg4 insertWillBeDiscarded:(BOOL)arg5 ;
+(id)nonInteractiveInsertionContext;
+(id)nonInteractiveFloatingInsertionContext;
+(id)dragInsertionContextWithPreferredCenter:(CGPoint)arg1 required:(BOOL)arg2 fromDragToInsertController:(BOOL)arg3 insertWillBeDiscarded:(BOOL)arg4 ;
-(id)init;
-(BOOL)isInteractive;
-(BOOL)hasPreferredCenter;
-(BOOL)isPreferredCenterRequired;
-(CGPoint)preferredCenter;
-(BOOL)shouldEndEditing;
-(BOOL)insertFloating;
-(BOOL)insertFromDrag;
-(BOOL)fromDragToInsertController;
-(BOOL)insertWillBeDiscarded;
@end

