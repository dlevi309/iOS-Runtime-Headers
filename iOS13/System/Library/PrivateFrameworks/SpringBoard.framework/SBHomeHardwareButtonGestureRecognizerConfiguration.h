/*
* Generated on Monday, March 1, 2021 at 2:35:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@class SBSystemGestureManager, UIHBClickGestureRecognizer, UIHBLongClickGestureRecognizer;

@interface SBHomeHardwareButtonGestureRecognizerConfiguration : NSObject {

	SBSystemGestureManager* _systemGestureManager;
	UIHBClickGestureRecognizer* _initialButtonDownGestureRecognizer;
	UIHBClickGestureRecognizer* _initialButtonUpGestureRecognizer;
	UIHBClickGestureRecognizer* _singlePressUpGestureRecognizer;
	UIHBClickGestureRecognizer* _acceleratedSinglePressUpGestureRecognizer;
	UIHBLongClickGestureRecognizer* _longPressGestureRecognizer;
	UIHBClickGestureRecognizer* _doublePressDownGestureRecognizer;
	UIHBClickGestureRecognizer* _doublePressUpGestureRecognizer;
	UIHBClickGestureRecognizer* _triplePressUpGestureRecognizer;
	UIHBClickGestureRecognizer* _doubleTapUpGestureRecognizer;

}

@property (nonatomic,retain) SBSystemGestureManager * systemGestureManager;                                       //@synthesize systemGestureManager=_systemGestureManager - In the implementation block
@property (nonatomic,retain) UIHBClickGestureRecognizer * initialButtonDownGestureRecognizer;                     //@synthesize initialButtonDownGestureRecognizer=_initialButtonDownGestureRecognizer - In the implementation block
@property (nonatomic,retain) UIHBClickGestureRecognizer * initialButtonUpGestureRecognizer;                       //@synthesize initialButtonUpGestureRecognizer=_initialButtonUpGestureRecognizer - In the implementation block
@property (nonatomic,retain) UIHBClickGestureRecognizer * singlePressUpGestureRecognizer;                         //@synthesize singlePressUpGestureRecognizer=_singlePressUpGestureRecognizer - In the implementation block
@property (nonatomic,retain) UIHBClickGestureRecognizer * acceleratedSinglePressUpGestureRecognizer;              //@synthesize acceleratedSinglePressUpGestureRecognizer=_acceleratedSinglePressUpGestureRecognizer - In the implementation block
@property (nonatomic,retain) UIHBLongClickGestureRecognizer * longPressGestureRecognizer;                         //@synthesize longPressGestureRecognizer=_longPressGestureRecognizer - In the implementation block
@property (nonatomic,retain) UIHBClickGestureRecognizer * doublePressDownGestureRecognizer;                       //@synthesize doublePressDownGestureRecognizer=_doublePressDownGestureRecognizer - In the implementation block
@property (nonatomic,retain) UIHBClickGestureRecognizer * doublePressUpGestureRecognizer;                         //@synthesize doublePressUpGestureRecognizer=_doublePressUpGestureRecognizer - In the implementation block
@property (nonatomic,retain) UIHBClickGestureRecognizer * triplePressUpGestureRecognizer;                         //@synthesize triplePressUpGestureRecognizer=_triplePressUpGestureRecognizer - In the implementation block
@property (nonatomic,retain) UIHBClickGestureRecognizer * doubleTapUpGestureRecognizer;                           //@synthesize doubleTapUpGestureRecognizer=_doubleTapUpGestureRecognizer - In the implementation block
@property (nonatomic,readonly) BOOL shouldConfigureDependencies; 
-(UIHBLongClickGestureRecognizer *)longPressGestureRecognizer;
-(void)setLongPressGestureRecognizer:(UIHBLongClickGestureRecognizer *)arg1 ;
-(BOOL)shouldConfigureDependencies;
-(SBSystemGestureManager *)systemGestureManager;
-(void)setSystemGestureManager:(SBSystemGestureManager *)arg1 ;
-(UIHBClickGestureRecognizer *)initialButtonDownGestureRecognizer;
-(void)setInitialButtonDownGestureRecognizer:(UIHBClickGestureRecognizer *)arg1 ;
-(UIHBClickGestureRecognizer *)initialButtonUpGestureRecognizer;
-(void)setInitialButtonUpGestureRecognizer:(UIHBClickGestureRecognizer *)arg1 ;
-(UIHBClickGestureRecognizer *)singlePressUpGestureRecognizer;
-(void)setSinglePressUpGestureRecognizer:(UIHBClickGestureRecognizer *)arg1 ;
-(UIHBClickGestureRecognizer *)acceleratedSinglePressUpGestureRecognizer;
-(void)setAcceleratedSinglePressUpGestureRecognizer:(UIHBClickGestureRecognizer *)arg1 ;
-(UIHBClickGestureRecognizer *)doublePressDownGestureRecognizer;
-(void)setDoublePressDownGestureRecognizer:(UIHBClickGestureRecognizer *)arg1 ;
-(UIHBClickGestureRecognizer *)doublePressUpGestureRecognizer;
-(void)setDoublePressUpGestureRecognizer:(UIHBClickGestureRecognizer *)arg1 ;
-(UIHBClickGestureRecognizer *)triplePressUpGestureRecognizer;
-(void)setTriplePressUpGestureRecognizer:(UIHBClickGestureRecognizer *)arg1 ;
-(UIHBClickGestureRecognizer *)doubleTapUpGestureRecognizer;
-(void)setDoubleTapUpGestureRecognizer:(UIHBClickGestureRecognizer *)arg1 ;
@end

