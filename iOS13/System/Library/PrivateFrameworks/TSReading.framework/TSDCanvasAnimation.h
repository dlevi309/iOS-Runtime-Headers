/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <libobjc.A.dylib/CAAnimationDelegate.h>

@class NSString, NSDate, CAMediaTimingFunction, TSUNoCopyDictionary, TSDInteractiveCanvasController;

@interface TSDCanvasAnimation : NSObject <CAAnimationDelegate> {

	NSString* _animationID;
	void* _context;
	id _delegate;
	SEL _willStartSelector;
	SEL _didStopSelector;
	double _duration;
	double _delay;
	NSDate* _startDate;
	CAMediaTimingFunction* _timingFunction;
	float _repeatCount;
	BOOL _repeatAutoreverses;
	TSUNoCopyDictionary* _animationDictionariesForLayers;
	/*^block*/id _completionBlock;
	unsigned _outstandingAnimationCount;
	BOOL _firstAnimationDidStart;
	BOOL _allAnimationsFinishedBeforeStopping;
	/*^block*/id _filterBlock;
	BOOL _useRepFiltering;
	TSDInteractiveCanvasController* _interactiveCanvasController;

}

@property (nonatomic,retain,readonly) NSString * animationID;                                             //@synthesize animationID=_animationID - In the implementation block
@property (nonatomic,readonly) void* context;                                                             //@synthesize context=_context - In the implementation block
@property (assign,nonatomic) id delegate;                                                                 //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) SEL willStartSelector;                                                       //@synthesize willStartSelector=_willStartSelector - In the implementation block
@property (assign,nonatomic) SEL didStopSelector;                                                         //@synthesize didStopSelector=_didStopSelector - In the implementation block
@property (assign,nonatomic) double duration;                                                             //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) double delay;                                                                //@synthesize delay=_delay - In the implementation block
@property (nonatomic,retain) NSDate * startDate;                                                          //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,retain) CAMediaTimingFunction * timingFunction;                                      //@synthesize timingFunction=_timingFunction - In the implementation block
@property (assign,nonatomic) float repeatCount;                                                           //@synthesize repeatCount=_repeatCount - In the implementation block
@property (assign,nonatomic) BOOL repeatAutoreverses;                                                     //@synthesize repeatAutoreverses=_repeatAutoreverses - In the implementation block
@property (assign,nonatomic) BOOL useRepFiltering;                                                        //@synthesize useRepFiltering=_useRepFiltering - In the implementation block
@property (nonatomic,copy) id completionBlock;                                                            //@synthesize completionBlock=_completionBlock - In the implementation block
@property (nonatomic,copy) id filterBlock;                                                                //@synthesize filterBlock=_filterBlock - In the implementation block
@property (nonatomic,readonly) TSDInteractiveCanvasController * interactiveCanvasController;              //@synthesize interactiveCanvasController=_interactiveCanvasController - In the implementation block
@property (nonatomic,readonly) double beginTime; 
@property (nonatomic,readonly) NSString * beginTimeMode; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)delegate;
-(void)setDelegate:(id)arg1 ;
-(double)delay;
-(void)setDelay:(double)arg1 ;
-(NSDate *)startDate;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(void*)context;
-(double)duration;
-(id)filterBlock;
-(void)setStartDate:(NSDate *)arg1 ;
-(void)setDuration:(double)arg1 ;
-(CAMediaTimingFunction *)timingFunction;
-(void)setTimingFunction:(CAMediaTimingFunction *)arg1 ;
-(double)beginTime;
-(NSString *)beginTimeMode;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(void)setRepeatCount:(float)arg1 ;
-(id)actionForLayer:(id)arg1 forKey:(id)arg2 ;
-(void)animationDidStart:(id)arg1 ;
-(float)repeatCount;
-(NSString *)animationID;
-(void)setFilterBlock:(id)arg1 ;
-(TSDInteractiveCanvasController *)interactiveCanvasController;
-(id)initWithAnimationID:(id)arg1 interactiveCanvasController:(id)arg2 context:(void*)arg3 ;
-(void)setWillStartSelector:(SEL)arg1 ;
-(void)setDidStopSelector:(SEL)arg1 ;
-(void)setRepeatAutoreverses:(BOOL)arg1 ;
-(void)setAnimation:(id)arg1 forLayer:(id)arg2 forKey:(id)arg3 ;
-(void)setUseRepFiltering:(BOOL)arg1 ;
-(SEL)willStartSelector;
-(SEL)didStopSelector;
-(BOOL)repeatAutoreverses;
-(BOOL)useRepFiltering;
@end

