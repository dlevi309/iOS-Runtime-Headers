/*
* Generated on Thursday, January 14, 2021 at 2:20:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class NSMutableArray, NSDictionary, UIKBTree, UIKeyboardSliceSet, UIKeyboardTransitionSlice;

@interface UIKBSplitKeyplaneGenerator : NSObject {

	NSMutableArray* _rows;
	NSDictionary* _splitLayoutHints;
	UIKBTree* _sourceKeyboard;
	UIKBTree* _sourceKeyplane;
	CGSize _splitKeySizeFactor;
	CGSize _keyboardSize;
	double _leftSideWidestRow;
	double _rightSideWidestRow;
	long long _keyboardType;
	UIKeyboardSliceSet* _sliceSet;
	UIKeyboardTransitionSlice* _leftSlice;
	UIKeyboardTransitionSlice* _rightSlice;

}
-(id)keysOrderedByPosition;
-(void)addSliceStart:(CGRect)arg1 end:(CGRect)arg2 startToken:(id)arg3 endToken:(id)arg4 left:(BOOL)arg5 normalization:(int)arg6 isDefaultWidth:(BOOL)arg7 row:(int)arg8 ;
-(id)init;
-(void)splitSpaceKey:(id)arg1 leftSpace:(id)arg2 left:(CGRect)arg3 right:(CGRect)arg4 ;
-(void)addKey:(id)arg1 withShape:(id)arg2 forRow:(id)arg3 attribs:(id)arg4 left:(BOOL)arg5 force:(BOOL)arg6 isDefaultWidth:(BOOL)arg7 ;
-(void)commitUncommittedSlices;
-(void)alignSpaceKeyEdges;
-(void)initializeGeneratorForKeyplane:(id)arg1 name:(id)arg2 ;
-(void)organizeKeyplaneIntoRows;
-(id)finalizeSplitKeyplane;
-(void)splitRow:(id)arg1 ;
-(id)generateRivenKeyplaneFromKeyplane:(id)arg1 forKeyboard:(id)arg2 ;
-(id)hintsForRow:(id)arg1 ;
-(void)dealloc;
@end

