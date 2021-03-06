/*
* Generated on Thursday, January 14, 2021 at 2:20:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <libobjc.A.dylib/PKScribbleInteractionWrapperProvider.h>
#import <UIKit/UIInteraction.h>

@protocol UIScribbleInteractionDelegate;
@class UIView, NSString;

@interface UIScribbleInteraction : NSObject <PKScribbleInteractionWrapperProvider, UIInteraction> {

	BOOL _handlingWriting;
	BOOL __defaultSystemInteraction;
	id<UIScribbleInteractionDelegate> _delegate;
	UIView* _view;

}

@property (assign,nonatomic,__weak) UIView * view;                                                             //@synthesize view=_view - In the implementation block
@property (getter=_isDefaultSystemInteraction,nonatomic,readonly) BOOL _defaultSystemInteraction;              //@synthesize _defaultSystemInteraction=__defaultSystemInteraction - In the implementation block
@property (nonatomic,__weak,readonly) id<UIScribbleInteractionDelegate> delegate;                              //@synthesize delegate=_delegate - In the implementation block
@property (getter=isHandlingWriting,nonatomic,readonly) BOOL handlingWriting;                                  //@synthesize handlingWriting=_handlingWriting - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)_lastEventSourceChanged:(long long)arg1 ;
+(BOOL)isPencilInputExpected;
+(double)_recommendedBlankSpaceHeight;
-(id<UIScribbleInteractionDelegate>)delegate;
-(void)didMoveToView:(id)arg1 ;
-(id)scribbleInteractionWrapper;
-(void)willMoveToView:(id)arg1 ;
-(void)setView:(UIView *)arg1 ;
-(BOOL)isHandlingWriting;
-(UIView *)view;
-(id)initWithDelegate:(id)arg1 ;
-(BOOL)_isDefaultSystemInteraction;
-(void)_setDefaultSystemInteraction:(BOOL)arg1 ;
-(void)_setHandlingWriting:(BOOL)arg1 ;
@end

