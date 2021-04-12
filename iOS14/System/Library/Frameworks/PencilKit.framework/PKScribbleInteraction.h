/*
* Generated on Thursday, January 14, 2021 at 2:24:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <libobjc.A.dylib/PKScribbleInteractionWrapperProvider.h>
#import <UIKit/UIInteraction.h>

@protocol PKScribbleInteractionWrapper, PKScribbleInteractionDelegate, PKScribbleInteractionElementSource;
@class UIView, NSString;

@interface PKScribbleInteraction : NSObject <PKScribbleInteractionWrapperProvider, UIInteraction> {

	id<PKScribbleInteractionWrapper> _cachedWrapper;
	BOOL _requestElementsShouldCallBackSynchronously;
	id<PKScribbleInteractionDelegate> _delegate;
	id<PKScribbleInteractionElementSource> _elementSource;
	UIView* _view;

}

@property (assign,nonatomic,__weak) UIView * view;                                                     //@synthesize view=_view - In the implementation block
@property (assign,nonatomic) BOOL requestElementsShouldCallBackSynchronously;                          //@synthesize requestElementsShouldCallBackSynchronously=_requestElementsShouldCallBackSynchronously - In the implementation block
@property (assign,nonatomic,__weak) id<PKScribbleInteractionDelegate> delegate;                        //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<PKScribbleInteractionElementSource> elementSource;              //@synthesize elementSource=_elementSource - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<PKScribbleInteractionDelegate>)delegate;
-(void)didMoveToView:(id)arg1 ;
-(id)scribbleInteractionWrapper;
-(void)willMoveToView:(id)arg1 ;
-(void)setView:(UIView *)arg1 ;
-(void)setDelegate:(id<PKScribbleInteractionDelegate>)arg1 ;
-(UIView *)view;
-(void)setRequestElementsShouldCallBackSynchronously:(BOOL)arg1 ;
-(BOOL)requestElementsShouldCallBackSynchronously;
-(id<PKScribbleInteractionElementSource>)elementSource;
-(void)setElementSource:(id<PKScribbleInteractionElementSource>)arg1 ;
@end

