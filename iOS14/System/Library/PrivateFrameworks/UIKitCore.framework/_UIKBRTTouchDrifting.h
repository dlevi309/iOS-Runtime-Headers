/*
* Generated on Thursday, January 14, 2021 at 2:20:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIKBRTKeyboardTouchObserver.h>

@protocol _UIKBRTTouchDriftingDelegate;
@class NSArray, NSMutableDictionary, _UIKBRTTouchHistory, _UIKBRTDecayingObject, _UIKBRTDecayingOffset, _UIKBRTTouchHistoryInfo, NSMutableSet, UIView, NSTimer, NSMapTable;

@interface _UIKBRTTouchDrifting : _UIKBRTKeyboardTouchObserver {

	BOOL _supportsDrifting;
	BOOL _leftDriftRemovingItems;
	BOOL _rightDriftRemovingItems;
	id<_UIKBRTTouchDriftingDelegate> _delegate;
	NSArray* _indexSearchOrder;
	NSMutableDictionary* _touches;
	_UIKBRTTouchHistory* _fHistory;
	_UIKBRTTouchHistory* _jHistory;
	_UIKBRTTouchHistory* _otherHistory;
	_UIKBRTDecayingObject* _enableLatchObj;
	_UIKBRTDecayingOffset* _leftHandDriftOffsetObj;
	_UIKBRTDecayingOffset* _leftHandFixedOffsetObj;
	_UIKBRTDecayingOffset* _rightHandDriftOffsetObj;
	_UIKBRTDecayingOffset* _rightHandFixedOffsetObj;
	_UIKBRTTouchHistoryInfo* _leftIndexFingerInfo;
	NSMutableSet* _leftDriftLockTouchIDs;
	_UIKBRTTouchHistoryInfo* _rightIndexFingerInfo;
	NSMutableSet* _rightDriftLockTouchIDs;
	UIView* _feedbackParentView;
	NSTimer* _feedbackTimer;
	UIView* _leftDriftFeedbackView;
	UIView* _rightDriftFeedbackView;
	UIView* _touchHistoryFeedbackView;
	NSMapTable* _touchHistoryViewMap;
	UIEdgeInsets _touchError;

}

@property (nonatomic,retain) NSArray * indexSearchOrder;                                   //@synthesize indexSearchOrder=_indexSearchOrder - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * touches;                                //@synthesize touches=_touches - In the implementation block
@property (nonatomic,retain) _UIKBRTTouchHistory * fHistory;                               //@synthesize fHistory=_fHistory - In the implementation block
@property (nonatomic,retain) _UIKBRTTouchHistory * jHistory;                               //@synthesize jHistory=_jHistory - In the implementation block
@property (nonatomic,retain) _UIKBRTTouchHistory * otherHistory;                           //@synthesize otherHistory=_otherHistory - In the implementation block
@property (assign,nonatomic) UIEdgeInsets touchError;                                      //@synthesize touchError=_touchError - In the implementation block
@property (assign,nonatomic) BOOL supportsDrifting;                                        //@synthesize supportsDrifting=_supportsDrifting - In the implementation block
@property (nonatomic,retain) _UIKBRTDecayingObject * enableLatchObj;                       //@synthesize enableLatchObj=_enableLatchObj - In the implementation block
@property (nonatomic,retain) _UIKBRTDecayingOffset * leftHandDriftOffsetObj;               //@synthesize leftHandDriftOffsetObj=_leftHandDriftOffsetObj - In the implementation block
@property (nonatomic,retain) _UIKBRTDecayingOffset * leftHandFixedOffsetObj;               //@synthesize leftHandFixedOffsetObj=_leftHandFixedOffsetObj - In the implementation block
@property (nonatomic,retain) _UIKBRTDecayingOffset * rightHandDriftOffsetObj;              //@synthesize rightHandDriftOffsetObj=_rightHandDriftOffsetObj - In the implementation block
@property (nonatomic,retain) _UIKBRTDecayingOffset * rightHandFixedOffsetObj;              //@synthesize rightHandFixedOffsetObj=_rightHandFixedOffsetObj - In the implementation block
@property (nonatomic,retain) _UIKBRTTouchHistoryInfo * leftIndexFingerInfo;                //@synthesize leftIndexFingerInfo=_leftIndexFingerInfo - In the implementation block
@property (nonatomic,retain) NSMutableSet * leftDriftLockTouchIDs;                         //@synthesize leftDriftLockTouchIDs=_leftDriftLockTouchIDs - In the implementation block
@property (assign,nonatomic) BOOL leftDriftRemovingItems;                                  //@synthesize leftDriftRemovingItems=_leftDriftRemovingItems - In the implementation block
@property (nonatomic,retain) _UIKBRTTouchHistoryInfo * rightIndexFingerInfo;               //@synthesize rightIndexFingerInfo=_rightIndexFingerInfo - In the implementation block
@property (nonatomic,retain) NSMutableSet * rightDriftLockTouchIDs;                        //@synthesize rightDriftLockTouchIDs=_rightDriftLockTouchIDs - In the implementation block
@property (assign,nonatomic) BOOL rightDriftRemovingItems;                                 //@synthesize rightDriftRemovingItems=_rightDriftRemovingItems - In the implementation block
@property (assign,nonatomic,__weak) UIView * feedbackParentView;                           //@synthesize feedbackParentView=_feedbackParentView - In the implementation block
@property (nonatomic,retain) NSTimer * feedbackTimer;                                      //@synthesize feedbackTimer=_feedbackTimer - In the implementation block
@property (nonatomic,retain) UIView * leftDriftFeedbackView;                               //@synthesize leftDriftFeedbackView=_leftDriftFeedbackView - In the implementation block
@property (nonatomic,retain) UIView * rightDriftFeedbackView;                              //@synthesize rightDriftFeedbackView=_rightDriftFeedbackView - In the implementation block
@property (nonatomic,retain) UIView * touchHistoryFeedbackView;                            //@synthesize touchHistoryFeedbackView=_touchHistoryFeedbackView - In the implementation block
@property (nonatomic,retain) NSMapTable * touchHistoryViewMap;                             //@synthesize touchHistoryViewMap=_touchHistoryViewMap - In the implementation block
@property (assign,nonatomic) id<_UIKBRTTouchDriftingDelegate> delegate;                    //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) CGPoint leftHandDriftOffset; 
@property (nonatomic,readonly) CGPoint rightHandDriftOffset; 
+(BOOL)isEnabled;
-(void)updateTouchWithIdentifier:(id)arg1 withTouchTime:(double)arg2 resultingError:(CGPoint)arg3 rowOffsetFromHomeRow:(long long)arg4 ;
-(NSMutableDictionary *)touches;
-(id)init;
-(id<_UIKBRTTouchDriftingDelegate>)delegate;
-(_UIKBRTTouchHistory *)fHistory;
-(NSMutableSet *)leftDriftLockTouchIDs;
-(NSMutableSet *)rightDriftLockTouchIDs;
-(void)_resetFeedback;
-(void)_updateDriftWithTouchInfo:(id)arg1 ;
-(void)_updateHistory;
-(id)_touchDictWithFingerIds:(id)arg1 ;
-(void)_updateDriftForFingers:(id)arg1 leftHand:(BOOL)arg2 newestTouch:(id)arg3 ;
-(void)_updateDriftView;
-(CGPoint)_offsetForPoint:(CGPoint)arg1 fromPoint:(CGPoint)arg2 ;
-(_UIKBRTDecayingObject *)enableLatchObj;
-(CGPoint)_pointFromPoint:(CGPoint)arg1 plusOffset:(CGPoint)arg2 ;
-(void)_updateDriftViewTimer:(id)arg1 ;
-(void)setTouchError:(UIEdgeInsets)arg1 ;
-(NSArray *)indexSearchOrder;
-(void)setIndexSearchOrder:(NSArray *)arg1 ;
-(void)setOtherHistory:(_UIKBRTTouchHistory *)arg1 ;
-(BOOL)supportsDrifting;
-(void)setSupportsDrifting:(BOOL)arg1 ;
-(void)setEnableLatchObj:(_UIKBRTDecayingObject *)arg1 ;
-(_UIKBRTDecayingOffset *)leftHandDriftOffsetObj;
-(_UIKBRTDecayingOffset *)leftHandFixedOffsetObj;
-(void)setLeftHandDriftOffsetObj:(_UIKBRTDecayingOffset *)arg1 ;
-(void)setLeftHandFixedOffsetObj:(_UIKBRTDecayingOffset *)arg1 ;
-(_UIKBRTDecayingOffset *)rightHandDriftOffsetObj;
-(void)setRightHandDriftOffsetObj:(_UIKBRTDecayingOffset *)arg1 ;
-(NSTimer *)feedbackTimer;
-(_UIKBRTDecayingOffset *)rightHandFixedOffsetObj;
-(void)setRightHandFixedOffsetObj:(_UIKBRTDecayingOffset *)arg1 ;
-(_UIKBRTTouchHistoryInfo *)leftIndexFingerInfo;
-(void)setLeftIndexFingerInfo:(_UIKBRTTouchHistoryInfo *)arg1 ;
-(_UIKBRTTouchHistoryInfo *)rightIndexFingerInfo;
-(void)setLeftDriftLockTouchIDs:(NSMutableSet *)arg1 ;
-(BOOL)leftDriftRemovingItems;
-(void)setLeftDriftRemovingItems:(BOOL)arg1 ;
-(void)setRightIndexFingerInfo:(_UIKBRTTouchHistoryInfo *)arg1 ;
-(void)setRightDriftLockTouchIDs:(NSMutableSet *)arg1 ;
-(BOOL)rightDriftRemovingItems;
-(void)setRightDriftRemovingItems:(BOOL)arg1 ;
-(UIView *)feedbackParentView;
-(void)setFeedbackTimer:(NSTimer *)arg1 ;
-(void)setFeedbackParentView:(UIView *)arg1 ;
-(UIView *)leftDriftFeedbackView;
-(NSMapTable *)touchHistoryViewMap;
-(void)setLeftDriftFeedbackView:(UIView *)arg1 ;
-(UIView *)rightDriftFeedbackView;
-(void)setRightDriftFeedbackView:(UIView *)arg1 ;
-(UIView *)touchHistoryFeedbackView;
-(void)setTouchHistoryFeedbackView:(UIView *)arg1 ;
-(void)setTouchHistoryViewMap:(NSMapTable *)arg1 ;
-(_UIKBRTTouchHistory *)jHistory;
-(void)setDelegate:(id<_UIKBRTTouchDriftingDelegate>)arg1 ;
-(void)removeTouchWithIdentifier:(id)arg1 touchCancelled:(BOOL)arg2 ;
-(id)initWithParentView:(id)arg1 ;
-(void)addTouchLocation:(CGPoint)arg1 withRadius:(double)arg2 withTouchTime:(double)arg3 withIdentifier:(id)arg4 ;
-(void)moveTouchWithIdentifier:(id)arg1 toLocation:(CGPoint)arg2 withRadius:(double)arg3 atTouchTime:(double)arg4 ;
-(void)updateWithFCenter:(CGPoint)arg1 jCenter:(CGPoint)arg2 keySize:(CGSize)arg3 rowOffsets:(id)arg4 homeRowOffsetIndex:(int)arg5 ;
-(void)ignoreTouchWithIdentifier:(id)arg1 withTouchTime:(double)arg2 ;
-(CGPoint)leftHandDriftOffset;
-(CGPoint)rightHandDriftOffset;
-(void)reset;
-(UIEdgeInsets)touchError;
-(CGPoint)_pinOffset:(CGPoint)arg1 ;
-(void)setFHistory:(_UIKBRTTouchHistory *)arg1 ;
-(void)setJHistory:(_UIKBRTTouchHistory *)arg1 ;
-(_UIKBRTTouchHistory *)otherHistory;
-(void)setTouches:(NSMutableDictionary *)arg1 ;
-(void)dealloc;
@end

