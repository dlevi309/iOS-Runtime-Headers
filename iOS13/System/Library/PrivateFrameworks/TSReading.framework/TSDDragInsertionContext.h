/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSDInsertionContext.h>

@interface TSDDragInsertionContext : TSDInsertionContext {

	CGPoint mPreferredCenter;
	BOOL mPreferredCenterRequired;
	BOOL mShouldEndEditing;
	BOOL mFromDragToInsertController;
	BOOL mInsertWillBeDiscarded;

}
-(id)init;
-(BOOL)isInteractive;
-(id)initWithPreferredCenter:(CGPoint)arg1 required:(BOOL)arg2 shouldEndEditing:(BOOL)arg3 fromDragToInsertController:(BOOL)arg4 insertWillBeDiscarded:(BOOL)arg5 ;
-(BOOL)hasPreferredCenter;
-(BOOL)isPreferredCenterRequired;
-(CGPoint)preferredCenter;
-(BOOL)shouldEndEditing;
-(BOOL)insertFloating;
-(BOOL)insertFromDrag;
-(BOOL)fromDragToInsertController;
-(BOOL)insertWillBeDiscarded;
@end

