/*
* Generated on Monday, March 1, 2021 at 2:33:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <UIKitCore/UIGestureRecognizer.h>

@protocol TSWPHyperlinkHostRepProtocol;
@class TSDInteractiveCanvasController, TSWPHyperlinkField, TSDRep;

@interface TSAHyperlinkGestureRecognizer : UIGestureRecognizer {

	TSDInteractiveCanvasController* _icc;
	TSWPHyperlinkField* _hitField;
	TSDRep*<TSWPHyperlinkHostRepProtocol> _hitRep;
	BOOL _tapEnabled;
	BOOL _tapHoldEnabled;
	BOOL _wasTapHold;
	CGPoint _touchBeginPoint;

}

@property (nonatomic,retain) TSWPHyperlinkField * hitField;                             //@synthesize hitField=_hitField - In the implementation block
@property (nonatomic,retain) TSDRep*<TSWPHyperlinkHostRepProtocol> hitRep;              //@synthesize hitRep=_hitRep - In the implementation block
@property (assign,nonatomic) BOOL tapEnabled;                                           //@synthesize tapEnabled=_tapEnabled - In the implementation block
@property (assign,nonatomic) BOOL tapHoldEnabled;                                       //@synthesize tapHoldEnabled=_tapHoldEnabled - In the implementation block
@property (nonatomic,readonly) BOOL wasTapHold;                                         //@synthesize wasTapHold=_wasTapHold - In the implementation block
@property (assign,nonatomic) TSDInteractiveCanvasController * icc;                      //@synthesize icc=_icc - In the implementation block
-(void)dealloc;
-(void)setEnabled:(BOOL)arg1 ;
-(void)reset;
-(void)setState:(long long)arg1 ;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(TSDInteractiveCanvasController *)icc;
-(void)setIcc:(TSDInteractiveCanvasController *)arg1 ;
-(TSWPHyperlinkField *)hitField;
-(void)setHitRep:(TSDRep*<TSWPHyperlinkHostRepProtocol>)arg1 ;
-(void)setHitField:(TSWPHyperlinkField *)arg1 ;
-(TSDRep*<TSWPHyperlinkHostRepProtocol>)hitRep;
-(id)p_smartFieldForTouch:(id)arg1 outRep:(id*)arg2 ;
-(void)p_delayElapsed:(id)arg1 ;
-(BOOL)tapEnabled;
-(void)setTapEnabled:(BOOL)arg1 ;
-(BOOL)tapHoldEnabled;
-(void)setTapHoldEnabled:(BOOL)arg1 ;
-(BOOL)wasTapHold;
@end

