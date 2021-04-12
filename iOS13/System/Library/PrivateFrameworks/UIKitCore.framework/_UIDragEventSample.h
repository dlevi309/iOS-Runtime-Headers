/*
* Generated on Monday, March 1, 2021 at 2:30:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class UIWindow;

@interface _UIDragEventSample : NSObject {

	BOOL _isApplicationEnter;
	BOOL _isApplicationWithin;
	BOOL _isApplicationExit;
	BOOL _isPolicyDriven;
	BOOL _isDragEnd;
	BOOL _hasBeenDelivered;
	unsigned _windowServerHitTestContextID;
	UIWindow* _window;
	CGPoint _sceneLocation;
	CGPoint _locationInWindow;

}

@property (nonatomic,readonly) UIWindow * window;                                  //@synthesize window=_window - In the implementation block
@property (nonatomic,readonly) CGPoint sceneLocation;                              //@synthesize sceneLocation=_sceneLocation - In the implementation block
@property (nonatomic,readonly) CGPoint locationInWindow;                           //@synthesize locationInWindow=_locationInWindow - In the implementation block
@property (nonatomic,readonly) BOOL isApplicationEnter;                            //@synthesize isApplicationEnter=_isApplicationEnter - In the implementation block
@property (nonatomic,readonly) BOOL isApplicationWithin;                           //@synthesize isApplicationWithin=_isApplicationWithin - In the implementation block
@property (nonatomic,readonly) BOOL isApplicationExit;                             //@synthesize isApplicationExit=_isApplicationExit - In the implementation block
@property (nonatomic,readonly) BOOL isPolicyDriven;                                //@synthesize isPolicyDriven=_isPolicyDriven - In the implementation block
@property (nonatomic,readonly) BOOL isDragEnd;                                     //@synthesize isDragEnd=_isDragEnd - In the implementation block
@property (nonatomic,readonly) unsigned windowServerHitTestContextID;              //@synthesize windowServerHitTestContextID=_windowServerHitTestContextID - In the implementation block
@property (assign,nonatomic) BOOL hasBeenDelivered;                                //@synthesize hasBeenDelivered=_hasBeenDelivered - In the implementation block
+(id)sampleFromHIDEvent:(IOHIDEventRef)arg1 ;
-(id)description;
-(UIWindow *)window;
-(BOOL)isPolicyDriven;
-(CGPoint)locationInWindow;
-(id)hitTestWithEvent:(id)arg1 ;
-(CGPoint)sceneLocation;
-(BOOL)isApplicationEnter;
-(BOOL)isApplicationWithin;
-(BOOL)isApplicationExit;
-(BOOL)isDragEnd;
-(unsigned)windowServerHitTestContextID;
-(BOOL)hasBeenDelivered;
-(void)setHasBeenDelivered:(BOOL)arg1 ;
@end

