/*
* Generated on Monday, March 1, 2021 at 2:30:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

@class CAContext, _UIContextBinder;


@protocol _UIContextBindable <_UIContextDescribing>
@property (assign,setter=_setBoundContext:,nonatomic,__weak) CAContext * _boundContext; 
@property (assign,setter=_setContextBinder:,nonatomic,__weak) _UIContextBinder * _contextBinder; 
@required
-(_UIContextBinder *)_contextBinder;
-(void)_setContextBinder:(id)arg1;
-(CAContext *)_boundContext;
-(void)_setBoundContext:(id)arg1;
-(double)_bindableLevel;
-(id)_bindingLayer;
-(BOOL)_isVisible;

@end

