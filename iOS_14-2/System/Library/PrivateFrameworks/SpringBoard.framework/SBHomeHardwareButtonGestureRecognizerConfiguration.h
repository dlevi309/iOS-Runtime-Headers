/*
* Generated on Thursday, January 14, 2021 at 2:25:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setDoublePressUpGestureRecognizer:(UIHBClickGestureRecognizer *)arg1 ;
-(void)setDoubleTapUpGestureRecognizer:(UIHBClickGestureRecognizer *)arg1 ;
-(void)setInitialButtonUpGestureRecognizer:(UIHBClickGestureRecognizer *)arg1 ;
-(UIHBClickGestureRecognizer *)doubleTapUpGestureRecognizer;
-(UIHBClickGestureRecognizer *)triplePressUpGestureRecognizer;
-(void)setTriplePressUpGestureRecognizer:(UIHBClickGestureRecognizer *)arg1 ;
-(void)setSinglePressUpGestureRecognizer:(UIHBClickGestureRecognizer *)arg1 ;
-(void)setDoublePressDownGestureRecognizer:(UIHBClickGestureRecognizer *)arg1 ;
-(SBSystemGestureManager *)systemGestureManager;
-(UIHBLongClickGestureRecognizer *)longPressGestureRecognizer;
-(void)setAcceleratedSinglePressUpGestureRecognizer:(UIHBClickGestureRecognizer *)arg1 ;
-(void)setLongPressGestureRecognizer:(UIHBLongClickGestureRecognizer *)arg1 ;
-(void)setSystemGestureManager:(SBSystemGestureManager *)arg1 ;
-(BOOL)shouldConfigureDependencies;
-(UIHBClickGestureRecognizer *)initialButtonDownGestureRecognizer;
-(UIHBClickGestureRecognizer *)initialButtonUpGestureRecognizer;
-(void)setInitialButtonDownGestureRecognizer:(UIHBClickGestureRecognizer *)arg1 ;
-(UIHBClickGestureRecognizer *)acceleratedSinglePressUpGestureRecognizer;
-(UIHBClickGestureRecognizer *)doublePressDownGestureRecognizer;
-(UIHBClickGestureRecognizer *)doublePressUpGestureRecognizer;
-(UIHBClickGestureRecognizer *)singlePressUpGestureRecognizer;
@end

