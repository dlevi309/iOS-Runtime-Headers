/*
* Generated on Thursday, January 14, 2021 at 2:20:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

@class CAContext, _UIContextBinder;


@protocol _UIContextBindable <_UIContextDescribing>
@property (assign,setter=_setBoundContext:,nonatomic,__weak) CAContext * _boundContext; 
@property (assign,setter=_setContextBinder:,nonatomic,__weak) _UIContextBinder * _contextBinder; 
@required
-(BOOL)_isVisible;
-(CAContext *)_boundContext;
-(void)_setContextBinder:(id)arg1;
-(void)_setBoundContext:(id)arg1;
-(id)_bindingLayer;
-(_UIContextBinder *)_contextBinder;
-(double)_bindableLevel;

@end

