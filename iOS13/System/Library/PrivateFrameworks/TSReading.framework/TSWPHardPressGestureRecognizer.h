/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <UIKitCore/_UINonEditableTextSelectionForceGesture.h>

@class TSWPRep;

@interface TSWPHardPressGestureRecognizer : _UINonEditableTextSelectionForceGesture {

	TSWPRep* _targetRep;
	unsigned long long _previousPressCount;

}

@property (nonatomic,retain) TSWPRep * targetRep;                                 //@synthesize targetRep=_targetRep - In the implementation block
@property (assign,nonatomic) unsigned long long previousPressCount;               //@synthesize previousPressCount=_previousPressCount - In the implementation block
@property (nonatomic,readonly) unsigned long long currentPressCount; 
-(void)dealloc;
-(BOOL)shouldAllowSelectionGestures:(BOOL)arg1 atPoint:(CGPoint)arg2 toBegin:(BOOL)arg3 ;
-(void)setTargetRep:(TSWPRep *)arg1 ;
-(TSWPRep *)targetRep;
-(unsigned long long)currentPressCount;
-(unsigned long long)previousPressCount;
-(void)setPreviousPressCount:(unsigned long long)arg1 ;
@end

